using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FMODUnity;
using TMPro;

public class Dialogue : MonoBehaviour
{
    [SerializeField] private TextMeshPro ui = null;
    [SerializeField] private GameObject text;
    [SerializeField] private StudioEventEmitter audioEmitter;


    private void Awake()
    {
        if(text.activeSelf)
        {
            text.SetActive(false);
        }
    }
    public void CanPlay(bool canPlay)
    {
        if (canPlay)
        {
            Player.Instance.OnRootSplit += Show;
        }
        else
        {
            Player.Instance.OnRootSplit -= Show;
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Player.Instance.canSplit = true;
            if (ui != null)
            {
                Debug.Log("Player is inside trigger " + gameObject.name, gameObject.gameObject);
                UIManager.ShowUIMessage(ui);
            }
        }
    }

    private void Show()
    {
        Debug.Log("Player split on correct place");
        Player.Instance.canSplit = false;
        GetComponent<Collider>().enabled = false;
        if (ui != null)
            UIManager.HideUIMessage(ui);
        text.SetActive(true);
        audioEmitter.Play();
    }
}