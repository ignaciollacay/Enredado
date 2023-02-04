using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum MoveDir
{
    Left, Right
}

public class Player : MonoBehaviour
{
    public static Player Instance;

    [SerializeField] private GameObject playerPrefab;
    public List<PlayerController> roots = new List<PlayerController>();
    public PlayerController root;
    [SerializeField] private GameObject playerCam;

    public delegate void RootSplit();
    public event RootSplit OnRootSplit;

    public bool canSplit;

    private void Awake()
    {
        Instance = this;
        StartCoroutine(WaitForFirstInput());
    }

    private void Update()
    {
        if (canSplit)
        {
            if (Input.GetKeyDown(KeyCode.A))
                Split(MoveDir.Left);
            if (Input.GetKeyDown(KeyCode.D))
                Split(MoveDir.Right);
        }
    }

    private void Split(MoveDir dir)
    {
        List<PlayerController> newRoots = new List<PlayerController>();
        for (int i = 0; i < roots.Count; i++)
        {
            PlayerController newRoot = PlayerController.Create(playerPrefab, roots[i], dir, transform);
            newRoot.StartGrowth();
            newRoots.Add(newRoot);
        }
        for (int i = 0; i < newRoots.Count; i++)
        {
            roots.Add(newRoots[i]);
        }
        OnRootSplit?.Invoke();
    }

    private IEnumerator WaitForFirstInput()
    {
        yield return new WaitUntil(()=>Input.anyKeyDown);
        roots[0].dir = new Vector3(0, -0.15f, 0);
        roots[0].StartGrowth();
    }
}