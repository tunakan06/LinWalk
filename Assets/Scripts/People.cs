using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]

public class People : MonoBehaviour
{
    private GameObject player;
    [System.NonSerialized]
    public GameObject speechBubbleOb;
    private GameManager gameManager;

    public List<string> talkingWords = new List<string>();

    public bool man;

    private AudioSource audioSource;
    public float audioPitch;
    private CapsuleCollider capsuleCollider;

    // クリアスコア
    private int clearScore = 3000;

    // プレイヤーとの距離の閾値
    private float distanceThresholdFromPlayer = 2.5f;

    // Start is called before the first frame update
    public virtual void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        gameManager = GameObject.FindGameObjectWithTag("GameManager").GetComponent<GameManager>();
        speechBubbleOb = transform.Find("SpeechBubble").gameObject;
        audioSource = GetComponent<AudioSource>();
        AddWords();
        Gender();
    }


    // Update is called once per frame
    void Update()
    {
        if (gameManager.score >= clearScore)
        {
            AddWordsClear();
        }

        if (speechBubbleOb == null) return;
        float disToPlayer = Vector3.Distance(transform.position, player.transform.position);
        if (disToPlayer < distanceThresholdFromPlayer && speechBubbleOb.activeSelf == false)
        {
            StartCoroutine("DisplaySB");
        }
        if (disToPlayer >= distanceThresholdFromPlayer && speechBubbleOb.activeSelf == true)
        {
            StartCoroutine("CloseSB");
            gameManager.CloseMessageWindow();
        }


        if (speechBubbleOb.activeSelf == true)
        {
            if (Input.GetKeyDown(KeyCode.F))  // GetKey → GetKeyDown に変更
            {
                var diff = (player.transform.position - transform.position).normalized;
                transform.rotation = Quaternion.LookRotation(diff);

                if (gameManager.messageWindow.activeSelf == false)
                {
                    // 初回だけお辞儀
                    player.GetComponent<Animator>().SetBool("Bowing", true);

                    gameManager.DisplayMessageWindow(talkingWords, this.gameObject.name);
                    gameManager.ProceedingTalk(audioSource, audioPitch);
                }
                else
                {
                    // 2回目以降はお辞儀しない
                    player.GetComponent<Animator>().SetBool("Bowing", false);
                    gameManager.ProceedingTalk(audioSource, audioPitch);
                }
            }
        }
    }

    /// <summary>
    /// スピーチバブルを表示する
    /// </summary>
    /// <returns></returns>
    private IEnumerator DisplaySB()
    {
        speechBubbleOb.SetActive(true);
        float c = 0.01f;
        while (speechBubbleOb.transform.localScale.x < 0.01f)
        {
            speechBubbleOb.transform.localScale += new Vector3(c, c, c);
            yield return new WaitForSeconds(0.01f);
        }
        yield break;
    }

    /// <summary>
    /// スピーチバブルを閉じる
    /// </summary>
    /// <returns></returns>
    public IEnumerator CloseSB()
    {
        float c = 0.05f;
        while (speechBubbleOb.transform.localScale.x > 0f)
        {
            yield return new WaitForSeconds(0.01f);
            speechBubbleOb.transform.localScale -= new Vector3(c, c, c);
        }
        speechBubbleOb.transform.localScale = new Vector3(0, 0, 0);
        speechBubbleOb.SetActive(false);
        yield break;
    }

    public virtual void AddWords()
    {

    }

    public virtual void AddWordsClear()
    {

    }

    public virtual void Gender()
    {

    }

}
