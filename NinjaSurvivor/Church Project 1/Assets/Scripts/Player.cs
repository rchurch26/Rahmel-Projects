using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    //Variables
    float speed = 5.0f;
    Animator move;
    Vector3 direction = Vector3.right;

    [SerializeField]
    Vector3 position = Vector3.zero;

    Vector3 velocity = Vector3.zero;
    Vector2 movement;
    Camera cam;

    [SerializeField]
    SpriteRenderer player;

    [SerializeField]
    SpriteInfo kunaiObject;

    public bool attack;
    public int health;
    public List<Image> healthImages = new List<Image>();
    public List<SpriteInfo> kSpawned = new List<SpriteInfo>();
    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        position = transform.position;
        move = gameObject.GetComponent<Animator>();
        player = gameObject.GetComponent<SpriteRenderer>();
        attack = false;
        health = 3;
    }

    // Update is called once per frame
    void Update()
    {
        float height = cam.orthographicSize;
        float width = height * cam.aspect;
        direction = movement;
        velocity = direction * speed * Time.deltaTime;
        position += velocity;
        if (position.x > width)
        {
            position.x = width;
        }
        else if (position.x < -width)
        {
            position.x = -width;
        }
        if (position.y < -3.93f)
        {
            position.y = -3.93f;
        }
        transform.position = position;
        if(movement.x == 1.0f && movement.y == 0.0f)
        {
            move.SetBool("MoveKeyPressed", true);
            if (attack == true)
            {
                move.SetBool("ThrowKeyPressed", true);
                attack = false;
            }
            else
            {
                move.SetBool("ThrowKeyPressed", false);
            }
            //move.SetBool("SlideKeyPressed", false);
            player.flipX = false;
        }
        else if(movement.x == -1.0f && movement.y == 0.0f)
        {
            move.SetBool("MoveKeyPressed", true);
            if (attack == true)
            {
                move.SetBool("ThrowKeyPressed", true);
                attack = false;
            }
            else
            {
                move.SetBool("ThrowKeyPressed", false);
            }
            //move.SetBool("SlideKeyPressed", false);
            player.flipX = true;
        }
        //else if((movement.x == 0.71f && movement.y == -0.71f) || (movement.x == 0.0f && movement.y == -1.0f))
        //{
        //    move.SetBool("MoveKeyPressed", true);
        //    move.SetBool("SlideKeyPressed",true);
        //}
        //else if ((movement.x == -0.71f && movement.y == -0.71f) || (movement.x == 0.0f && movement.y == -1.0f))
        //{
        //    move.SetBool("MoveKeyPressed", true);
        //    move.SetBool("SlideKeyPressed", true);
        //}
        else if(movement.x == 0.0f && movement.y == 0.0f)
        {
            move.SetBool("MoveKeyPressed", false);
            move.SetBool("SlideKeyPressed", false);
            if(attack == true)
            {
                move.SetBool("ThrowKeyPressed", true);
                attack = false;
            }
            else
            {
                move.SetBool("ThrowKeyPressed", false);
            }
        }
        for (int i = 0; i < kSpawned.Count; i++)
        {
            if (kSpawned[i].transform.position.x >= width || kSpawned[i].transform.position.y >= height
                || kSpawned[i].transform.position.x <= -width)
            {
                DeSpawnKunai(kSpawned[i]);
            }
        }
        if (health == 2)
        {
            healthImages[2].color = Color.black;
        }
        else if(health == 1)
        {
            healthImages[1].color = Color.black;
        }
        else if(health == 0)
        {
            healthImages[0].color = Color.black;
        }
    }

    public void playerMovement(InputAction.CallbackContext context)
    {
        movement = context.ReadValue<Vector2>();
    }
    //Spawn Kunai When Player Clicks
    public void playerAttack()
    {
        attack = true;
        kSpawned.Add(Instantiate(kunaiObject, transform.position, Quaternion.identity));
    }
    //Despawn Kunai from Game
    public void DeSpawnKunai(SpriteInfo pKunai)
    {
        Destroy(pKunai.gameObject);
        kSpawned.Remove(pKunai);
    }
}
