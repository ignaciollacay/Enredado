using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    public static PlayerCamera Instance;
    public float target { get => GetFollowTarget(); }
    Vector3 pos;

    private void Awake()
    {
        Instance = this;
    }

    private IEnumerator ReCheckPosition()
    {
        var oldPos = target;
        yield return new WaitForSeconds(2);
        if (oldPos == target)
        {
            Player.Instance.FindLowestRoot();
        }
    }

    public float GetFollowTarget()
    {
        if (Player.Instance.root == null)
        {
            Player.Instance.FindLowestRoot();
        }
        StartCoroutine(ReCheckPosition());
        return Player.Instance.root.transform.position.y;
    }

    private void Update()
    {
        transform.position = new Vector3(transform.position.x, target, transform.position.z);
    }
}

