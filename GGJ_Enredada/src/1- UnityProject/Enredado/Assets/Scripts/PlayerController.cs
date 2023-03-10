using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
    [Header("Testing")]
    public static float down = 0.1f;
    public static float side = 0.1f;
    [Header("Refs")]
    private Rigidbody rb;
    public Vector3 dir;

    public delegate void RootDeath();
    public static event RootDeath OnRootDeath;

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
        Player.Instance.root = null;
        Player.Instance.roots.Remove(this);
        Player.Instance.FindLowestRoot();
        Destroy(rb);
        OnRootDeath?.Invoke();
        Destroy(this);
    }

    public static PlayerController Create(GameObject prefab, PlayerController parent, MoveDir moveDir, Transform player)
    {
        Vector3 pos = parent.transform.position;
        Quaternion rot = parent.transform.rotation;

        var newSphere = Instantiate(prefab, pos, rot, player);
        var newController = newSphere.GetComponent<PlayerController>();
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
        float x = parentDir.x + side;
        //if (x == 0)
        //    x = x + side;
        return new Vector3(x, parentDir.y, parentDir.z);
    }
    public static Vector3 GetLeftDirection(Vector3 parentDir)
    {
        float x = parentDir.x - side;
        //if (x == 0)
        //    x = x - side;
        return new Vector3(x, parentDir.y, parentDir.z);
    }

    //private void OnTriggerEnter(Collider other)
    //{
    //    if (other.CompareTag("Player"))
    //    {
    //        Merge(gameObject, other.gameObject);
    //    }
    //}
    //public void Merge(GameObject root1, GameObject root2)
    //{
    //    Destroy(root1);
    //    Destroy(root2);
    //    PlayerController newRoot = PlayerController.Create(Player.Instance.playerPrefab, roots[i], dir, transform);
    //}
}