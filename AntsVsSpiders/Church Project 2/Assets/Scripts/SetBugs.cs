using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SetBugs : MonoBehaviour
{
    //Attributes
    [SerializeField]
    Text antNum;

    int ants;

    [SerializeField]
    Text spiderNum;

    int spiders;

    //Start Method
    void Start()
    {
        ants = int.Parse(antNum.text);
        spiders = int.Parse(spiderNum.text);
    }

    //Ant Increase
    public void AntIncrease()
    {
        ants++;
        if (ants > 7)
        {
            ants = 7;
        }
        antNum.text = ants.ToString();
    }
    //Ant Decrease
    public void AntDecrease()
    {
        ants--;
        if (ants < 0)
        {
            ants = 0;
        }
        antNum.text = ants.ToString();
    }

    //Spider Increase
    public void SpiderIncrease()
    {
        spiders++;
        if (spiders > 3)
        {
            spiders = 3;
        }
        spiderNum.text = spiders.ToString();
    }
    //Spider Decrease
    public void SpiderDecrease()
    {
        spiders--;
        if (spiders < 0)
        {
            spiders = 0;
        }
        spiderNum.text = spiders.ToString();
    }

    //Play Game
    //public void Play()
    //{
    //    BugManager.Instance.antSpawnCount = ants;
    //    BugManager.Instance.spiderSpawnCount = spiders;
    //    SceneManager.LoadScene("GameScene");
    //}
}
