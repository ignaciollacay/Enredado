using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
    [Header("Testing")]
    [SerializeField] float dirChangeAngle = 0.1f;
    [Header("Refs")]
    [SerializeField] private GameObject playerPrefab;
    private Player player;
    private Rigidbody rb;
    public Vector3 dir;

    public delegate void RootSplit();
    public event RootSplit OnRootSplit;

    private void Awake()
    {
        player = GetComponent<Player>();
        rb = GetComponent<Rigidbody>();
    }

    private void Start()
    {
        rb.AddForce(dir, ForceMode.Force);
    }

    public void Death()
    {
        //Spawn(playerPrefab.transform.position, playerPrefab.transform.rotation);
        Destroy(rb);
    }

    private PlayerController Spawn(Vector3 pos, Quaternion rot)
    {
        var newSphere = Instantiate(playerPrefab, pos, rot);
        var newController = newSphere.GetComponent<PlayerController>();

        return newController;
    }

    private void Split(Vector3 dir)
    {
        // Offset position so that both colliders dont touch?
        Vector3 pos = new Vector3(transform.position.x - 0.2f, transform.position.y, transform.position.z); 
        // Create a new PlayerSphere
        PlayerController newSphere = Spawn(transform.position, transform.rotation);
        // Change new sphere direction.
        newSphere.dir = dir;
        // Set as new target for camera
        player.AddRoot(newSphere);

        OnRootSplit?.Invoke();

    }
    private Vector3 GetRightDirection()
    {
        Vector3 right = new Vector3(dir.x + dirChangeAngle, dir.y, dir.z);
        return right;
    }
    private Vector3 GetLeftDirection()
    {
        Vector3 left = new Vector3(dir.x - dirChangeAngle, dir.y, dir.z);
        return left;
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
            Split(GetLeftDirection());
        if (Input.GetKeyDown(KeyCode.D))
            Split(GetRightDirection());

    }
}