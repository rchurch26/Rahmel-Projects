using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    //Variables
    public List<SpriteInfo> ekSpawned = new List<SpriteInfo>();
    float speed = 5.0f;
    Animator enemyMove;
    Vector3 direction = Vector3.right;

    [SerializeField]
    Vector3 position = Vector3.zero;

    Vector3 velocity = Vector3.zero;
    Camera cam;

    [SerializeField]
    SpriteRenderer enemySprite;

    float height;
    float width;
    float timeElapsed;

    [SerializeField]
    SpriteInfo enemyKunai;

    public Player player;

    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        enemyMove = gameObject.GetComponent<Animator>();
        enemySprite = gameObject.GetComponent<SpriteRenderer>();
        height = cam.orthographicSize;
        width = height * cam.aspect;
        enemyMove.SetBool("EnemyMoved", true);
        timeElapsed = 0.0f;
    }

    // Update is called once per frame
    void Update()
    {
        velocity = direction * speed * Time.deltaTime;
        position += velocity;
        if(position.x <= -width)
        {
            direction = Vector3.right;
            enemySprite.flipX = false;
        }
        else if(position.x >= width)
        {
            direction = Vector3.left;
            enemySprite.flipX = true;
        }
        transform.position = position;
        if (timeElapsed >= 1.5f)
        {
            SpawnEnemyKunai();
            enemyMove.SetBool("attackTimeReached", true);
            timeElapsed = 0;
        }
        else
        {
            enemyMove.SetBool("attackTimeReached", false);
            timeElapsed += Time.deltaTime;
        }
        for (int i = 0; i < ekSpawned.Count; i++)
        {
            if (ekSpawned[i].transform.position.x <= -width || ekSpawned[i].transform.position.y <= -height
                || ekSpawned[i].transform.position.x >= width)
            {
                DeSpawnEnemyKunai(ekSpawned[i]);
            }
        }
    }

    //Spawn Enemy Kunai into Game
    void SpawnEnemyKunai()
    {
        ekSpawned.Add(Instantiate(enemyKunai, transform.position, Quaternion.identity));
    }
    //Despawn Enemy Kunai from Game
    public void DeSpawnEnemyKunai(SpriteInfo kunai)
    {
        Destroy(kunai.gameObject);
        ekSpawned.Remove(kunai);
    }
}
