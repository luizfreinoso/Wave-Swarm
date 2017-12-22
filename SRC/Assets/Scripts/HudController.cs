using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HudController : MonoBehaviour 
{
	public Text time;
	public Text position;
	public Text finalPosition;
	public Text finalTime;
	public Text Distance;
	float distance;
	public Transform Player;
	public Transform Fountain;
	SpawnController Spawner;
	float TimeWhenFinished;
	int colocacao;
	bool panelshowed = false;


	void Start () 
	{
		Spawner = FindObjectOfType<SpawnController>().GetComponent<SpawnController>();
		InvokeRepeating("CheckPosition",0,1f);
	}
	void CheckPosition()
	{
		colocacao = Spawner.CheckPosition();
		position.text = colocacao + "/8";
	}



	void Update()
	{
		if (PlayerControl.GameFinished == false)
		{
			time.text = Time.timeSinceLevelLoad.ToString("0.0s");
			TimeWhenFinished = Time.timeSinceLevelLoad;
		}
		else if (panelshowed == false && PlayerControl.GameFinished == true)
		{
			HasEnded();
			panelshowed = true;
		}
			
	
		distance = Vector3.Distance(new Vector3 (Player.position.x,0,Player.position.z),new Vector3(Fountain.position.x,0,Fountain.position.z)) - 6;
		Distance.text = distance.ToString("0.0m");
	}
	void HasEnded()
	{
		colocacao = Spawner.CheckPosition();
		finalPosition.text = colocacao + "/8";

		finalTime.text = TimeWhenFinished.ToString("0.0s");

	}
}

