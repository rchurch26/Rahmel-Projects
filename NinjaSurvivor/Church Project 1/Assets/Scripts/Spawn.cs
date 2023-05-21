using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class Spawn : MonoBehaviour
{
    //Variables
    Vector3 vPosition = Vector3.zero;
    public List<SpriteInfo> enemiesInfo = new List<SpriteInfo>();
    //public List<Enemy> enemies = new List<Enemy>();
    public List<SpriteInfo> rushersInfo = new List<SpriteInfo>();
    public SpriteInfo playerInfo;
    public Player player;
    public Enemy enemy;
    public Rusher rusher;

    [SerializeField]
    SpriteInfo enemyInfo;

    [SerializeField]
    SpriteInfo rusherInfo;

    [SerializeField]
    float std;

    float enemySpawnTime;
    float rusherSpawnTime;
    Camera cam;
    float height;
    float width;
    // Start is called before the first frame update
    void Start()
    {
        SpawnEnemy();
        enemySpawnTime = 0.0f;
        rusherSpawnTime = 0.0f;
        cam = Camera.main;
        height = cam.orthographicSize;
        width = height * cam.aspect;
    }

    // Update is called once per frame
    void Update()
    {
        if (enemySpawnTime >= 3.0f)
        {
            SpawnEnemy();
            enemySpawnTime = 0.0f;
        }
        else
        {
            enemySpawnTime += Time.deltaTime;
        }
        if(rusherSpawnTime >= 2.0f)
        {
            SpawnRusher();
            rusherSpawnTime = 0.0f;
        }
        else
        {
            rusherSpawnTime += Time.deltaTime;
        }
    }

    //Use Gaussian to Give Random Position
    private float Gaussian(float mean, float stdDev)
    {
        float val1 = Random.Range(0.0f, 1.0f);
        float val2 = Random.Range(0.0f, 1.0f);
        float gaussValue = Mathf.Sqrt(-2.0f * Mathf.Log(val1)) * Mathf.Sin(2.0f * Mathf.PI * val2);
        return mean + stdDev * gaussValue;
    }

    //Spawn Enemies into Game
    void SpawnEnemy()
    {
        Vector2 position = new Vector2(Gaussian(Camera.main.transform.position.x, std), Gaussian(Camera.main.transform.position.y * 2, std));
        vPosition = position;
        enemiesInfo.Add(Instantiate(enemyInfo, vPosition, Quaternion.identity));
        enemiesInfo[enemiesInfo.Count - 1].GetComponent<Enemy>().player = player;
    }
    void SpawnRusher()
    {
        Vector2 position = new Vector2(Gaussian(Camera.main.transform.position.x, std), Gaussian(Camera.main.transform.position.y * 2, std));
        vPosition = position;
        rushersInfo.Add(Instantiate(rusherInfo, vPosition, Quaternion.identity));
    }
}
