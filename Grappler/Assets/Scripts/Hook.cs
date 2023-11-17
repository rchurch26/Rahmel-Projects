using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hook : MonoBehaviour
{
    [Header("Scripts Ref:")]
    public HookLine line;

    [Header("Layers Settings:")]
    [SerializeField] private bool grappleAll = false;
    [SerializeField] private int grappableLayerNumber = 9;

    [Header("Main Camera:")]
    public Camera cam;

    [Header("Transform Ref:")]
    public Transform playerPos;
    public Transform hookPivot;
    public Transform hookPoint;

    [Header("Physics Ref:")]
    public SpringJoint2D spring;
    public Rigidbody2D playerBody;

    [Header("Rotation:")]
    [SerializeField] private bool rotateOverTime = true;
    [Range(0, 60)][SerializeField] private float rotationSpeed = 4;

    [Header("Distance:")]
    [SerializeField] private bool hasMaxDis = false;
    [SerializeField] private float maxDis = 20;

    private enum LaunchType
    {
        Transform_Launch,
        Physics_Launch
    }

    [Header("Launching:")]
    private bool launchToPoint = false;
    [SerializeField] private LaunchType type = LaunchType.Physics_Launch;
    [SerializeField] private float launchSpeed = 1;

    [Header("No Launch To Point")]
    [SerializeField] private bool autoConfigureDistance = false;
    [SerializeField] private float targetDistance = 3;
    [SerializeField] private float targetFrequncy = 1;

    [HideInInspector] public Vector2 grapplePoint;
    [HideInInspector] public Vector2 grappleDistanceVector;

    private void Start()
    {
        line.enabled = false;
        spring.enabled = false;

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            SetGrapplePoint();
        }
        else if (Input.GetKey(KeyCode.Mouse0))
        {
            if (line.enabled)
            {
                RotateGun(grapplePoint, false);
            }
            else
            {
                Vector2 mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
                RotateGun(mousePos, true);
            }

            if (line.isGrappling)
            {
                if (type == LaunchType.Transform_Launch)
                {
                    Vector2 firePointDistnace = hookPoint.position - playerPos.localPosition;
                    Vector2 targetPos = grapplePoint - firePointDistnace;
                    playerPos.position = Vector2.Lerp(playerPos.position, targetPos, Time.deltaTime * launchSpeed);
                }
            }
        }
        else if (Input.GetKeyUp(KeyCode.Mouse0))
        {
            line.enabled = false;
            spring.enabled = false;
            playerBody.gravityScale = 1;
        }
        else
        {
            Vector2 mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
            RotateGun(mousePos, true);
        }

        if (Input.GetKeyDown(KeyCode.Mouse1))
        {
            SetGrapplePoint();
            launchToPoint = true;
        }
        else if (Input.GetKey(KeyCode.Mouse1))
        {
            if (line.enabled)
            {
                RotateGun(grapplePoint, false);
            }
            else
            {
                Vector2 mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
                RotateGun(mousePos, true);
            }

            if (line.isGrappling)
            {
                if (type == LaunchType.Transform_Launch)
                {
                    Vector2 firePointDistnace = hookPoint.position - playerPos.localPosition;
                    Vector2 targetPos = grapplePoint - firePointDistnace;
                    playerPos.position = Vector2.Lerp(playerPos.position, targetPos, Time.deltaTime * launchSpeed);
                }
            }
        }
        else if (Input.GetKeyUp(KeyCode.Mouse1))
        {
            line.enabled = false;
            spring.enabled = false;
            playerBody.gravityScale = 1;
            launchToPoint = false;
        }
        else
        {
            Vector2 mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
            RotateGun(mousePos, true);
        }
    }

    void RotateGun(Vector3 lookPoint, bool allowRotationOverTime)
    {
        Vector3 distanceVector = lookPoint - hookPivot.position;

        float angle = Mathf.Atan2(distanceVector.y, distanceVector.x) * Mathf.Rad2Deg;
        if (rotateOverTime && allowRotationOverTime)
        {
            hookPivot.rotation = Quaternion.Lerp(hookPivot.rotation, Quaternion.AngleAxis(angle, Vector3.forward), Time.deltaTime * rotationSpeed);
        }
        else
        {
            hookPivot.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
        }
    }

    void SetGrapplePoint()
    {
        Vector2 distanceVector = cam.ScreenToWorldPoint(Input.mousePosition) - hookPivot.position;
        if (Physics2D.Raycast(hookPoint.position, distanceVector.normalized))
        {
            RaycastHit2D _hit = Physics2D.Raycast(hookPoint.position, distanceVector.normalized);
            if (_hit.transform.gameObject.layer == grappableLayerNumber || grappleAll)
            {
                if (Vector2.Distance(_hit.point, hookPoint.position) <= maxDis || !hasMaxDis)
                {
                    grapplePoint = _hit.point;
                    grappleDistanceVector = grapplePoint - (Vector2)hookPivot.position;
                    line.enabled = true;
                }
            }
        }
    }

    public void Grapple()
    {
        spring.autoConfigureDistance = false;
        if (!launchToPoint && !autoConfigureDistance)
        {
            spring.distance = targetDistance;
            spring.frequency = targetFrequncy;
        }
        if (!launchToPoint)
        {
            if (autoConfigureDistance)
            {
                spring.autoConfigureDistance = true;
                spring.frequency = 0;
            }

            spring.connectedAnchor = grapplePoint;
            spring.enabled = true;
        }
        else
        {
            switch (type)
            {
                case LaunchType.Physics_Launch:
                    spring.connectedAnchor = grapplePoint;

                    Vector2 distanceVector = hookPoint.position - playerPos.position;

                    spring.distance = distanceVector.magnitude;
                    spring.frequency = launchSpeed;
                    spring.enabled = true;
                    break;
                case LaunchType.Transform_Launch:
                    playerBody.gravityScale = 0;
                    playerBody.velocity = Vector2.zero;
                    break;
            }
        }
    }

    private void OnDrawGizmosSelected()
    {
        if (hookPoint != null && hasMaxDis)
        {
            Gizmos.color = Color.green;
            Gizmos.DrawWireSphere(hookPoint.position, maxDis);
        }
    }
}