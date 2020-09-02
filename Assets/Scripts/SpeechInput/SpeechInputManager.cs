using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeechInputManager : MonoBehaviour, IMixedRealitySpeechHandler
{

    [SerializeField]
    DebugLogManager m_debugLogManager;

    private void OnEnable()
    {
        CoreServices.InputSystem?.RegisterHandler<IMixedRealitySpeechHandler>(this);
    }

    private void OnDisable()
    {
        CoreServices.InputSystem?.UnregisterHandler<IMixedRealitySpeechHandler>(this);
    }

    public void OnSpeechKeywordRecognized(SpeechEventData eventData)
    {
        if (eventData.Command.Keyword == "よんさんのろくよんぶいじーかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("43-64VG OK");
        }
        else if (eventData.Command.Keyword == "よんさんのろくよんびーかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("43-64B OK");
        }
        else if (eventData.Command.Keyword == "よんさんのろくよんびーぴーかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("43-64BP OK");
        }
        else if (eventData.Command.Keyword == "よんさんのななきゅーかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("43-79 OK");
        }
        else if (eventData.Command.Keyword == "ろくまんのひゃくさんじゅうとりっぷろっくあかてーてーかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("6-130 トリップロック赤T・T OK");
        }
        else if (eventData.Command.Keyword == "えむのさんびゃくとりっぷろっくあかてーてーかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("M-300 トリップロック赤T・T OK");
        }
        else if (eventData.Command.Keyword == "はちあーるかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("8R OK");
        }
        else if (eventData.Command.Keyword == "さんごうはいへんいちじしーてぃーにじぷらぐかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("3号配変1次 CT2次プラグ OK");
        }
        else if (eventData.Command.Keyword == "さんごうはいへんにじしーてぃーにじぷらぐかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("3号配変2次 CT2次プラグ OK");
        }
        else if (eventData.Command.Keyword == "ろくまんろくせんぼるとぴーでぃーさんじてーてーかくにんよし")
        {
            m_debugLogManager.DebugLogTextWrite("66kV PD3次T・T OK");
        }
    }
}
