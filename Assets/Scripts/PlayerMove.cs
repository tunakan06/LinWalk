using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    private CharacterController controller;
    [SerializeField] Animator animator;
    private Vector3 playerVelocity;
    private bool groundedPlayer;
    private float playerSpeed = 3.0f;
    private float playerRunSpeed = 5.0f;
    private float jumpHeight = 1.0f;
    private float gravityValue = -9.81f;

    // 会話中かどうかのフラグ（People.csから制御）
    [HideInInspector] public bool isTalking = false;

    // お辞儀のクールダウン（会話直後のお辞儀防止）
    private float bowCooldown = 0f;

    private void Start()
    {
        controller = gameObject.AddComponent<CharacterController>();
        controller.center = new Vector3(0, 1, 0);
        controller.radius = 0.25f;
        controller.height = 1.85f;
    }

    void Update()
    {
        groundedPlayer = controller.isGrounded;
        if (groundedPlayer && playerVelocity.y < 0)
        {
            playerVelocity.y = 0f;
        }

        // クールダウンを減らす
        if (bowCooldown > 0f)
        {
            bowCooldown -= Time.deltaTime;
        }

        // 会話中は操作を無効化
        if (isTalking)
        {
            animator.SetBool("Walking", false);
            animator.SetBool("Running", false);
            animator.SetBool("Bowing", false);
            bowCooldown = 0.5f; // 会話終了後0.5秒はお辞儀しな��
            playerVelocity.y += gravityValue * Time.deltaTime;
            controller.Move(playerVelocity * Time.deltaTime);
            return;
        }

        Vector3 move = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));

        // 走る
        if (Input.GetKey("left shift") && (move.magnitude > 0))
        {
            controller.Move(move * Time.deltaTime * playerSpeed);
            animator.SetBool("Walking", true);
            animator.SetBool("Running", false);
        }
        // 歩く
        else if ((move.magnitude > 0))
        {
            controller.Move(move * Time.deltaTime * playerRunSpeed);
            animator.SetBool("Running", true);
            animator.SetBool("Walking", false);
        }
        // 止まる
        else
        {
            animator.SetBool("Walking", false);
            animator.SetBool("Running", false);
        }

        if (move != Vector3.zero)
        {
            gameObject.transform.forward = move;
        }

        // ジャンプ
        if (Input.GetButtonDown("Jump") && groundedPlayer)
        {
            playerVelocity.y += Mathf.Sqrt(jumpHeight * -3.0f * gravityValue);
        }

        // お辞儀（クールダウン中は無効）
        if (Input.GetKey(KeyCode.F) && (move.magnitude == 0.0f) && bowCooldown <= 0f)
        {
            animator.SetBool("Bowing", true);
        }
        else
        {
            animator.SetBool("Bowing", false);
        }

        playerVelocity.y += gravityValue * Time.deltaTime;
        controller.Move(playerVelocity * Time.deltaTime);
    }
}