using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Platform : MonoBehaviour
{
    public UnityEvent OnPlatformCollision;

    private void OnTriggerEnter(Collider other)
    {
        OnPlatformCollision?.Invoke();
    }
}
