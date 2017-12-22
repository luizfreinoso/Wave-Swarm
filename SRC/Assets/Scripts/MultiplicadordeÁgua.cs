using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MultiplicadordeÁgua : MonoBehaviour {

	public GameObject waterprefab;
	float xOffset;
	float zOffset;
	void Start () 
	{
		for (int i = 0; i<=20;i++)
		{
			for (int n = 0; n<=20;n++)
			{
				Instantiate (waterprefab, (new Vector3(transform.position.x+xOffset,transform.position.z,transform.position.z +zOffset)), Quaternion.identity);
				xOffset += 50;
			}
			xOffset = 0;
			zOffset += 50;

		}



	}
}
