using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FMODUnity;

public class Dialogue : MonoBehaviour
{
    [SerializeField] private GameObject text;
    [SerializeField] private StudioEventEmitter audioEmitter;


    private void Awake()
    {
        if(text.activeSelf)
        {
            text.SetActive(false);
        }
    }
    private void Start()
    {
        Player.Instance.OnRootSplit += Show;
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Player.Instance.canSplit = true;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Player.Instance.canSplit = false;
        }
    }
    private void Show()
    {
        Debug.Log("Player split on correct place");
        text.SetActive(true);
        audioEmitter.Play();
    }
}