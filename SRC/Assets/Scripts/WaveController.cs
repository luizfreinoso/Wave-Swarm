using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveController : MonoBehaviour {

	public GameObject[] ondaondaolhaaonda;
	float randomtimer = 3;
	public float minSpawn = 2;
	public float maxSpawn = 5;
	void Start () 
	{
		StartCoroutine(spawnondistico());
	}

	IEnumerator spawnondistico()
	{
		yield return new WaitForSeconds(randomtimer);
		if (PlayerControl.GameFinished == false)
		{
			instantiateobject();
			randomtimer = Random.Range(minSpawn,maxSpawn);	
			StartCoroutine(spawnondistico());
		}
	}

	void instantiateobject()
	{
		GameObject Onda = Instantiate(ondaondaolhaaonda[0],transform.position,Quaternion.identity) as GameObject;
		Onda.transform.eulerAngles = new Vector3(90,0,0);
		Destroy(Onda,Onda.GetComponent<ParticleSystem>().main.duration);
	}
}
