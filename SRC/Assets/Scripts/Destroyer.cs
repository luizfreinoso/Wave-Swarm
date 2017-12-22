using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroyer : MonoBehaviour {
	void Start ()
	{
		StartCoroutine(MakeStatic());
		Destroy(GetComponent<Rigidbody>(),5);
		Destroy(GetComponent<BoxCollider>(),5);
		Destroy(this,6);
	}
	IEnumerator MakeStatic()
	{
		yield return new WaitForSeconds(5);
		gameObject.isStatic = true;
	}
}
