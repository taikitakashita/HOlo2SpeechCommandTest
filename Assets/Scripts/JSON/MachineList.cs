using System;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 【JSON】機器ごとの操作指令伝票一覧
/// </summary>
[Serializable]
public class MachineList
{
    public string machine;
    public List<MachineManual> manual;
}
