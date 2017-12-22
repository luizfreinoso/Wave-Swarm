using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour {

	public Animator MeuAnimador;
	public float JumpForce = 3;
	bool canJump = true;
	public float JumpWait = 2;
	public float WalkSpeed = 2;
	Transform Fonte;
	Vector3 Direction;
	public GameObject isgrounded;
	public GameObject levelManager;
	public GameObject Particles;
	float distToGround;
	bool notjumping = true;
	bool gameisRunning = true;
	bool hasbeenhitten = false;
	public float particlecollisionforce;
	static public bool GameFinished = false;
	static bool hasended = false;
	Vector3 DirectionToFountain;
	public bool isPlayer = false;
	RaycastHit hit;
	AudioSource JumpSound;
	public static GameObject ImTheWinner;

	void Awake()
	{
		if (isPlayer == true)
		{
			FindObjectOfType<GameManager>().GetComponent<GameManager>().PlayerCamera = transform.GetComponentInChildren<Camera>();
			FindObjectOfType<HudController>().GetComponent<HudController>().Player = this.transform;
		}
	}

	void Start()
	{
		hasended = false;
		JumpSound = GetComponent<AudioSource>();
		Fonte = FindObjectOfType<WaveController>().transform;
		transform.LookAt(Fonte.transform.position);
		Direction = Vector3.forward;

		DirectionToFountain = new Vector3 (Fonte.transform.position.x- transform.position.x , 0, Fonte.transform.position.z - transform.position.z);
		DirectionToFountain.Normalize();
		Direction.Normalize();
		distToGround = GetComponent<Collider>().bounds.extents.y;
		gameisRunning = true;
		GameFinished = false;
	}

	void PlayerMoviment()
	{
		if (Input.GetKeyDown (KeyCode.Space) && isGrounded () == true && canJump == true && hasended == false) {
			notjumping = false;
			gameisRunning = false;
			MeuAnimador.SetTrigger ("Jump");
			canJump = false;
			StartCoroutine (JumpTimer ());
		}
	}

	void Update ()
	{

		if (gameisRunning && hasbeenhitten == false)
		{
			if (notjumping)
				{
				if (isGrounded() == true)
				{
					transform.Translate ((Direction*WalkSpeed)/40*Time.deltaTime);
				}
				else 
				{
					transform.Translate ((Direction*WalkSpeed)/25*Time.deltaTime);
				}
				if (isPlayer == true)
				{
					PlayerMoviment();
				}
				else
				{
					isGrounded();
				}
			}
		}
	}

	public void NPCMoviment()
	{
		if ((isGrounded() == true) && canJump == true && hasended == false)
		{
			notjumping = false;
			gameisRunning = false;
			MeuAnimador.SetTrigger ("Jump");
			canJump = false;
			StartCoroutine (JumpTimer ());
		}
	}

	IEnumerator JumpTimer()
	{
		MeuAnimador.SetBool("isGrounded",false);	
		yield return new WaitForSeconds (.8f);
		GetComponent<Rigidbody>().AddForce(new Vector3(0,JumpForce,0));
		JumpSound.Play();
		gameisRunning = true;
		yield return new WaitForSeconds (.3f);
		notjumping = true;
		yield return new WaitForSeconds (JumpWait-1.1f);
		notjumping = true;
		canJump = true;
	}

	bool isGrounded()
	{

		Ray myray = new Ray(transform.position, -Vector3.up);
		if (Physics.Raycast(myray,out hit, distToGround + 0.05f))
		{
			MeuAnimador.SetBool("isGrounded",true);

			if (hit.collider.gameObject.name != "Pilar"){Particles.SetActive(true);}

			return true;
		}
		else
		{
			Particles.SetActive(false);
			MeuAnimador.SetBool("isGrounded",false);
			return false;
		}
	}
	void OnTriggerEnter(Collider col)
	{
		if (col.gameObject.tag == "Fonte")
		{
			ImTheWinner = this.gameObject;
			Gamefinished(col.transform);
		}
	}

	void Gamefinished(Transform col)
	{
		gameisRunning = false;
		hasended = true;
		if (ImTheWinner==this.gameObject)
		{
			MeuAnimador.SetTrigger("HasWon");
		}
		else 
		{
			MeuAnimador.SetTrigger("HasLost");
		}
			GameFinished = true;
			GameManager.Endgame();
	}

	void OnParticleCollision (GameObject Other)
	{
		if (hasbeenhitten == false)
		{
			GetComponent<Rigidbody>().AddForce(-DirectionToFountain*particlecollisionforce);
			hasbeenhitten = true;
			StartCoroutine(cancollide());
		}
		
	}
	IEnumerator cancollide()
	{
		MeuAnimador.SetBool("Hit",true);
		yield return new WaitForSeconds(1);
		MeuAnimador.SetBool("Hit",false);
		hasbeenhitten = false;
	}
}
