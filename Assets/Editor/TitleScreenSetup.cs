#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// Editor utility to add a subtle scrollable patterned background to the title scene Canvas.
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

        // Inform user about auto-save
        if (!EditorUtility.DisplayDialog("Add Pattern Background",
            "This will add a TitlePattern_Background to the active scene's Canvas and save the scene.\n\nContinue?",
            "Yes", "Cancel"))
        {
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
            Object.DestroyImmediate(existing.gameObject);
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

        // Mark scene dirty and save
        EditorSceneManager.MarkSceneDirty(activeScene);
        EditorSceneManager.SaveScene(activeScene);

        EditorUtility.DisplayDialog("Done", "Title pattern background added and scene saved.", "OK");
        Debug.Log("[TitleScreenSetup] Added TitlePattern_Background to scene: " + activeScene.name);
    }
}
#endif
