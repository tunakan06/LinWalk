using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(People))]
public class Woman : People
{
    public override void AddWords()
    {
        talkingWords.Add("こんにちは");
        talkingWords.Add(humanCount + "人目の私だよ。ようこそ");
        talkingWords.Add("またよろしくね！");
    }

    public override void Gender()
    {
        man = false;
        audioPitch = 2.5f;
    }
}
