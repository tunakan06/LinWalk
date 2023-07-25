using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour
{
    public bool night, talkingNow;
    public GameObject messageWindow;
    private Image messageWindowI;
    public List<string> charaTalkingWords = new List<string>();
    public TextMeshProUGUI talkingText, nameText;
    public AudioClip proceedingTalkSE;
    public GameObject endText;
    private bool clearFlag;
    public TextMeshProUGUI scorePanelTxt;
    public int score = 0;

    // ピッチ幅
    private float pitchBreadth = 0.5f;

    // 

    void Start()
    {
        messageWindowI = messageWindow.GetComponent<Image>();
        nameText.text = "";
        talkingText.text = "";
        clearFlag = false;
    }

    /// <summary>
    /// Update
    /// </summary>
    private void Update()
    {
        
    }

    /// <summary>
    /// メッセージウィンドウを表示する
    /// </summary>
    /// <param name="words"></param>
    /// <param name="name"></param>
    public void DisplayMessageWindow(List<string> words, string name)
    {
        nameText.text = name;
        charaTalkingWords.Clear();
        charaTalkingWords = new List<string>(words);
        messageWindow.SetActive(true);
        talkingText.text = charaTalkingWords[0];
        //charaTalkingWords.RemoveAt(0);
    }

    /// <summary>
    /// 話を進める
    /// </summary>
    /// <param name="charaAS"></param>
    /// <param name="pitch"></param>
    public void ProceedingTalk(AudioSource charaAS, float pitch)
    {
        if (charaTalkingWords.Count > 0)
        {
            if (talkingNow == true)
            {
                return;
            }
            // talkingText.text = charaTalkingWords[0];
            StartCoroutine(TalkText(charaAS, pitch));
            //audioSourceSE.PlayOneShot(proceedingTalkSE);
            if (clearFlag)
            {
                Clear();
            }
        }
        else
        {
            messageWindow.SetActive(false);
            //audioSourceSE.PlayOneShot(proceedingTalkSE);
            if (clearFlag)
            {
                Clear();
            }
        }
    }

    /// <summary>
    /// メッセージウィンドウを閉じる
    /// </summary>
    public void CloseMessageWindow()
    {
        messageWindow.SetActive(false);
    }

    /// <summary>
    /// テキストを話す
    /// </summary>
    /// <param name="charaAS"></param>
    /// <param name="pitch"></param>
    /// <returns></returns>
    private IEnumerator TalkText(AudioSource charaAS, float pitch)
    {
        talkingNow = true;
        int messageCount = 0; //現在表示中の文字数
        talkingText.text = ""; //テキストのリセット
        float minPitch = pitch - pitchBreadth;
        float maxPitch = pitch + pitchBreadth;
        string endTalk = "ムフフーー";
        while (charaTalkingWords[0].Length > messageCount)//文字をすべて表示していない場合ループ
        {
            if (messageCount % 2 == 0)
            {
                charaAS.pitch = Random.Range(minPitch, maxPitch);
                charaAS.PlayOneShot(proceedingTalkSE);
            }
            talkingText.text += charaTalkingWords[0][messageCount];//一文字追加
            if (talkingText.text == endTalk)
            {
                // クリアテキスト出力
                endText.SetActive(true);
                clearFlag = true;
                yield return new WaitForSeconds(3.00f);

            }
            messageCount++;//現在の文字数
            yield return new WaitForSeconds(0.04f);
        }
        charaTalkingWords.RemoveAt(0);
        talkingNow = false;
    }

    /// <summary>
    /// クリア処理
    /// </summary>
    private void Clear()
    {
        SceneManager.LoadScene("Title");
    }

    /// <summary>
    /// スコア加点
    /// </summary>
    public void ScoreAdd()
    {
        score += 500;
        scorePanelTxt.text = "SCORE: " + score.ToString();
    }
}