using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    private Transform followTarget;

    
    public void SetTarget(Transform target)
    {
        followTarget = target;
    }
}
