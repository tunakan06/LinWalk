#if UNITY_EDITOR
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using UnityEditor.SceneManagement;

public class TitleScreenSetup
{
    private const string BackgroundObjectName = "TitlePattern_Background";

    [MenuItem("Tools/Title Screen/Add Pattern Background")]
    private static void AddPatternBackground()
    {
        try
        {
            // Check if there's an active scene
            var scene = EditorSceneManager.GetActiveScene();
            if (!scene.IsValid())
            {
                EditorUtility.DisplayDialog("Error", "No active scene found. Please open a scene first.", "OK");
                return;
            }

            // Find or create Canvas
            Canvas canvas = Object.FindObjectOfType<Canvas>();
            if (canvas == null)
            {
                canvas = CreateCanvas();
            }

            // Check if background already exists
            Transform existingBG = canvas.transform.Find(BackgroundObjectName);
            if (existingBG != null)
            {
                bool overwrite = EditorUtility.DisplayDialog(
                    "Background Already Exists",
                    $"An object named '{BackgroundObjectName}' already exists in the Canvas. Do you want to replace it?",
                    "Replace",
                    "Cancel"
                );

                if (!overwrite)
                {
                    return;
                }

                // Remove the existing background
                GameObject.DestroyImmediate(existingBG.gameObject);
            }

            // Create the RawImage background
            GameObject bgObject = new GameObject(BackgroundObjectName);
            bgObject.transform.SetParent(canvas.transform);
            bgObject.transform.SetAsFirstSibling(); // Place as first sibling (renders at the back in UI layer order)

            // Add RawImage component
            RawImage rawImage = bgObject.AddComponent<RawImage>();
            rawImage.raycastTarget = false;

            // Configure RectTransform to be fullscreen
            RectTransform rectTransform = bgObject.GetComponent<RectTransform>();
            rectTransform.anchorMin = Vector2.zero;
            rectTransform.anchorMax = Vector2.one;
            rectTransform.offsetMin = Vector2.zero;
            rectTransform.offsetMax = Vector2.zero;

            // Add ProceduralStripedBG component with default values
            ProceduralStripedBG stripedBG = bgObject.AddComponent<ProceduralStripedBG>();
            stripedBG.tileSize = 64;
            stripedBG.widthTiles = 8;
            stripedBG.heightTiles = 6;
            stripedBG.colorA = new Color(1f, 1f, 1f, 0.08f);
            stripedBG.colorB = new Color(0f, 0f, 0f, 0f); // transparent
            stripedBG.scrollSpeed = 0.5f;
            stripedBG.diagonalStripes = true;

            // Mark the scene as dirty and save
            EditorSceneManager.MarkSceneDirty(scene);
            EditorSceneManager.SaveScene(scene);

            // Show completion dialog
            EditorUtility.DisplayDialog(
                "Success",
                $"Pattern background '{BackgroundObjectName}' has been added to the Canvas successfully!\n\n" +
                "You can adjust the pattern settings in the Inspector.",
                "OK"
            );

            // Select the created object in the hierarchy
            Selection.activeGameObject = bgObject;
        }
        catch (System.Exception ex)
        {
            EditorUtility.DisplayDialog("Error", $"Failed to add pattern background:\n{ex.Message}", "OK");
            Debug.LogError($"Error adding pattern background: {ex}");
        }
    }

    private static Canvas CreateCanvas()
    {
        // Create Canvas GameObject
        GameObject canvasObject = new GameObject("Canvas");
        Canvas canvas = canvasObject.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;

        // Add CanvasScaler
        CanvasScaler scaler = canvasObject.AddComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1920, 1080);

        // Add GraphicRaycaster
        canvasObject.AddComponent<GraphicRaycaster>();

        return canvas;
    }
}
#endif
