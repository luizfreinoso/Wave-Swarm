using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnController : MonoBehaviour {

	Transform PlayerTransform;
	Transform[] Positions;
	Transform[] NPCSTransform;
	public GameObject PlayerObject;
	public GameObject NPCs;
	public Material[] skin;
	Transform Fonte;
	float PlayerDist;
	float[] NPCDist;
	int RandomPosition;
	void Awake () 
	{
		NPCSTransform = new Transform[7];
		Fonte = FindObjectOfType<WaveController>().transform;
		Positions = new Transform[8];
		int itinerator =0;
		for (int i = 0 ; i<=7; i++)
		{
			Positions[i] = transform.GetChild(i).transform.GetChild(0);
		}
		RandomPosition = Random.Range(0,8);
		PlayerTransform = Positions[RandomPosition];
		for (int i = 0 ; i<=7; i++)
		{
			if (i == RandomPosition)
			{
				GameObject Jogador = Instantiate(PlayerObject,PlayerTransform.position,Quaternion.identity) as GameObject;
				Jogador.transform.SetParent(Positions[i]);
			}

			else
			{
				GameObject NPC = Instantiate(NPCs,Positions[i].transform.position,Quaternion.identity) as GameObject;
				NPC.transform.SetParent(Positions[i]);
				NPC.transform.GetChild(1).GetChild(1).GetComponent<SkinnedMeshRenderer>().material = skin[i];
				NPCSTransform[itinerator] = NPC.transform;
				itinerator++;
			}
			NPCDist = new float[7];
		}
	}

	void Update () 
	{
		
	}
	public int CheckPosition()
	{
		int playerpos = 0;
		int itinerator = 0;
		for (int i = 0 ; i<=7; i++)
		{
			if (i != RandomPosition)
			{
				NPCDist[itinerator] = Vector3.Distance(new Vector3(Fonte.position.x,0,Fonte.position.z), new Vector3(NPCSTransform[itinerator].position.x,0,NPCSTransform[itinerator].position.z));
				itinerator++;
			}
			else
			{
				PlayerDist = Vector3.Distance(new Vector3(Fonte.position.x,0,Fonte.position.z),new Vector3 (PlayerTransform.GetChild(1).position.x , 0 , PlayerTransform.GetChild(1).position.z));
			}

		}

		for(int i = 0 ; i<=6; i++)
		{
			if (NPCDist[i] >= PlayerDist)
			{
				playerpos++;
			}
		}
		return (8-playerpos);
	}
}
