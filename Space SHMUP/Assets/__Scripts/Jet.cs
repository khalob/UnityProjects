using UnityEngine;
using System.Collections;

public class Jet : MonoBehaviour {
	public float maxFuel = 100;
	public float fuelUsedPerTick = 1;
	public float regenDelay = 1;
	public float fuelGainedPerTick = 5;
	public float regenSpeed = 10;
	public float maxSpeed = 80;
	public GameObject fireObject;

	//private bool hasFuel = true;
	private float curFuel;
	private float lastTick; //Time last tick of fuel was used
	private float curRegenDelayCounter = 0;
	private float defaultSpeed;

	private SpriteRenderer fuelBar;
	private Vector3 fuelScale;

	void Start () {
		curFuel = maxFuel;
		fuelBar = GameObject.Find("FuelContainer").GetComponent<SpriteRenderer> ();
		fuelScale = fuelBar.transform.localScale;
		defaultSpeed = gameObject.GetComponent<Hero> ().speed;
		fireObject.SetActive (false);
	}

	// Update is called once per frame
	void Update () {
		if (Input.GetAxis ("Fire3") == 1 && curFuel > 0) {
			UseFuel ();
		} else {
			//Revert changes
			fireObject.SetActive (false);
			gameObject.GetComponent<Hero>().speed = defaultSpeed;
		}
		curRegenDelayCounter = curRegenDelayCounter + regenSpeed;

		if (curRegenDelayCounter >= 60) {
			regenFuel ();
			curRegenDelayCounter = 0;
		}

		fuelBarUpdate ();
	}

	public void UseFuel(){
		curFuel = curFuel - fuelUsedPerTick;

		//Change speed
		gameObject.GetComponent<Hero>().speed = maxSpeed;

		//Set fire to visible
		fireObject.SetActive (true);

		lastTick = Time.time;
	}

	public void regenFuel(){
		if(Time.time - lastTick < regenDelay){
			return;
		}
		if(curFuel < maxFuel){
			curFuel = curFuel + fuelGainedPerTick;
		}
			
	}
		
	public void fuelBarUpdate(){
		fuelBar.transform.localScale = new Vector3 (fuelScale.x * curFuel * 0.01f, 1, 1);
	}
}
