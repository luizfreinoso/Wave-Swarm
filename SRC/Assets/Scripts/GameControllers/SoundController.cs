using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SoundController : MonoBehaviour {
	public Slider MusicSlider;
	public Slider MasterSoundSlider;
	Persistent Persistente;
	public InstantiateOptions optionsinstance;
	void Start () 
	{
		Persistente = FindObjectOfType<Persistent>().GetComponent<Persistent>();
		Persistente.CanPause = false;
		MusicSlider.value = Persistent.MusicVolume;
		MasterSoundSlider.value = Persistent.MasterVolume;
	}
	
	void Update () 
	{
		Persistent.MusicVolume = MusicSlider.value;
		Persistent.MasterVolume = MasterSoundSlider.value;
		Persistent.VolumeChanged();
	}
	public void Destroying()
	{
		Persistente.CanPause = true;
		Destroy(gameObject);
	}
	public void Despause()
	{
		optionsinstance.GetComponent<InstantiateOptions>().PauseTimeScale(false);

	}
	/*
	public void Visibility()
	{
		Persistente.TurningButtonsInvisible(false);
	}
	*/
}
