using QRTracking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DebugLogManager : Singleton<DebugLogManager>
{
    [SerializeField]
    private Text DebugLogText;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void DebugLogTextWrite(string msg)
    {
        DebugLogText.text += "DebugLog:" + msg + "\n";
    }
}