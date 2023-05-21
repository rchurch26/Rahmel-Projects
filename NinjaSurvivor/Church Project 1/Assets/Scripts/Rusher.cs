using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rusher : MonoBehaviour
{
    //Variables
    float speed = 7.0f;
    Animator rusherMove;
    Vector3 direction = Vector3.down;

    [SerializeField]
    Vector3 position = Vector3.zero;

    Vector3 velocity = Vector3.zero;
    Camera cam;

    [SerializeField]
    SpriteRenderer rusherSprite;

    float height;
    float width;

    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        rusherMove = gameObject.GetComponent<Animator>();
        rusherSprite = gameObject.GetComponent<SpriteRenderer>();
        height = cam.orthographicSize;
        width = height * cam.aspect;
        rusherMove.SetBool("RusherMoved", true);
    }

    // Update is called once per frame
    void Update()
    {
        velocity = direction * speed * Time.deltaTime;
        position += velocity;
        if (position.y <= -3.93)
        {
            position.y = -3.93f;
            if (position.x <= -width)
            {
                direction = Vector3.right;
                rusherSprite.flipX = false;
            }
            else if (position.x >= width)
            {
                direction = Vector3.left;
                rusherSprite.flipX = true;
            }
        }
        transform.position = position;
    }
}
