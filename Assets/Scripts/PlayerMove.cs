using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    // other methods and properties

    void Update()
    {
        // other input handling

        if (Input.GetKey(KeyCode.F))
        {
            // Trigger bowing animation
        }
        else if (Input.GetKeyUp(KeyCode.F))
        {
            // Stop bowing animation
        }
    }
}