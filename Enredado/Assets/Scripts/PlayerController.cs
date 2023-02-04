using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
    [Header("Testing")]
    public static float down = 0.15f;
    public static float side = 0.2f;
    [Header("Refs")]
    private Rigidbody rb;
    public Vector3 dir;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }

    public void StartGrowth()
    {
        rb.AddForce(dir, ForceMode.Force);
    }

    public void StopGrowth()
    {
        Destroy(rb);
    }

    public static PlayerController Create(GameObject prefab, PlayerController parent, MoveDir moveDir, Transform player)
    {
        Vector3 pos = parent.transform.position;
        Quaternion rot = parent.transform.rotation;

        var newSphere = Instantiate(prefab, pos, rot, player);
        var newController = newSphere.AddComponent<PlayerController>();
        if (moveDir == MoveDir.Left)
        {
            newController.dir = GetLeftDirection(parent.dir);
        }
        else
        {
            newController.dir = GetRightDirection(parent.dir);
        }

        return newController;
    }

    public static Vector3 GetRightDirection(Vector3 parentDir)
    {
        return new Vector3(parentDir.x + side, parentDir.y, parentDir.z);
    }
    public static Vector3 GetLeftDirection(Vector3 parentDir)
    {
        return new Vector3(parentDir.x - side, parentDir.y, parentDir.z);
    }
}