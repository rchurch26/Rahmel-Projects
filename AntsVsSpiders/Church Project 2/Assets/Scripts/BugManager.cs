using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.InputSystem;

public class BugManager : Singleton<BugManager>
{
    //Attributes
    [SerializeField]
    Hunt spiderObject;

    public int spiderSpawnCount;

    public List<Hunt> spiders = new List<Hunt>();
    float height;
    float width;

    [SerializeField]
    Obstacle obstacleObject;

    [SerializeField]
    int obstacleSpawnCount;

    public List<Obstacle> obstacles = new List<Obstacle>();

    [SerializeField]
    RunAway antObject;

    public int antSpawnCount;

    public List <RunAway> ants = new List<RunAway>();

    [SerializeField]
    Food foodObject;

    [SerializeField]
    int foodSpawnCount;

    public List<Food> eats = new List<Food>();
    public Text foodText;

    int foodObtained = 0;

    Camera cam;

    //BugManager
    protected BugManager() { }

    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        height = Camera.main.orthographicSize;
        width = height * Camera.main.aspect;
        //Spider Spawning
        Vector3 spawnPos = Vector3.zero;
        for(int i = 0; i < spiderSpawnCount; i++)
        {
            spawnPos.x = Random.Range(-width, width);
            spawnPos.y = Random.Range(-height, height);
            spiders.Add(Instantiate<Hunt>(spiderObject, spawnPos, Quaternion.identity));
        }
        //Ant Spawning
        spawnPos = Vector3.zero;
        for(int i = 0; i < antSpawnCount; i++)
        {
            spawnPos.x = Random.Range(-width, width);
            spawnPos.y = Random.Range(-height, height);
            ants.Add(Instantiate<RunAway>(antObject, spawnPos, Quaternion.identity));
        }
        //Obstacle Spawning
        spawnPos = Vector3.zero;
        for (int i = 0; i < obstacleSpawnCount; i++)
        {
            spawnPos.x = Random.Range(-width, width);
            spawnPos.y = Random.Range(-height, height);
            obstacles.Add(Instantiate<Obstacle>(obstacleObject, spawnPos, Quaternion.identity));
        }
        //Food Spawning
        spawnPos = Vector3.zero;
        for (int i = 0; i < foodSpawnCount; i++)
        {
            spawnPos.x = Random.Range(-width, width);
            spawnPos.y = Random.Range(-height, height);
            eats.Add(Instantiate<Food>(foodObject, spawnPos, Quaternion.identity));
        }
    }

    // Update is called once per frame
    void Update()
    {
        for(int i = 0; i < ants.Count; i++)
        {
            for(int j = 0; j < eats.Count; j++)
            {
                float distance = Mathf.Pow(eats[j].transform.position.x - ants[i].transform.position.x, 2) +
                Mathf.Pow(eats[j].transform.position.y - ants[i].transform.position.y, 2);
                if (Mathf.Pow(eats[j].radius + ants[i].po.radius, 2) >= distance)
                {
                    Debug.Log("Collision!");
                    foodObtained++;
                    foodText.text = foodObtained.ToString();
                    float x = Random.Range(-width, width);
                    float y = Random.Range(-height, height);
                    eats[j].transform.position = new Vector3(x, y);
                }
            }
        }
        //if(ants.Count == 0)
        //{
        //    DontDestroyOnLoad(BugManager.Instance.foodText);
        //    SceneManager.LoadScene("EndScene");
        //}
    }

    //Know Closest Ant
    public RunAway KnowClosestAnt(Vector3 spiderPos)
    {
        float closest = Mathf.Infinity;
        RunAway ant = null;
        for( int i = 0; i < ants.Count; i++)
        {
            float dist = Vector3.Distance(spiderPos, ants[i].transform.position);
            if(dist < closest)
            {
                ant = ants[i];
                closest = dist;
            }
        }
        return ant;
    }
    //Know Closest Spider
    public Hunt KnowClosestSpider(Vector3 antPos)
    {
        float closest = Mathf.Infinity;
        Hunt spider = null;
        for (int i = 0; i < spiders.Count; i++)
        {
            float dist = Vector3.Distance(antPos, spiders[i].transform.position);
            if (dist < closest)
            {
                spider = spiders[i];
                closest = dist;
            }
        }
        return spider;
    }

    //Find Closest Food
    public Food FindClosestFood(Vector3 antPos)
    {
        float closest = Mathf.Infinity;
        Food food = null;
        for(int i = 0; i < eats.Count; i++)
        {
            float dist = Vector3.Distance(antPos, eats[i].transform.position);
            if(dist < closest)
            {
                food = eats[i];
                closest = dist;
            }
        }
        return food;
    }

    //Spawn Food
    public void SpawnFood()
    {
        Vector3 spawnPos = Vector3.zero;
        spawnPos.x = Mouse.current.position.ReadValue().x;
        spawnPos.y = Mouse.current.position.ReadValue().y;
        spawnPos = cam.ScreenToWorldPoint(spawnPos);
        eats.Add(Instantiate<Food>(foodObject, spawnPos, Quaternion.identity));
    }
}
