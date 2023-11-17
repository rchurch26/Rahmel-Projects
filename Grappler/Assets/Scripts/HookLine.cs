using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HookLine : MonoBehaviour
{
    [Header("General Refernces:")]
    public Hook hook;
    public LineRenderer lineRender;

    [Header("General Settings:")]
    [SerializeField] private int precision = 40;
    [Range(0, 20)][SerializeField] private float straightenSpeed = 5;

    [Header("Rope Animation Settings:")]
    public AnimationCurve ropeAnimationCurve;
    [Range(0.01f, 4)][SerializeField] private float StartWaveSize = 2;
    float waveSize = 0;

    [Header("Rope Progression:")]
    public AnimationCurve ropeProgressionCurve;
    [SerializeField][Range(1, 50)] private float ropeProgressionSpeed = 1;

    float moveTime = 0;

    [HideInInspector] public bool isGrappling = true;

    bool strightLine = true;

    private void OnEnable()
    {
        moveTime = 0;
        lineRender.positionCount = precision;
        waveSize = StartWaveSize;
        strightLine = false;

        LinePointsToFirePoint();

        lineRender.enabled = true;
    }

    private void OnDisable()
    {
        lineRender.enabled = false;
        isGrappling = false;
    }

    private void LinePointsToFirePoint()
    {
        for (int i = 0; i < precision; i++)
        {
            lineRender.SetPosition(i, hook.hookPoint.position);
        }
    }

    private void Update()
    {
        moveTime += Time.deltaTime;
        DrawRope();
    }

    void DrawRope()
    {
        if (!strightLine)
        {
            if (lineRender.GetPosition(precision - 1).x == hook.grapplePoint.x)
            {
                strightLine = true;
            }
            else
            {
                DrawRopeWaves();
            }
        }
        else
        {
            if (!isGrappling)
            {
                hook.Grapple();
                isGrappling = true;
            }
            if (waveSize > 0)
            {
                waveSize -= Time.deltaTime * straightenSpeed;
                DrawRopeWaves();
            }
            else
            {
                waveSize = 0;

                if (lineRender.positionCount != 2) { lineRender.positionCount = 2; }

                DrawRopeNoWaves();
            }
        }
    }

    void DrawRopeWaves()
    {
        for (int i = 0; i < precision; i++)
        {
            float delta = (float)i / ((float)precision - 1f);
            Vector2 offset = Vector2.Perpendicular(hook.grappleDistanceVector).normalized * ropeAnimationCurve.Evaluate(delta) * waveSize;
            Vector2 targetPosition = Vector2.Lerp(hook.hookPoint.position, hook.grapplePoint, delta) + offset;
            Vector2 currentPosition = Vector2.Lerp(hook.hookPoint.position, targetPosition, ropeProgressionCurve.Evaluate(moveTime) * ropeProgressionSpeed);

            lineRender.SetPosition(i, currentPosition);
        }
    }

    void DrawRopeNoWaves()
    {
        lineRender.SetPosition(0, hook.hookPoint.position);
        lineRender.SetPosition(1, hook.grapplePoint);
    }
}