using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using TMPro;

public class GameManager : MonoBehaviour
{
    [SerializeField] Dialogue[] dialogues;
    [SerializeField] PlayerController root;             
    [SerializeField] GameObject platform;
    [SerializeField] TextMeshPro startMessage;
    private bool hasStarted = false;
    public int count = 0;

    private void Start()
    {
        platform.SetActive(false);
        UIManager.ShowUIMessage(startMessage);
        //root.StartGrowth();
        StartGame();//StartCoroutine(WaitForFirstInput()); //FIXME: RESTORE COMMENT, REPLACE
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
        yield return new WaitUntil(() => Input.anyKeyDown);
        hasStarted = true;
        StartGame();
    }

    private void StartGame()
    {
        UIManager.HideUIMessage(startMessage);
        root.StartGrowth();
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