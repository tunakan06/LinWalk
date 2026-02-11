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

    private void Start()
    {
        controller = gameObject.AddComponent<CharacterController>();
        controller.center = new Vector3(0, 1, 0);
        controller.radius = 0.25f;
        controller.height = 1.85f;

        //animator = gameObject.AddComponent<Animator>();
    }

    void Update()
    {
        groundedPlayer = controller.isGrounded;
        if (groundedPlayer && playerVelocity.y < 0)
        {
            playerVelocity.y = 0f;
        }

        Vector3 move = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));

        // 走る
        if (Input.GetKey("left shift") &&(move.magnitude > 0))
        {
            controller.Move(move * Time.deltaTime * playerSpeed);
            animator.SetBool("Walking", true);
            animator.SetBool("Running", false);
        }
        // 歩く
        else if((move.magnitude > 0))
        {
            controller.Move(move * Time.deltaTime * playerRunSpeed);
            animator.SetBool("Running", true);
            animator.SetBool("Walking", false);
        }
        // 止まる
        else
        {
            //controller.Move(move * Time.deltaTime * playerSpeed);
            animator.SetBool("Walking", false);
            animator.SetBool("Running", false);
        }
        

        if (move != Vector3.zero)
        {
            gameObject.transform.forward = move;
        }

        // 行動
        // ジャンプ
        if (Input.GetButtonDown("Jump") && groundedPlayer)
        {
            playerVelocity.y += Mathf.Sqrt(jumpHeight * -3.0f * gravityValue);
        }
        // お辞儀 - 会話開始時だけ
        if (Input.GetKeyDown(KeyCode.F) && (move.magnitude == 0.0f))
        {
            animator.SetBool("Bowing", true);
        }
        else if (!animator.GetBool("Bowing") || Input.GetKeyUp(KeyCode.F))
        {
            animator.SetBool("Bowing", false);
        }

        playerVelocity.y += gravityValue * Time.deltaTime;
        controller.Move(playerVelocity * Time.deltaTime);
    }
}