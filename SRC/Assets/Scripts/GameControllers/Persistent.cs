using UnityEngine;
using System.Collections;

public class Persistent : MonoBehaviour {
	public int FinalScore;
	public bool HardMode;
	public bool EasyMode;
	public static float MusicVolume = 0.6f;
	public static float MasterVolume = 1f;
	static bool PersistentisON = false;
	public bool CanPause;
	public int LastLevel;


	void Awake()
	{
		if (PersistentisON == false)
		{
			PersistentisON = true;
		}
		else
		{
			Destroy(gameObject);
		}
		DontDestroyOnLoad(gameObject);
		CanPause = true;
		VolumeChanged();
	}
	static public void VolumeChanged()
	{
		AudioListener.volume = MasterVolume;
		if (FindObjectOfType<Music>() != null)
		{
			FindObjectOfType<Music>().GetComponent<AudioSource>().volume = MusicVolume;
		}
	}

	/*
	public void TurningButtonsInvisible(bool Toggle)
	{
		ButtonVisibilityController[] Buttons = FindObjectsOfType(typeof(ButtonVisibilityController)) as ButtonVisibilityController[];
		foreach (ButtonVisibilityController button in Buttons)
		{
			button.visibility(Toggle);
		}

	}
	*/
}

