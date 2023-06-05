using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhysicsObject : MonoBehaviour
{
    //Variables
    Vector3 position = Vector3.zero;
    public Vector3 direction = Vector3.zero;
    public Vector3 velocity = Vector3.zero;
    Vector3 acceleration = Vector3.zero;

    [SerializeField]
    float mass = 1.0f;

    float height;
    float width;
    public Bug bug;
    public float radius;
    private Bounds bound;
    
    // Start is called before the first frame update
    void Start()
    {
        //Set Height and Width to Cam
        height = Camera.main.orthographicSize;
        width = height * Camera.main.aspect;
        //Set Position to Current Position
        position = transform.position;
        //Set Direction to a Random Position
        direction = Random.insideUnitCircle.normalized;
    }

    // Update is called once per frame
    void Update()
    {
        //Set Bounds to Sprite Bounds
        bound = gameObject.GetComponent<SpriteRenderer>().bounds;
        //Set Radius using Bounds
        radius = Mathf.Abs(bound.extents.x);
        //Constantly have Position set to Object Position
        position = transform.position;
        //Set Velocity using Acceleration
        velocity += acceleration * Time.deltaTime;
        //Set Direction with Velocity Normalized
        direction = velocity.normalized;
        //Set Position Using Velocity and DeltaTime
        position += velocity * Time.deltaTime;
        //Set Object Position to Position
        transform.position = position;
        //Have Sprite Look in Movement Direction
        if(direction != Vector3.zero)
        {
            transform.rotation = Quaternion.LookRotation(Vector3.forward, direction);
        }
        //Reset Acceleration
        acceleration = Vector3.zero;
    }

    //Apply Forces
    public void ApplyForce(Vector3 force)
    {
        acceleration += force / mass;
    }

    //Use Gizmos
    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, radius);
    }
}
