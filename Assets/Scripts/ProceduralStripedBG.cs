using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(RawImage))]
public class ProceduralStripedBG : MonoBehaviour
{
    [Header("Tile settings")]
    public int tileSize = 64;
    public int widthTiles = 8;
    public int heightTiles = 6;

    [Header("Colors (alpha controls subtlety)")]  
    public Color colorA = new Color(1f, 1f, 1f, 0.08f);
    public Color colorB = new Color(0f, 0f, 0f, 0f);

    [Header("Scrolling")]
    public float scrollSpeed = 0.5f; // small value looks subtle
    public bool diagonalStripes = true;

    private RawImage raw;
    private Texture2D tex;

    void Start()
    {
        raw = GetComponent<RawImage>();

        // Create texture
        tex = new Texture2D(tileSize, tileSize, TextureFormat.RGBA32, false);
        tex.wrapMode = TextureWrapMode.Repeat;

        // Fill tile with stripes
        int stripeWidth = Mathf.Max(1, tileSize / 8);
        for (int y = 0; y < tileSize; y++)
        {
            for (int x = 0; x < tileSize; x++)
            {
                bool useA;
                if (diagonalStripes)
                {
                    useA = ((x + y) / stripeWidth) % 2 == 0;
                }
                else
                {
                    useA = (x / stripeWidth) % 2 == 0;
                }
                tex.SetPixel(x, y, useA ? colorA : colorB);
            }
        }
        tex.Apply();

        raw.texture = tex;
        raw.uvRect = new Rect(0, 0, widthTiles, heightTiles);

        // Make sure RawImage is visible but subtle
        raw.color = Color.white;
    }

    void Update()
    {
        if (raw == null) return;
        var uv = raw.uvRect;
        uv.x += scrollSpeed * Time.deltaTime * 0.01f; // small step
        raw.uvRect = uv;
    }

    void OnDestroy()
    {
        if (tex != null) Destroy(tex);
    }
}
