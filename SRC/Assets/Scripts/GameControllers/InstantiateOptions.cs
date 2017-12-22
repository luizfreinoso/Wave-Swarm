using UnityEngine;
using System.Collections;

public class InstantiateOptions : MonoBehaviour {
	public GameObject OptionsPanel;
	public void InstantiateOptAsChild()
	{
		GameObject Panel = Instantiate(OptionsPanel,Vector3.zero,Quaternion.identity) as GameObject;
		Panel.transform.SetParent(gameObject.transform);
		Panel.transform.position = transform.position;
		Panel.GetComponent<SoundController>().optionsinstance = this;
	}
	public void PauseTimeScale(bool switcher)
	{
		if (switcher == false)
		{
			Time.timeScale =1;
		}
		else
		{
			Time.timeScale =0;
		}

	}
}
