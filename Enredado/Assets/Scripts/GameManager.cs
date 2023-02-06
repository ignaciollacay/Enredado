using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using TMPro;
using FMODUnity;

public class GameManager : MonoBehaviour
{
    [SerializeField] Dialogue[] dialogues;
    [SerializeField] PlayerController root;             
    [SerializeField] GameObject platform;
    [SerializeField] TextMeshPro startMessage;
    [SerializeField] TextMeshPro endMessage;
    [SerializeField] TextMeshPro resetMessage;
    [SerializeField] private StudioEventEmitter startMx;
    public bool hasStarted = false;
    public int count = 0;

    [SerializeField] LerpPosition lerpPosition;

    private void Start()
    {
        platform.SetActive(false);
        UIManager.ShowUIMessage(startMessage);
        StartCoroutine(WaitForFirstInput());
        Player.Instance.OnRootSplit += IncreaseCounter;
    }

    private void IncreaseCounter()
    {
        Player.Instance.canSplit = false;
        dialogues[count].CanPlay(false);
        count++;
        if (count <= dialogues.Length)
            dialogues[count].CanPlay(true);
        else
            Debug.Log("There are no more dialogues left");
    }

    private IEnumerator WaitForFirstInput()
    {
        startMx.Play();
        yield return new WaitUntil(() => Input.anyKeyDown);
        hasStarted = true;
        StartGame();
    }

    private void StartGame()
    {
        UIManager.HideUIMessage(startMessage);
        root.StartGrowth();
        lerpPosition.StartForwardLerp();

        platform.transform.position = GetPosition();
        platform.SetActive(true);
        dialogues[count].CanPlay(true);

        StartCoroutine(LostGame());
    }

    private Vector3 GetPosition()
    {
        float y = root.transform.position.y - 1.3f;
        return new Vector3(0, y, 0);
    }

    private IEnumerator LostGame()
    {
        yield return new WaitUntil(() => Player.Instance.roots.Count == 0);
        lerpPosition.StartReverseLerp();
        UIManager.ShowUIMessage(resetMessage);
    }

    private void ExitGame()
    {
        StartCoroutine(WaitForLastInput());
        UIManager.ShowUIMessage(endMessage);
        Application.Quit();
    }

    private IEnumerator WaitForLastInput()
    {
        yield return new WaitUntil(() => Input.anyKeyDown);
        ExitGame();
    }
}