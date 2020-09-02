using System;
using QRTracking;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;

#if WINDOWS_UWP
using System.Threading.Tasks;
using Windows.Storage;
#endif

/// <summary>
/// サウンドマネージャー
/// </summary>
public class SoundManager : Singleton<SoundManager>
{
    [SerializeField]
    private AudioSource m_AudioSource;

    private AudioClip m_NaviAudioClip;

    public void PlayVoiceNavi()
    {
        StartCoroutine("PlayVoiceNaviCoroutine", "Lock.mp3");
    }

    //音声ナビゲーションファイルの読み込み（ダウンロード）と再生
    public IEnumerator PlayVoiceNaviCoroutine(string filename)
    {
#if !UNITY_EDITOR
        if (!File.Exists("C:/Data/USERS/MRUser1/Documents/" + filename))
        {
            UnityEngine.WSA.Application.InvokeOnAppThread(() =>
            {
                DebugLogManager.Instance.DebugLogTextWrite("PlayVoiceNavi PathError");
            }, false);  
            yield break;
        }

        UnityEngine.WSA.Application.InvokeOnAppThread(() =>
        {
            DebugLogManager.Instance.DebugLogTextWrite("file:///C:/Data/USERS/MRUser1/Documents/" + filename);
        }, false);  

        using (UnityWebRequest www = UnityWebRequestMultimedia.GetAudioClip("file:///C:/Data/USERS/MRUser1/Documents/" + filename, AudioType.MPEG))  //※あくまでローカルファイルとする
        {
            ((DownloadHandlerAudioClip)www.downloadHandler).streamAudio = true;
            yield return www.SendWebRequest();

            if(www.isNetworkError || www.isHttpError)
            {
                UnityEngine.WSA.Application.InvokeOnAppThread(() =>
                {
                    DebugLogManager.Instance.DebugLogTextWrite("PlayVoiceNavi WWWError");
                }, false);
                yield break;
            }
        
            DownloadHandlerAudioClip dlHandler = (DownloadHandlerAudioClip)www.downloadHandler;

            if(dlHandler.isDone)
            {
                UnityEngine.WSA.Application.InvokeOnAppThread(() =>
                {
                    DebugLogManager.Instance.DebugLogTextWrite("PlayVoiceNavi dlHandler isDone");
                }, false); 

                AudioClip audioClip = dlHandler.audioClip;

                if (audioClip != null)
                {
                    UnityEngine.WSA.Application.InvokeOnAppThread(() =>
                    {
                        DebugLogManager.Instance.DebugLogTextWrite("PlayVoiceNavi AudioClip Get");
                    }, false); 

                    m_NaviAudioClip = DownloadHandlerAudioClip.GetContent(www);
                    m_AudioSource.PlayOneShot(m_NaviAudioClip);
                }
                else
                {
                    UnityEngine.WSA.Application.InvokeOnAppThread(() =>
                    {
                        DebugLogManager.Instance.DebugLogTextWrite("PlayVoiceNavi AudioClip null");
                    }, false); 
                }
            }                
            else
            {
                UnityEngine.WSA.Application.InvokeOnAppThread(() =>
                {
                    DebugLogManager.Instance.DebugLogTextWrite("PlayVoiceNavi dlHandler not isDone");
                }, false); 
            }
            www.Dispose();
        }
#endif
        yield return null;
    }
}
