using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AI : MonoBehaviour 
{
	PlayerControl AIControl;
	float aleatorio;
	void Start()
	{
		AIControl = GetComponent<PlayerControl>();
		aleatorio = Random.Range(3,6);
		StartCoroutine(Jumping());
	}

	IEnumerator Jumping()
	{
		yield return new WaitForSeconds(aleatorio);
		aleatorio = Random.Range(3,6);
		StartCoroutine(Jumping());
		Jump();
	}

	void Jump()
	{
		AIControl.NPCMoviment();
	}



}
