using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateRandomPosition : MonoBehaviour
{
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefab;
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefabBear;
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefabCake;
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefabDonuts;
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefabHambuger;
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefabHamEgg;
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefabIceCream;
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefabCMilk;
    [SerializeField]
    [Tooltip("生成するGameObject")]
    private GameObject createPrefabWaffle;

    // 経過時間
    private float time;

    //　人数
    private int number1;
    private int number2;
    private int allHumans = 16;

    // 範囲
    private float xRange = 30f;
    private float zRange = 18f;
    private float xMinTeddyRange = 28f;
    private float zMinTeddyRange = 17f;
    private float xMaxTeddyRange = 27f;
    private float zMaxTeddyRange = 16f;

    // スイーツ
    private const string cake = "Cake";
    private const string donuts = "Donuts";
    private const string hambuger = "Hambuger";
    private const string hamEgg = "HamEgg";
    private const string iceCream = "IceCream";
    private const string milk = "Milk";
    private const string waffle = "Waffle";

    void Start(){
        number1 = 1;
        number2 = 1;

    }

    // Update is called once per frame
    void Update()
    {
        // 前フレームからの時間を加算していく
        //time = time + Time.deltaTime;

        // 約1秒置きにランダムに生成されるようにする。
        //if(time > 1.0f)
        if(number1 <= allHumans)
		{
            float x = Random.Range(-xRange, xRange);
            float z = Random.Range(-zRange, zRange);

            // GameObjectを上記で決まったランダムな場所に生成
            if(number1 < allHumans)
            {
                Instantiate(createPrefab, new Vector3(x,0,z), createPrefab.transform.rotation);
            }
            else if(number1 == allHumans)
            {
                x = Random.Range(-xMinTeddyRange, -xMaxTeddyRange);
                z = Random.Range(-zMinTeddyRange, -zMaxTeddyRange);

                Instantiate(createPrefabBear, new Vector3(x,0,z), createPrefabBear.transform.rotation);
            }
            

            // 経過時間リセット
            //time = 0f;
            // 人数カウントを増やす
            number1++;
        }

        if (number2 <= 2)
        {
            float x = Random.Range(-xRange, xRange);
            float z = Random.Range(-18f, 18f);

            Instantiate(createPrefabCake, new Vector3(x, 0, z), createPrefabCake.transform.rotation);
            createPrefabCake.name = cake;

            x = Random.Range(-xRange, xRange);
            z = Random.Range(-zRange, zRange);

            Instantiate(createPrefabDonuts, new Vector3(x, 0, z), createPrefabDonuts.transform.rotation);
            createPrefabDonuts.name = donuts;

            x = Random.Range(-xRange, xRange);
            z = Random.Range(-zRange, zRange);

            Instantiate(createPrefabHambuger, new Vector3(x, 0, z), createPrefabHambuger.transform.rotation);
            createPrefabHambuger.name = hambuger;

            x = Random.Range(-xRange, xRange);
            z = Random.Range(-zRange, zRange);

            Instantiate(createPrefabHamEgg, new Vector3(x, 0, z), createPrefabHamEgg.transform.rotation);
            createPrefabHamEgg.name = hamEgg;

            x = Random.Range(-xRange, xRange);
            z = Random.Range(-zRange, zRange);

            Instantiate(createPrefabIceCream, new Vector3(x, 0, z), createPrefabIceCream.transform.rotation);
            createPrefabIceCream.name = iceCream;

            x = Random.Range(-xRange, xRange);
            z = Random.Range(-zRange, zRange);

            Instantiate(createPrefabCMilk, new Vector3(x, 0, z), createPrefabCMilk.transform.rotation);
            createPrefabCMilk.name = milk;

            x = Random.Range(-xRange, xRange);
            z = Random.Range(-zRange, zRange);

            Instantiate(createPrefabWaffle, new Vector3(x, 0, z), createPrefabWaffle.transform.rotation);
            createPrefabWaffle.name = waffle;

            // 経過時間リセット
            //time = 0f;
            // 人数カウントを増やす
            number2++;
        }
    }
}
