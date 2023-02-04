using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public List<PlayerController> roots = new List<PlayerController>();
    public PlayerController root;
    [SerializeField] private GameObject playerCam;

    private void Awake()
    {
        //var player = GetComponentInChildren<PlayerController>();
        //roots.Add(player);
        //root = player;
    }
    public void AddRoot(PlayerController newRoot)
    {
        roots.Add(newRoot);
        root = newRoot;
    }

    private void Update()
    {
        if (root!=null && playerCam != null)
        {
            Vector3 dir = new Vector3(playerCam.transform.position.x, root.transform.position.y, playerCam.transform.position.z);
            playerCam.transform.position = dir;
        }
        
    }
}
