using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Simple procedural striped background:
/// - Generates a repeatable Texture2D of stripes
/// - Assigns it to the sibling RawImage.texture
/// - Scrolls via RawImage.uvRect
/// Works in Editor and Play mode (ExecuteAlways).
/// </summary>
[ExecuteAlways]
[DisallowMultipleComponent]
public class ProceduralStripedBG : MonoBehaviour
{
    [Header("Pattern")]
    public int tileSize = 64;
    public int widthTiles = 8;
    public int heightTiles = 6;

    [Header("Colors")]
    public Color colorA = new Color(1f, 1f, 1f, 0.08f);
    public Color colorB = new Color(0f, 0f, 0f, 0f);

    [Header("Motion")]
    public float scrollSpeed = 0.05f; // uv units / second
    public bool diagonalStripes = true;

    Texture2D tex;
    RawImage raw;
    Vector2 uvOffset;

    void OnEnable()
    {
        EnsureRawImage();
        GenerateTexture();
        ApplyTexture();
    }

    void OnDisable()
    {
        // avoid leaking textures in editor
#if UNITY_EDITOR
        if (tex != null && Application.isEditor && !Application.isPlaying)
        {
            DestroyImmediate(tex);
            tex = null;
        }
#endif
    }

    void OnValidate()
    {
        // update in editor when properties change
        EnsureRawImage();
        GenerateTexture();
        ApplyTexture();
    }

    void EnsureRawImage()
    {
        if (raw == null) raw = GetComponent<RawImage>();
        if (raw == null)
        {
            raw = gameObject.AddComponent<RawImage>();
            raw.raycastTarget = false;
        }
    }

    void GenerateTexture()
    {
        // compute size (clamped to reasonable limits)
        int w = Mathf.Clamp(tileSize * Mathf.Max(1, widthTiles), 2, 4096);
        int h = Mathf.Clamp(tileSize * Mathf.Max(1, heightTiles), 2, 4096);

        // reuse if same size
        if (tex != null && tex.width == w && tex.height == h) return;

        if (tex != null)
        {
#if UNITY_EDITOR
            DestroyImmediate(tex);
#else
            Destroy(tex);
#endif
            tex = null;
        }

        tex = new Texture2D(w, h, TextureFormat.RGBA32, false);
        tex.wrapMode = TextureWrapMode.Repeat;
        tex.filterMode = FilterMode.Bilinear;

        Color[] pixels = new Color[w * h];

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                int tx = x / tileSize;
                int ty = y / tileSize;
                bool isA;
                if (diagonalStripes)
                    isA = ((tx + ty) & 1) == 0;
                else
                    isA = (tx & 1) == 0;

                pixels[y * w + x] = isA ? colorA : colorB;
            }
        }

        tex.SetPixels(pixels);
        tex.Apply();
    }

    void ApplyTexture()
    {
        if (raw == null) EnsureRawImage();
        if (raw != null && tex != null)
        {
            raw.texture = tex;
            raw.raycastTarget = false;
        }
    }

    void Update()
    {
        if (raw == null) EnsureRawImage();
        if (raw == null) return;

        // move uv offset horizontally
        uvOffset.x += scrollSpeed * Time.deltaTime;
        // keep offset bounded
        uvOffset.x = uvOffset.x % 1f;
        Rect uv = raw.uvRect;
        uv.x = uvOffset.x;
        raw.uvRect = uv;
    }
}