#if UNITY_EDITOR
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using UnityEditor.SceneManagement;

/// <summary>
/// Editor utility to add a subtle patterned background to a Unity scene.
/// This creates a Canvas with a RawImage component and ProceduralStripedBG script.
/// </summary>
public static class TitleScreenSetup
{
    [MenuItem("Tools/Title Screen/Add Pattern Background")]
    static void AddPatternBackground()
    {
        // Check if a scene is open
        var activeScene = EditorSceneManager.GetActiveScene();
        if (!activeScene.IsValid() || string.IsNullOrEmpty(activeScene.path))
        {
            EditorUtility.DisplayDialog(
                "No Scene Open",
                "Please open the scene you want to add the pattern background to before running this tool.",
                "OK"
            );
            return;
        }

        // Find or create Canvas
        Canvas canvas = GameObject.FindFirstObjectByType<Canvas>();
        if (canvas == null)
        {
            // Create a new Canvas
            GameObject canvasObj = new GameObject("Canvas");
            canvas = canvasObj.AddComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceOverlay;
            
            // Add CanvasScaler
            CanvasScaler scaler = canvasObj.AddComponent<CanvasScaler>();
            scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            scaler.referenceResolution = new Vector2(1920, 1080);
            
            // Add GraphicRaycaster
            canvasObj.AddComponent<GraphicRaycaster>();
            
            // Register creation with Undo system
            Undo.RegisterCreatedObjectUndo(canvasObj, "Create Canvas");
            
            Debug.Log("Created new Canvas in scene.");
        }

        // Check if background already exists
        Transform existingBG = canvas.transform.Find("TitlePattern_Background");
        if (existingBG != null)
        {
            bool replace = EditorUtility.DisplayDialog(
                "Background Already Exists",
                "A 'TitlePattern_Background' object already exists in the Canvas. Do you want to replace it?",
                "Replace",
                "Cancel"
            );
            
            if (!replace)
            {
                Debug.Log("Operation cancelled - background already exists.");
                return;
            }
            
            // Delete the existing background
            Undo.DestroyObjectImmediate(existingBG.gameObject);
        }

        // Create the background GameObject
        GameObject bgObj = new GameObject("TitlePattern_Background");
        RectTransform bgRect = bgObj.AddComponent<RectTransform>();
        
        // Set as child of Canvas
        bgObj.transform.SetParent(canvas.transform, false);
        
        // Move to first position (render behind other UI elements)
        bgObj.transform.SetAsFirstSibling();
        
        // Configure RectTransform to fill the screen
        bgRect.anchorMin = new Vector2(0, 0);
        bgRect.anchorMax = new Vector2(1, 1);
        bgRect.offsetMin = Vector2.zero;
        bgRect.offsetMax = Vector2.zero;
        
        // Add RawImage component
        RawImage rawImage = bgObj.AddComponent<RawImage>();
        rawImage.raycastTarget = false; // Don't block raycasts
        
        // Add ProceduralStripedBG component with default parameters
        ProceduralStripedBG stripedBG = bgObj.AddComponent<ProceduralStripedBG>();
        stripedBG.tileSize = 64;
        stripedBG.widthTiles = 8;
        stripedBG.heightTiles = 6;
        stripedBG.colorA = new Color(1f, 1f, 1f, 0.08f);
        stripedBG.colorB = new Color(0f, 0f, 0f, 0f); // transparent
        stripedBG.scrollSpeed = 0.5f;
        stripedBG.diagonalStripes = true;
        
        // Register the creation with Undo system
        Undo.RegisterCreatedObjectUndo(bgObj, "Add Pattern Background");
        
        // Mark the scene as dirty (modified)
        EditorSceneManager.MarkSceneDirty(activeScene);
        
        // Ask user if they want to save the scene
        bool shouldSave = EditorUtility.DisplayDialog(
            "Save Scene?",
            $"Pattern background has been added to scene '{activeScene.name}'.\n\nWould you like to save the scene now?",
            "Save",
            "Don't Save"
        );
        
        if (shouldSave)
        {
            bool saved = EditorSceneManager.SaveScene(activeScene);
            if (saved)
            {
                Debug.Log($"Successfully added pattern background to scene '{activeScene.name}' and saved the scene.");
            }
            else
            {
                Debug.LogWarning($"Pattern background added to scene '{activeScene.name}', but scene could not be saved. Please save manually.");
            }
        }
        else
        {
            Debug.Log($"Pattern background added to scene '{activeScene.name}'. Remember to save the scene manually.");
        }
        
        // Select the newly created object in the hierarchy
        Selection.activeGameObject = bgObj;
    }
}
#endif
