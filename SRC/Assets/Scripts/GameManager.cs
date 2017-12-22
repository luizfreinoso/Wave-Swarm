using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour 
{
	static GameManager SUP;
	public Camera PlayerCamera;
	public GameObject EndWorldCamera;
	public GameObject EndGamePanel;
	HudController Hud;
	public GameObject LevelManager;
	public GameObject persistente;
	public GameObject MainCanvas;
	SpawnController Spawner;
	Music musicPlayer;

	void Start()
	{
		musicPlayer = FindObjectOfType<Music>().GetComponent<Music>();
		Spawner = FindObjectOfType<SpawnController>().GetComponent<SpawnController>();
		if (FindObjectOfType<LevelManager>() == null)
		{
			Instantiate(LevelManager);
		}

		if (FindObjectOfType<Persistent>() == null)
		{
			Instantiate(persistente);
		}

		SUP = this;

		SUP.TimeManager(false);
		Hud = FindObjectOfType<HudController>().GetComponent<HudController>();
	}


	public static void Endgame()
	{
		SUP.TimeManager(true);
		SUP.SwapCamera();
		SUP.EndGamePanel.SetActive(true);
		SUP.MainCanvas.SetActive(false);
		SUP.musicPlayer.ChangeMusic();
	}
	void TimeManager(bool switcher)
	{

		if (Time.timeScale == 1 && switcher == true)
		{
			Time.timeScale *= 0.5f;
			Time.fixedDeltaTime *= 0.5f;
		}
		else
		{
			Time.timeScale = 1;
			Time.fixedDeltaTime = 0.02f;
		}

	}
	void SwapCamera()
	{
		PlayerCamera.gameObject.SetActive(false);
		EndWorldCamera.gameObject.SetActive(true);
	}
}