using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(People))]
public class Woman : People
{
    public override void AddWords()
    {
        //talkingWords.Add("Hi!");
        //talkingWords.Add("Im historia");
        //talkingWords.Add("Bye!");
        talkingWords.Add("こんにちは");
        talkingWords.Add("私はヒストリアさ");
        talkingWords.Add("またよろしくね！");
    }

    public override void Gender()
    {
        man = false;
        audioPitch = 2.5f;
    }
}
