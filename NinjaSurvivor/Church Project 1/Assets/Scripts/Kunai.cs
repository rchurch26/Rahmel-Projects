using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Kunai : MonoBehaviour
{
    //Variables
    Vector3 kPosition = Vector3.zero;
    Vector3 kDirection = Vector3.right;
    Vector3 velocity = Vector3.zero;
    Vector3 kMovement;
    float kSpeed = 0.03f;
    Camera cam;

    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        kPosition = transform.position;
        kMovement.x = Mouse.current.position.ReadValue().x;
        kMovement.y = Mouse.current.position.ReadValue().y;
        kMovement.z = transform.position.z;
        kDirection = cam.ScreenToWorldPoint(new Vector3(kMovement.x, kMovement.y)) - kPosition;
    }

    // Update is called once per frame
    void Update()
    {
        velocity = kDirection * Time.deltaTime;
        kPosition += velocity.normalized * kSpeed;
        transform.position = kPosition;
    }
}
