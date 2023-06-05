using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum spiderStates
{
    Stalk,
    Hunt
}

public class Hunt : Bug
{
    //Attributes
    RunAway ant;
    
    [SerializeField]
    float seekScalar = 5.0f;

    float wanderAngle = -1;

    [SerializeField]
    float boundsTime = 1.0f;

    Vector3 wanderForce;

    [SerializeField]
    float centerScale, wanderScale, avoidScale = 1.0f;

    [SerializeField]
    float avoidTime;

    private spiderStates state;

    protected override void SteeringForces()
    {
        totalForces += StayInBounds(boundsTime);
        switch (state)
        {
            case spiderStates.Stalk:
                if(wanderAngle == -1)
                {
                    wanderAngle = Random.Range(0.0f, 360.0f);
                }
                else
                {
                    wanderAngle += Random.Range(-angleStep, angleStep);
                    if(wanderAngle > maxAngle)
                    {
                        wanderAngle = maxAngle;
                    }else if(wanderAngle < -maxAngle)
                    {
                        wanderAngle = -maxAngle;
                    }
                }
                wanderForce = Wander(wanderAngle) * wanderScale;
                totalForces += wanderForce;
                totalForces += AvoidObstacle() * avoidScale;
                totalForces += Separate();
                if (SeeAnt())
                {
                    state = spiderStates.Hunt;
                }
                break;
            case spiderStates.Hunt:
                RunAway closeAnt = BugManager.Instance.KnowClosestAnt(transform.position);
                ant = closeAnt;
                float distance = Mathf.Pow(ant.po.transform.position.x - transform.position.x, 2) +
                    Mathf.Pow(ant.po.transform.position.y - transform.position.y, 2);
                if (Mathf.Pow(ant.po.radius + po.radius, 2) >= distance)
                {
                    Debug.Log("Collision!");
                    Destroy(ant.gameObject);
                    BugManager.Instance.ants.Remove(ant);
                }
                totalForces += Pursue(ant);
                if (!SeeAnt())
                {
                    state = spiderStates.Stalk;
                }
                break;
            default:
                break;
        }
    }

    private void OnDrawGizmos()
    {
        //Gizmos.color = Color.yellow;
        //Gizmos.DrawRay(transform.position, po.velocity);
        //Gizmos.color = Color.cyan;
        //Gizmos.DrawRay(transform.position, wanderForce);

        Vector3 futurePos = CalcFuturePosition(avoidTime);
        float dist = Vector3.Distance(transform.position, futurePos) + po.radius;
        Vector3 boxSize = new Vector3(po.radius * 2.0f, dist, po.radius * 2.0f);
        Vector3 boxCenter = Vector3.zero;
        boxCenter.y += dist / 2.0f;
        Gizmos.color = Color.green;
        Gizmos.matrix = transform.localToWorldMatrix;
        Gizmos.DrawWireCube(boxCenter, boxSize);
        Gizmos.matrix = Matrix4x4.identity;

        Gizmos.color = Color.black;
        foreach (Vector3 pos in foundObstacles)
        {
            Gizmos.DrawLine(transform.position, pos);
        }
    }
}
