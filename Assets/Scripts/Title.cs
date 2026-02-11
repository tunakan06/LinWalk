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

    private Vector3 originalTitleScale;
    private bool isFading = false;

    void Start()
    {
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