#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// Adds a patterned RawImage background (ProceduralStripedBG) to the active scene's Canvas.
/// Menu: Tools / Title Screen / Add Pattern Background
/// </summary>
public static class TitleScreenSetup
{
    [MenuItem("Tools/Title Screen/Add Pattern Background")]
    public static void AddPatternBackground()
    {
        var activeScene = SceneManager.GetActiveScene();
        if (!activeScene.isLoaded)
        {
            EditorUtility.DisplayDialog("No Scene Open",
                "Please open the title scene you want to modify and run this command again.",
                "OK");
            return;
        }

        // Find or create Canvas
        Canvas canvas = Object.FindObjectOfType<Canvas>();
        GameObject canvasGO;
        if (canvas == null)
        {
            canvasGO = new GameObject("Canvas", typeof(Canvas), typeof(CanvasScaler), typeof(GraphicRaycaster));
            canvas = canvasGO.GetComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceOverlay;

            var cs = canvasGO.GetComponent<CanvasScaler>();
            cs.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            cs.referenceResolution = new Vector2(1920, 1080);

            // allow undo for created canvas
            Undo.RegisterCreatedObjectUndo(canvasGO, "Create Canvas");
        }
        else
        {
            canvasGO = canvas.gameObject;
        }

        // If background exists, offer overwrite
        var existing = canvasGO.transform.Find("TitlePattern_Background");
        if (existing != null)
        {
            if (!EditorUtility.DisplayDialog("Background Exists",
                "A 'TitlePattern_Background' object already exists. Overwrite it?",
                "Overwrite", "Cancel"))
            {
                return;
            }
            // use undo-aware destroy so user can undo
            Undo.DestroyObjectImmediate(existing.gameObject);
        }

        // Create background RawImage
        var bg = new GameObject("TitlePattern_Background", typeof(RawImage));
        bg.transform.SetParent(canvasGO.transform, false);

        var rt = bg.GetComponent<RectTransform>();
        rt.anchorMin = Vector2.zero;
        rt.anchorMax = Vector2.one;
        rt.anchoredPosition = Vector2.zero;
        rt.sizeDelta = Vector2.zero;

        var raw = bg.GetComponent<RawImage>();
        raw.raycastTarget = false;

        // Place behind other UI
        bg.transform.SetAsFirstSibling();

        // Add ProceduralStripedBG and set defaults
        var comp = bg.AddComponent<ProceduralStripedBG>();
        comp.tileSize = 64;
        comp.widthTiles = 8;
        comp.heightTiles = 6;
        comp.colorA = new Color(1f, 1f, 1f, 0.08f);
        comp.colorB = new Color(0f, 0f, 0f, 0f);
        comp.scrollSpeed = 0.5f;
        comp.diagonalStripes = true;

        // allow undo for created background
        Undo.RegisterCreatedObjectUndo(bg, "Add TitlePattern_Background");

        // Mark scene dirty and ask to save
        EditorSceneManager.MarkSceneDirty(activeScene);

        if (EditorUtility.DisplayDialog("Save Scene?", "The scene was modified. Save now?", "Save", "Don't Save"))
        {
            EditorSceneManager.SaveScene(activeScene);
            EditorUtility.DisplayDialog("Done", "Title pattern background added and scene saved.", "OK");
        }
        else
        {
            EditorUtility.DisplayDialog("Done", "Title pattern background added. Scene not saved (unsaved changes present).", "OK");
        }

        Debug.Log("[TitleScreenSetup] Added TitlePattern_Background to scene: " + activeScene.name);
    }
}
#endif
