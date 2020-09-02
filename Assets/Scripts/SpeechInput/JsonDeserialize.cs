using System;
using System.IO;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine;
using System.Runtime.Serialization;
using System.Collections.Generic;

#if WINDOWS_UWP
using System.Threading.Tasks;
using Windows.Storage;
#endif

public class JsonDeserialize : MonoBehaviour
{
    [SerializeField]
    DebugLogManager m_debugLogManager;

    Prefecture prefecture;

    // Start is called before the first frame update
    void Start()
    {
        LoadJsonData();
    }

    public void LoadJsonData()
    {
        string Jsonstring = "";

#if !UNITY_EDITOR
        Task.Run(async () =>
        {
            UnityEngine.WSA.Application.InvokeOnAppThread(() =>
            {
                m_debugLogManager.DebugLogTextWrite("MyDebug:*****************1");
            }, false);

            var file = await KnownFolders.DocumentsLibrary.GetFileAsync("City.txt");

            UnityEngine.WSA.Application.InvokeOnAppThread(() =>
            {
                m_debugLogManager.DebugLogTextWrite("MyDebug:*****************2");
            }, false);       

            Jsonstring = await FileIO.ReadTextAsync(file);

            using (var stream = new MemoryStream(System.Text.Encoding.UTF8.GetBytes(Jsonstring)))
            {
                var serializer = new System.Runtime.Serialization.Json.DataContractJsonSerializer(typeof(Prefecture));
                // クラスにデータを読み込む
                prefecture = serializer.ReadObject(stream) as Prefecture;
            }

            UnityEngine.WSA.Application.InvokeOnAppThread(() =>
            {
                m_debugLogManager.DebugLogTextWrite("MyDebug:*****************3");

                //prefecture = JsonUtility.FromJson<Prefecture>(Jsonstring);

                m_debugLogManager.DebugLogTextWrite("MyDebug:*****************4");
                m_debugLogManager.DebugLogTextWrite("MyDebug:" + prefecture.Cities.Count);
                m_debugLogManager.DebugLogTextWrite("MyDebug:" + prefecture.Cities[0].Name);
                m_debugLogManager.DebugLogTextWrite(Jsonstring);
            }, false);  
        });
#else
        var textAsset = Resources.Load("City") as TextAsset;
        Jsonstring = textAsset.text;
        using (var stream = new MemoryStream(System.Text.Encoding.UTF8.GetBytes(Jsonstring)))
        {
            var serializer = new System.Runtime.Serialization.Json.DataContractJsonSerializer(typeof(Prefecture));
            // クラスにデータを読み込む
            prefecture = serializer.ReadObject(stream) as Prefecture;
        }
        //prefecture = JsonUtility.FromJson<Prefecture>(Jsonstring);

        m_debugLogManager.DebugLogTextWrite("MyDebug:" + prefecture.Cities.Count);
        m_debugLogManager.DebugLogTextWrite("MyDebug:" + prefecture.Cities[0].Name);
        m_debugLogManager.DebugLogTextWrite(Jsonstring);
#endif
    }
}
