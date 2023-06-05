using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

enum antStates
{
    Work,
    Survive
}

public class RunAway : Bug
{
    //Attributes
    Hunt spider;

    Food eat;

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

    private antStates state = antStates.Work;

    //Update is called once per frame
    protected override void Update()
    {
        Food closeFood = BugManager.Instance.FindClosestFood(transform.position);
        eat = closeFood;
        Hunt closeSpider = BugManager.Instance.KnowClosestSpider(transform.position);
        spider = closeSpider;
        base.Update();
    }

    protected override void SteeringForces()
    {
        totalForces += StayInBounds(boundsTime);
        switch (state)
        {
            case antStates.Work:
                totalForces += Seek(eat.transform.position);
                totalForces += AvoidObstacle() * avoidScale;
                if (SeeSpider())
                {
                    state = antStates.Survive;
                }
                break;
            case antStates.Survive:
                totalForces += Flee(spider.po.transform.position);
                if (!SeeSpider())
                {
                    state = antStates.Work;
                }
                break;
            default: break;
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
