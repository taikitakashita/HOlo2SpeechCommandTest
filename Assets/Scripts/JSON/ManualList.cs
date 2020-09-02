using System;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 【JSON】全機器の操作指令伝票一覧
/// </summary>
[Serializable]
public class ManualList
{
    public List<MachineList> list;
}