using UnityEngine;
using TMPro;

public class UIManager : MonoBehaviour
{
    public static UIManager Instance;

    private void Awake()
    {
        Instance = this;

        var texts = GetComponentsInChildren<TextMeshPro>();
        for (int i = 0; i < texts.Length; i++)
        {
            texts[i].gameObject.SetActive(false);
        }
    }

    public static void ShowUIMessage(TextMeshPro text)
    {
        text.gameObject.SetActive(true);
        Debug.Log("Showing UI " + text.gameObject);
    }
    public static void HideUIMessage(TextMeshPro text)
    {
        text.gameObject.SetActive(false);
        Debug.Log("Hiding UI " + text.gameObject);
    }
}