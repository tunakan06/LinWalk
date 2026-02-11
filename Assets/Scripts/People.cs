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
    private Vector3 speechBubbleFixedWorldPosition;
    private Quaternion speechBubbleFixedWorldRotation;
    private bool lockSpeechBubbleTransform;
    private bool isOpeningBubble;
    private bool isClosingBubble;

    // クリアスコア
    private int clearScore = 3000;

    // プレイヤーとの距離の閾値
    [SerializeField] private float distanceThresholdFromPlayer = 2.5f;

    // Start is called before the first frame update
    public virtual void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        gameManager = GameObject.FindGameObjectWithTag("GameManager").GetComponent<GameManager>();
        speechBubbleOb = transform.Find("SpeechBubble").gameObject;
        if (speechBubbleOb != null)
        {
            speechBubbleOb.transform.localScale = Vector3.zero;
            speechBubbleOb.SetActive(false);
        }
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
        if (disToPlayer < distanceThresholdFromPlayer && speechBubbleOb.activeSelf == false && !isOpeningBubble)
        {
            StartCoroutine(DisplaySB());
        }
        if (disToPlayer >= distanceThresholdFromPlayer && speechBubbleOb.activeSelf == true && !isClosingBubble)
        {
            StartCoroutine(CloseSB());
            gameManager.CloseMessageWindow();
            SetPlayerTalking(false);
        }

        if (speechBubbleOb.activeSelf == true)
        {
            // 表示開始時のワールド座標・回転を固定して、位置も向きも変えない
            if (lockSpeechBubbleTransform)
            {
                speechBubbleOb.transform.position = speechBubbleFixedWorldPosition;
                speechBubbleOb.transform.rotation = speechBubbleFixedWorldRotation;
            }

            if (Input.GetKeyDown(KeyCode.F))
            {
                SetPlayerTalking(true);

                var diff = (player.transform.position - transform.position).normalized;
                transform.rotation = Quaternion.LookRotation(diff);

                // 主人公も話しかけた相手の方向を向く（Y軸のみ）
                Vector3 toTarget = transform.position - player.transform.position;
                toTarget.y = 0f;
                if (toTarget.sqrMagnitude > 0.0001f)
                {
                    player.transform.rotation = Quaternion.LookRotation(toTarget.normalized);
                }

                if (gameManager.messageWindow.activeSelf == false)
                {
                    gameManager.DisplayMessageWindow(talkingWords, this.gameObject.name);
                    gameManager.ProceedingTalk(audioSource, audioPitch);
                }
                else
                {
                    gameManager.ProceedingTalk(audioSource, audioPitch);
                    if (gameManager.charaTalkingWords.Count == 0)
                    {
                        // 次のフレームまで待ってから解除（同フレームのお辞儀を防ぐ）
                        StartCoroutine(DelayedRelease());
                    }
                }
            }
        }
    }

    /// <summary>
    /// 1フレーム待ってから会話フラグを解除する
    /// </summary>
    private IEnumerator DelayedRelease()
    {
        yield return null;
        SetPlayerTalking(false);
    }

    /// <summary>
    /// プレイヤーの会話フラグを設定する
    /// </summary>
    private void SetPlayerTalking(bool value)
    {
        if (player == null) return;
        PlayerMove pm = player.GetComponent<PlayerMove>();
        if (pm != null) pm.isTalking = value;
    }

    /// <summary>
    /// スピーチバブルを表示する
    /// </summary>
    /// <returns></returns>
    private IEnumerator DisplaySB()
    {
        isOpeningBubble = true;
        isClosingBubble = false;
        speechBubbleOb.SetActive(true);
        speechBubbleFixedWorldPosition = speechBubbleOb.transform.position;
        speechBubbleFixedWorldRotation = speechBubbleOb.transform.rotation;
        lockSpeechBubbleTransform = true;
        float c = 0.01f;
        while (speechBubbleOb.transform.localScale.x < 0.01f)
        {
            speechBubbleOb.transform.position = speechBubbleFixedWorldPosition;
            speechBubbleOb.transform.rotation = speechBubbleFixedWorldRotation;
            speechBubbleOb.transform.localScale += new Vector3(c, c, c);
            yield return new WaitForSeconds(0.01f);
        }
        speechBubbleOb.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
        isOpeningBubble = false;
        yield break;
    }

    /// <summary>
    /// スピーチバブルを閉じる
    /// </summary>
    /// <returns></returns>
    public IEnumerator CloseSB()
    {
        isClosingBubble = true;
        isOpeningBubble = false;
        lockSpeechBubbleTransform = false;
        float c = 0.05f;
        while (speechBubbleOb.transform.localScale.x > 0f)
        {
            yield return new WaitForSeconds(0.01f);
            speechBubbleOb.transform.localScale -= new Vector3(c, c, c);
        }
        speechBubbleOb.transform.localScale = new Vector3(0, 0, 0);
        speechBubbleOb.SetActive(false);
        isClosingBubble = false;
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
