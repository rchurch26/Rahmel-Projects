using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteInfo : MonoBehaviour
{
    //Variables
    Vector2 boxSize;
    Bounds bounds;
    public Collisions manage;
    Vector2 center;
    float width;
    public float minX;
    public float maxX;
    public float minY;
    public float maxY;
    float height;
    // Update is called once per frame
    void Update()
    {
        //Grab Reference to Bounds
        bounds = gameObject.GetComponent<SpriteRenderer>().bounds;
        //Set Center of Bounds
        center = bounds.center;
        //Get Width and Height of Sprite
        width = Mathf.Abs(bounds.min.x - bounds.max.x);
        height = Mathf.Abs(bounds.min.y - bounds.max.y);
        //Grab Min and Max of both X and Y of Sprite
        minX = bounds.min.x;
        maxX = bounds.max.x;
        minY = bounds.min.y;
        maxY = bounds.max.y;
        //Set Box Size of Sprite
        boxSize = new Vector2(width, height);
    }

    //Show Box Gizmos
    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireCube(center, bounds.size);
    }
}
