using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Platform : MonoBehaviour
{
    public UnityEvent OnPlatformCollision;

    private void OnTriggerEnter(Collider other)
    {
        PlayerController root = other.GetComponent<PlayerController>();
        Debug.Log("Platform Collision: " + gameObject + other.name, other.gameObject);
        root.StopGrowth();

        OnPlatformCollision?.Invoke();
    }
}
