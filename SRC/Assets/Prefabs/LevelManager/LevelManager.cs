using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
void savelastlevel()
{
		FindObjectOfType<Persistent>().GetComponent<Persistent>().LastLevel = SceneManager.GetActiveScene().buildIndex;
}

	public void LoadLevel(string name)
	{
		savelastlevel();
		if (Time.timeScale != 1)
		{
			Time.timeScale = 1;
			Time.fixedDeltaTime = 0.02f;
		}
		SceneManager.LoadScene(name);
	}

	public void QuitRequest()
	{
		savelastlevel();
		Application.Quit();	
	}
	
	public void LoadLastLevel()
	{
		savelastlevel();
		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex-1);
	}
	
	public void StartAgain()
	{
		savelastlevel();
		SceneManager.LoadScene("Start");
	}
	public void ReloadLevel()
	{
		savelastlevel();
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}
	
	public void LoadNextLevel()
	{	
		savelastlevel();
		//SceneManager.LoadScene(Application.loadedLevel+1); (old)
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex+1);
	}
	public void LoadNextLevelin(float seconds)
	{	
		savelastlevel();
		StartCoroutine(loadin(seconds));
	}
	IEnumerator loadin(float seconds)
	{
		yield return new WaitForSeconds(seconds);
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex+1); 

	}
	public void LoadLevelin(float seconds, string name)
	{	
		StartCoroutine(loadlevelin(seconds,name));
	}
	IEnumerator loadlevelin(float seconds, string levelname)
	{
		yield return new WaitForSeconds(seconds);
		LoadLevel(levelname);
	}

}