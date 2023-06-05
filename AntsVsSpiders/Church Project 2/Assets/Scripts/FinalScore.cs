using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class FinalScore : MonoBehaviour
{
    //Attributes
    [SerializeField]
    Text foodNum;

    // Start is called before the first frame update
    void Start()
    {
        //foodNum.text = BugManager.Instance.foodText.text;
    }

    //Replay Method
    //public void Replay()
    //{
    //    SceneManager.LoadScene("StartScene");
    //}
}
