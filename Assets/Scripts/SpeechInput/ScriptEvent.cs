using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScriptEvent : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("AAAAAAAAAAA");
        this.GetComponent<Interactable>().AddReceiver<InteractableOnPressReceiver>().OnRelease.AddListener(() => test("+++++++"));
    }

    public void test(string msg)
    {
        Debug.Log(msg);
    }

    public void MethodInvoke()
    {
        this.GetComponent<PressableButtonHoloLens2>().ButtonReleased.Invoke();
    }

    public void test2()
    {
        Debug.Log("testmessage***********");
    }
}
