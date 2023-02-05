using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [SerializeField] PlayerController root;             
    [SerializeField] GameObject platform;

    private void Start()
    {
        platform.SetActive(false);
        root.StartGrowth();
        StartCoroutine(WaitForFirstInput());
    }
    private IEnumerator WaitForFirstInput()
    {
        yield return new WaitUntil(() => Input.anyKeyDown);
        platform.SetActive(true);
    }

    public void ResetGame()
    {
        SceneManager.LoadScene(0);
    }
}
