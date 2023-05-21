using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Collisions : MonoBehaviour
{
    //Variables
    [SerializeField]
    Spawn spawned;

    [SerializeField]
    Text score;

    int scoreNum;

    [SerializeField]
    Player player;
    // Start is called before the first frame update
    void Start()
    {
        scoreNum = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(spawned.enemiesInfo.Count > 0)
        {
            for (int i = 0; i < spawned.enemiesInfo.Count; i++)
            {
                for (int j = 0; j < spawned.player.kSpawned.Count; j++)
                {
                    if (CollisionCheck(spawned.player.kSpawned[j], spawned.enemiesInfo[i]))
                    {
                        scoreNum += 100;
                        score.text = scoreNum.ToString();
                        Destroy(spawned.enemiesInfo[i].gameObject);
                        spawned.enemiesInfo.Remove(spawned.enemiesInfo[i]);
                        Destroy(spawned.player.kSpawned[i].gameObject);
                        spawned.player.kSpawned.Remove(spawned.player.kSpawned[i]);
                    }
                }
            }
        }
        if(player.health > 0)
        {
            for(int j = 0; j < spawned.enemy.ekSpawned.Count; j++)
            {
                if (CollisionCheck(spawned.enemy.ekSpawned[j], spawned.playerInfo))
                {
                    player.health--;
                    Destroy(spawned.enemy.ekSpawned[j].gameObject);
                    spawned.enemy.ekSpawned.Remove(spawned.enemy.ekSpawned[j]);
                }
            }
            for(int i = 0; i < spawned.rushersInfo.Count; i++)
            {
                if (CollisionCheck(spawned.rushersInfo[i], spawned.playerInfo))
                {
                    player.health = player.health - (int)Time.deltaTime;
                }
            }
        }
    }
    
    //Check for Collision
    bool CollisionCheck(SpriteInfo a, SpriteInfo b)
    {
        if (b.minX < a.maxX && b.maxX > a.minX && b.maxY > a.minY && b.minY < a.maxY)
        {
            Debug.Log("Collision!");
            return true;
        }
        return false;
    }
}
