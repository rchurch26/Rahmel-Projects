using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyKunai : MonoBehaviour
{
    //Variables
    Vector3 kPosition = Vector3.zero;
    Vector3 kDirection = Vector3.down;
    Vector3 velocity = Vector3.zero;
    float kSpeed = 3.0f;
    public Player player;

    // Start is called before the first frame update
    void Start()
    {
        kPosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        velocity = kDirection * kSpeed * Time.deltaTime;
        kPosition += velocity;
        transform.position = kPosition;
    }
}
