using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(PhysicsObject))]
public abstract class Bug : MonoBehaviour
{
    //Variables
    [SerializeField]
    public PhysicsObject po;

    [SerializeField]
    float maxSpeed = 5.0f, maxForce = 2.0f;

    protected Vector3 totalForces = Vector3.zero;
    protected float height;
    protected float width;

    [SerializeField]
    protected float angleStep = 2.0f, maxAngle = 10.0f;

    protected List<Vector3> foundObstacles = new List<Vector3>();

    // Start is called before the first frame update
    void Start()
    {
        height = Camera.main.orthographicSize;
        width = height * Camera.main.aspect;
    }

    // Update is called once per frame
    protected virtual void Update()
    {
        SteeringForces();
        //Limit TotalForces
        totalForces = Vector3.ClampMagnitude(totalForces, maxForce);
        po.ApplyForce(totalForces);
        totalForces = Vector3.zero;
    }

    protected abstract void SteeringForces();

    //Seek Target
    protected Vector3 Seek(Vector3 targetPos)
    {
        //Calculate Desired Velocity
        Vector3 desiredVelocity = targetPos - transform.position;

        //Set Desired = Max Speed
        desiredVelocity = desiredVelocity.normalized * maxSpeed;

        //Calculate Seek Steering Force
        Vector3 seekingForce = desiredVelocity - po.velocity;

        //Return Seek Steering Force
        return seekingForce;
    }

    //Flee Target
    protected Vector3 Flee(Vector3 targetPos)
    {
        //Calculate Desired Velocity
        Vector3 desiredVelocity = transform.position - targetPos;

        //Set Desired = Max Speed
        desiredVelocity = desiredVelocity.normalized * maxSpeed;

        //Calculate Seek Steering Force
        Vector3 seekingForce = desiredVelocity - po.velocity;

        //Return Seek Steering Force
        return seekingForce;
    }

    //Pursue Target
    protected Vector3 Pursue(Bug target)
    {
        return Seek(target.CalcFuturePosition(2.0f));
    }

    //Keep Bugs In Bounds
    protected Vector3 StayInBounds(float time)
    {
        Vector3 futurePos = CalcFuturePosition(time);
        futurePos.z = transform.position.z;
        if(futurePos.x >= width||
            futurePos.x <= -width||
            futurePos.y >= height||
            futurePos.y <= -height)
        {
            return Seek(Vector3.zero);
        }
        return Vector3.zero;
    }

    //Separate Bugs
    protected Vector3 Separate()
    {
        float distance = Mathf.Infinity;
        Hunt closestSpider = null;
        //Loop Through Spiders
        foreach(Hunt spider in BugManager.Instance.spiders)
        {
            float closestDist = Vector3.Distance(transform.position, spider.transform.position);
            if(closestDist <= Mathf.Epsilon)
            {
                //This is Me
                continue;
            }
            if(closestDist < distance && closestDist <= po.radius)
            {
                closestDist = distance;
                closestSpider = spider;
            }
        }
        if(closestSpider != null )
        {
            return Flee(closestSpider.transform.position);
        }
        else
        {
            return Vector3.zero;
        }
    }

    //Wander Bug
    protected Vector3 Wander(float angle)
    {
        Vector3 wanderPos = po.direction.normalized;
        //if(wanderPos == Vector3.zero)
        //{
        //    wanderPos = transform.up;
        //    po.velocity = wanderPos;
        //}
        wanderPos = Quaternion.Euler(new Vector3(0.0f, 0.0f, angle)) * wanderPos;
        return Seek(wanderPos);
    }

    //Future Position
    public Vector3 CalcFuturePosition(float time)
    {
        return transform.position + (po.velocity * time);
    }

    //Avoid Obstacles
    protected Vector3 AvoidObstacle()
    {
        foundObstacles.Clear();
        foreach (Obstacle ob in BugManager.Instance.obstacles)
        {
            //Agent to Obstacle
            Vector3 AtoO = ob.transform.position - po.transform.position;
            float forwardDot, rightDot;
            forwardDot = Vector3.Dot(AtoO, po.direction);
            //Check if Obstacle is Behind Bug
            if (forwardDot > -ob.radius)
            {
                //Check if Obstacle is Far Left or Right of Bug
                rightDot = Vector3.Dot(AtoO, po.transform.right);
                if (Mathf.Abs(rightDot) < po.radius + ob.radius)
                {
                    foundObstacles.Add(ob.transform.position);
                    //Avoid Obstacle
                    Vector3 desiredVelocity;
                    if (rightDot > 0)
                    {
                        //Obstacle Right, Steer Left
                        desiredVelocity = po.transform.right * -maxSpeed;
                    }
                    else
                    {
                        //Obstacle Left, Steer Right
                        desiredVelocity = po.transform.right * maxSpeed;
                    }
                    //Calculate SteeringForce
                    Vector3 steeringForce = desiredVelocity - po.velocity;
                    totalForces += steeringForce;
                    return totalForces;
                }
            }
        }
        return Vector3.zero;
    }

    //See Ant
    protected bool SeeAnt()
    {
        foreach (RunAway ant in BugManager.Instance.ants)
        {
            //Agent to Obstacle
            Vector3 AtoO = ant.po.transform.position - po.transform.position;
            float forwardDot, rightDot;
            forwardDot = Vector3.Dot(AtoO, po.direction);
            //Check if Obstacle is Behind Bug
            if (forwardDot > -ant.po.radius)
            {
                //Check if Obstacle is Far Left or Right of Bug
                rightDot = Vector3.Dot(AtoO, po.transform.right);
                if (Mathf.Abs(rightDot) < forwardDot / 2.0f)
                {
                    return true;
                }
            }
        }
        return false;
    }
    //See Spider
    protected bool SeeSpider()
    {
        foreach (Hunt spider in BugManager.Instance.spiders)
        {
            //Agent to Obstacle
            Vector3 AtoO = spider.po.transform.position - po.transform.position;
            float forwardDot, rightDot;
            forwardDot = Vector3.Dot(AtoO, po.direction);
            //Check if Obstacle is Behind Bug
            if (forwardDot > -spider.po.radius)
            {
                //Check if Obstacle is Far Left or Right of Bug
                rightDot = Vector3.Dot(AtoO, po.transform.right);
                if (Mathf.Abs(rightDot) < forwardDot / 2.0f)
                {
                    return true;
                }
            }
        }
        return false;
    }
}
