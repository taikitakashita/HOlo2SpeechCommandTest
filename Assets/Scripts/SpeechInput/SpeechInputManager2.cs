using System;
using System.IO;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine;
using System.Runtime.Serialization;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.Windows.Input;
using UnityEngine.Windows.Speech;
using QRTracking;

#if WINDOWS_UWP
using System.Threading.Tasks;
using Windows.Storage;
#endif


public class SpeechInputManager2 : Singleton<SpeechInputManager2> ,IMixedRealitySpeechHandler
{
    [SerializeField]
    DebugLogManager m_debugLogManager;

    ManualList manualList;
    SpeechCommands[] m_SpeechCommandsArray;
    KeywordRecognizer m_Recognizer;

    public ManualList ManualList
    {
        set { this.manualList = value; }
        get { return this.manualList; }
    }


    private void OnEnable()
    {
        CoreServices.InputSystem?.RegisterHandler<IMixedRealitySpeechHandler>(this);
    }

    private void OnDisable()
    {
        CoreServices.InputSystem?.UnregisterHandler<IMixedRealitySpeechHandler>(this);
    }

    // Start is called before the first frame update
    void Start()
    {
        LoadManualJsonData();
    }

    public void LoadManualJsonData()
    {
        string manualJson = "";

#if !UNITY_EDITOR
        Task.Run(async () =>
        {
            UnityEngine.WSA.Application.InvokeOnAppThread(() =>
            {
                m_debugLogManager.DebugLogTextWrite("MyDebug:*****************1");
            }, false);

            var file = await KnownFolders.DocumentsLibrary.GetFileAsync("Manual.txt");
            //var file = await KnownFolders.DocumentsLibrary.GetFileAsync("City.txt");

            UnityEngine.WSA.Application.InvokeOnAppThread(() =>
            {
                m_debugLogManager.DebugLogTextWrite("MyDebug:*****************2");
            }, false);       

            manualJson = await FileIO.ReadTextAsync(file);

            manualList = JsonUtility.FromJson<ManualList>(manualJson);

            UnityEngine.WSA.Application.InvokeOnAppThread(() =>
            {
                m_debugLogManager.DebugLogTextWrite("MyDebug:*****************3");

                m_debugLogManager.DebugLogTextWrite("MyDebug:" + manualList.list[0].manual[0].operation.Count);
                m_debugLogManager.DebugLogTextWrite("MyDebug:" + manualList.list[0].manual[0].operation[0].kaiheiki);
                //m_debugLogManager.DebugLogTextWrite(manualJson);
            }, false);  
        });
#else
        var textAsset = Resources.Load("Manual") as TextAsset;
        manualJson = textAsset.text;
        manualList = JsonUtility.FromJson<ManualList>(manualJson);

        m_debugLogManager.DebugLogTextWrite("MyDebug:" + manualList.list[0].manual[0].operation.Count);
        m_debugLogManager.DebugLogTextWrite("MyDebug:" + manualList.list[0].manual[0].operation[0].kaiheiki);
        //m_debugLogManager.DebugLogTextWrite(manualJson);
#endif
    }

    public void OnSpeechKeywordRecognized(SpeechEventData eventData)
    {
        foreach (var val in manualList.list[0].manual[0].operation)
        {
            if (eventData.Command.Keyword == val.kaiheikikana)
            {
                m_debugLogManager.DebugLogTextWrite(val.kaiheiki + " ＯＫ");
            }
            else if(eventData.Command.Keyword == val.sousakana)
            {
                m_debugLogManager.DebugLogTextWrite(val.sousa + " ＯＫ");
            }
            else if (eventData.Command.Keyword == val.kakuninkana)
            {
                m_debugLogManager.DebugLogTextWrite(val.kakunin + " ＯＫ");
            }
        }
    }
}
