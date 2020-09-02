using System;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 【JSON】操作指令伝票情報
/// </summary>
[Serializable]
public class MachineManual
{
    public string name;
    public List<OperationInfo> operation;
}
