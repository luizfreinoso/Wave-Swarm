using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateCamera : MonoBehaviour {

	void Update () 
	{
		transform.localEulerAngles += new Vector3(0,0,0.3f);
	}
}
