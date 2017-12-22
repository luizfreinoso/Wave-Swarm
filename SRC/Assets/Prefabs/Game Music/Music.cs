using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Music : MonoBehaviour {
	//static Music instance = null;
	public AudioClip[] LevelMusicChangeArray;
	AudioSource LevelMusic;
	/*void Awake()
	{
		if (instance != null)
		{
			Destroy (gameObject);
			print ("Duplicated music");
		}
		else
		{
			instance = this;
			GameObject.DontDestroyOnLoad(gameObject);
		}
	}
	*/
	void Start()
	{
		LevelMusic = GetComponent<AudioSource>();
		LevelMusic.clip = LevelIndexMusic();
		LevelMusic.Play();
		Persistent.VolumeChanged();
		//AudioSource.PlayClipAtPoint(LevelIndexMusic(),transform.position);
//		print (LevelIndexMusic().name);
	}
	public void ChangeMusic()
	{
		LevelMusic.clip = LevelMusicChangeArray[3];
		LevelMusic.Play();

	}
	AudioClip LevelIndexMusic()
	{
		switch(SceneManager.GetActiveScene().buildIndex)
		{

		case 0: return LevelMusicChangeArray[0];
		case 1: return LevelMusicChangeArray[1];
		case 2: return LevelMusicChangeArray[2];
		case 3: return LevelMusicChangeArray[3];
			
		}
		return null;

	}

}
