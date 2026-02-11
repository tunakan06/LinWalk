using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class Title : MonoBehaviour
{
    // タイトルテキストのパルスアニメーション用
    [SerializeField] private RectTransform titleTransform;
    [SerializeField] private float pulseSpeed = 1.5f;
    [SerializeField] private float pulseAmount = 0.05f;

    // "Press Z to Start" テキストの点滅用（TextMeshPro対応）
    [SerializeField] private TMP_Text pressStartText;
    [SerializeField] private float blinkSpeed = 2f;

    // シーン遷移時のフェードアウト用
    [SerializeField] private Image fadePanel;
    [SerializeField] private float fadeDuration = 0.8f;

    // パーティクルエフェクト用
    [SerializeField] private ParticleSystem titleParticles;

    // BGM用
    [SerializeField] private AudioSource bgmSource;

    // 背景色のグラデーション変化用
    [Header("Background Gradient")]
    [SerializeField] private Color[] gradientColors = new Color[]
    {
        new Color(0.71f, 0.52f, 0.9f),   // 柔らかいラベンダー
        new Color(0.53f, 0.81f, 0.92f),  // 淡い水色
        new Color(0.6f, 0.9f, 0.75f),    // ミントグリーン
        new Color(1f, 0.8f, 0.7f),       // 淡いピーチ
        new Color(0.95f, 0.6f, 0.73f),   // ソフトピンク
        new Color(0.98f, 0.7f, 0.6f),    // 淡いサーモン
        new Color(0.8f, 0.7f, 0.9f)      // ソフトラベンダー
    };
    [SerializeField] private float gradientSpeed = 0.5f;

    private Vector3 originalTitleScale;
    private bool isFading = false;
    private Camera mainCamera;
    private int gradientColorCount;

    void Start()
    {
        // メインカメラのキャッシュ
        mainCamera = Camera.main;
        if (mainCamera == null)
        {
            Debug.LogWarning("[Title] Main camera not found. Background gradient will not be applied.");
        }

        // グラデーションカラー数のキャッシュ
        if (gradientColors != null)
        {
            gradientColorCount = gradientColors.Length;
        }

        // タイトルのオリジナルスケールを保存
        if (titleTransform != null)
        {
            originalTitleScale = titleTransform.localScale;
        }

        // フェードパネルの初期化（完全に透明にする）
        if (fadePanel != null)
        {
            Color color = fadePanel.color;
            color.a = 0f;
            fadePanel.color = color;
        }

        // パーティクルエフェクトの再生
        if (titleParticles != null)
        {
            titleParticles.Play();
        }

        // BGMの再生
        if (bgmSource != null && !bgmSource.isPlaying)
        {
            bgmSource.Play();
        }
    }

    void Update()
    {
        // 背景色のグラデーション変化
        if (mainCamera != null && gradientColorCount > 0)
        {
            float t = Time.time * gradientSpeed;
            int currentIndex = Mathf.FloorToInt(t) % gradientColorCount;
            int nextIndex = (currentIndex + 1) % gradientColorCount;
            float lerpFactor = t - Mathf.Floor(t);
            mainCamera.backgroundColor = Color.Lerp(gradientColors[currentIndex], gradientColors[nextIndex], lerpFactor);
        }

        // タイトルテキストのパルスアニメーション
        if (titleTransform != null)
        {
            float scale = 1f + Mathf.Sin(Time.time * pulseSpeed) * pulseAmount;
            titleTransform.localScale = originalTitleScale * scale;
        }

        // "Press Z to Start" テキストの点滅（TextMeshPro対応）
        if (pressStartText != null)
        {
            Color color = pressStartText.color;
            color.a = Mathf.PingPong(Time.time * blinkSpeed, 1f);
            pressStartText.color = color;
        }

        // シーン遷移（フェード中は二重遷移を防止）
        if (Input.GetKeyDown(KeyCode.Z) && !isFading)
        {
            if (fadePanel != null)
            {
                StartCoroutine(FadeOutAndLoadScene());
            }
            else
            {
                // フェードパネルがない場合はすぐに遷移
                SceneManager.LoadScene("MainGame");
            }
        }
    }

    /// <summary>
    /// フェードアウトしてからシーン遷移する
    /// </summary>
    private IEnumerator FadeOutAndLoadScene()
    {
        isFading = true;

        float elapsedTime = 0f;
        Color color = fadePanel.color;

        while (elapsedTime < fadeDuration)
        {
            elapsedTime += Time.deltaTime;
            color.a = Mathf.Clamp01(elapsedTime / fadeDuration);
            fadePanel.color = color;
            yield return null;
        }

        color.a = 1f;
        fadePanel.color = color;

        // シーン遷移
        SceneManager.LoadScene("MainGame");
    }
}