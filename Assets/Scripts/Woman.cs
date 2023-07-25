using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

//[CustomEditor(typeof(People))]
public class Woman : People
{
    private string womanName = "Joddy";

    public override void AddWords()
    {
        talkingWords.Add("こんにちは");
        talkingWords.Add("元気かい？");
        talkingWords.Add("またよろしくね！");
    }

    public override void Gender()
    {
        this.name = womanName;
        man = false;
        audioPitch = 2.5f;
    }
}
