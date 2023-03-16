using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

//[CustomEditor(typeof(People))]
public class Teddy : People
{
    public override void AddWords()
    {
        talkingWords.Add("やあ");
        talkingWords.Add("見つかっちゃったね");
        talkingWords.Add("ボクがベアーだよ！");
    }

    public override void AddWordsClear()
    {
        talkingWords.Remove("やあ");
        talkingWords.Remove("見つかっちゃったね");
        talkingWords.Remove("ボクがベアーだよ！");

        talkingWords.Add("お菓子ありがとう！");
        talkingWords.Add("うれしいな！");
        talkingWords.Add("ムフフーー");
    }

    public override void Gender()
    {
        this.name = "Bear";
        man = false;
        audioPitch = 2.5f;
    }
}
