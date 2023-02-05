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
    public PlayerController root;

    [SerializeField] private GameObject playerPrefab;
    public List<PlayerController> roots = new List<PlayerController>();
    [SerializeField] private GameObject playerCam;

    public delegate void RootSplit();
    public event RootSplit OnRootSplit;

    public bool canSplit;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        FindLowestRoot();
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
        FindLowestRoot();
        OnRootSplit?.Invoke();
    }

    public void FindLowestRoot()
    {
        //if (root == null)
        //{
            int lowest = 0;
            for (int i = 1; i < roots.Count; i++)
            {
                if (roots[i].transform.position.y < roots[lowest].transform.position.y)
                {
                    lowest = i;
                }
            }
            root = roots[lowest];
            Debug.Log("Found lowest root " + root.gameObject);
        //}
    }
}