using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using FMOD;
using FMODUnity;
using System;

public class GameManager : MonoBehaviour
{
    [SerializeField] PlayerController root;             
    [SerializeField] GameObject platform;
    public Dialogue[] dialogues;

    private int count = 0;

    private void Awake()
    {
        dialogues = GetComponentsInChildren<Dialogue>();
    }

    private void Start()
    {
        platform.SetActive(false);
        root.StartGrowth();
        StartCoroutine(WaitForFirstInput());
        Player.Instance.OnRootSplit += IncreaseCounter;
    }

    private void IncreaseCounter()
    {
        Player.Instance.canSplit = false;
        dialogues[count].CanPlay(false);
        count++;
        dialogues[count].CanPlay(true);
    }

    private IEnumerator WaitForFirstInput()
    {
        yield return new WaitUntil(() => Input.anyKeyDown);
        platform.transform.position = GetPosition();
        platform.SetActive(true);
        dialogues[count].CanPlay(true);
    }

    private Vector3 GetPosition()
    {
        float y = root.transform.position.y - 1.3f;
        return new Vector3(0, y, 0);
    }

    public void ResetGame()
    {
        SceneManager.LoadScene(0);
    }


}
