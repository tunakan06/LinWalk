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
        if(number1 <= 16)
		{
            float x = Random.Range(-30f, 30f);
            float z = Random.Range(-18f, 18f);

            // GameObjectを上記で決まったランダムな場所に生成
            if(number1 < 16){
                Instantiate(createPrefab, new Vector3(x,0,z), createPrefab.transform.rotation);
            }
            else if(number1 == 16){

                x = Random.Range(-28f, -27f);
                z = Random.Range(-17f, -16f);

                Instantiate(createPrefabBear, new Vector3(x,0,z), createPrefabBear.transform.rotation);
            }
            

            // 経過時間リセット
            //time = 0f;
            // 人数カウントを増やす
            number1++;
        }

        if (number2 <= 2)
        {
            float x = Random.Range(-30f, 30f);
            float z = Random.Range(-18f, 18f);

            Instantiate(createPrefabCake, new Vector3(x, 0, z), createPrefabCake.transform.rotation);
            createPrefabCake.name = "Cake";

            x = Random.Range(-30f, 30f);
            z = Random.Range(-18f, 18f);

            Instantiate(createPrefabDonuts, new Vector3(x, 0, z), createPrefabDonuts.transform.rotation);
            createPrefabDonuts.name = "Donuts";

            x = Random.Range(-30f, 30f);
            z = Random.Range(-18f, 18f);

            Instantiate(createPrefabHambuger, new Vector3(x, 0, z), createPrefabHambuger.transform.rotation);
            createPrefabHambuger.name = "Hambuger";

            x = Random.Range(-30f, 30f);
            z = Random.Range(-18f, 18f);

            Instantiate(createPrefabHamEgg, new Vector3(x, 0, z), createPrefabHamEgg.transform.rotation);
            createPrefabHamEgg.name = "HamEgg";

            x = Random.Range(-30f, 30f);
            z = Random.Range(-18f, 18f);

            Instantiate(createPrefabIceCream, new Vector3(x, 0, z), createPrefabIceCream.transform.rotation);
            createPrefabIceCream.name = "IceCream";

            x = Random.Range(-30f, 30f);
            z = Random.Range(-18f, 18f);

            Instantiate(createPrefabCMilk, new Vector3(x, 0, z), createPrefabCMilk.transform.rotation);
            createPrefabCMilk.name = "Milk";

            x = Random.Range(-30f, 30f);
            z = Random.Range(-18f, 18f);

            Instantiate(createPrefabWaffle, new Vector3(x, 0, z), createPrefabWaffle.transform.rotation);
            createPrefabWaffle.name = "Waffle";

            // 経過時間リセット
            //time = 0f;
            // 人数カウントを増やす
            number2++;
        }
    }
}
