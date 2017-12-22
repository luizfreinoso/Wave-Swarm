using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class AlphaChange : MonoBehaviour {
	Color PanelColor;
	void Start () 
	{
		GetComponent<Image>().CrossFadeAlpha(0,3,true);
	}

}
