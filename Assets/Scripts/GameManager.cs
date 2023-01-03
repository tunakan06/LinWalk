using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using TMPro;
using UnityEngine.UI;


public class GameManager : MonoBehaviour
{
    public bool night, talkingNow;
    public GameObject messageWindow;
    private Image messageWindowI;
    public List<string> charaTalkingWords = new List<string>();
    public TextMeshProUGUI talkingText, nameText;
    public AudioClip proceedingTalkSE;


    void Start()
    {
        messageWindowI = messageWindow.GetComponent<Image>();
        nameText.text = "";
        talkingText.text = "";
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
        }
        else
        {
            messageWindow.SetActive(false);
            //audioSourceSE.PlayOneShot(proceedingTalkSE);
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
        float minPitch = pitch - 0.5f;
        float maxPitch = pitch + 0.5f;
        while (charaTalkingWords[0].Length > messageCount)//文字をすべて表示していない場合ループ
        {
            if (messageCount % 2 == 0)
            {
                charaAS.pitch = Random.Range(minPitch, maxPitch);
                charaAS.PlayOneShot(proceedingTalkSE);
            }
            talkingText.text += charaTalkingWords[0][messageCount];//一文字追加
            messageCount++;//現在の文字数
            yield return new WaitForSeconds(0.04f);
        }
        charaTalkingWords.RemoveAt(0);
        talkingNow = false;
    }
}