using UnityEngine;
using System.Collections;

public class AppleTree : MonoBehaviour {

	public GameObject applePrefab;
	public GameObject orangePrefab;
	public float speed = 1f;
	public float leftAndRightEdge = 10f;
	public float changeToChangeDirections = 0.1f;
	public float secondsBetweenAppleDrops = 1f;
	 
	
	void DropApple(){
		if(Random.Range(0.0f, 2.0f) < 1.0f){
			GameObject apple = Instantiate (applePrefab) as GameObject;
			apple.transform.position = transform.position;
		}else{
			GameObject orange = Instantiate (orangePrefab) as GameObject;
			orange.transform.position = transform.position;
		}
	}

	// Update is called once per frame
	void Start () {
		InvokeRepeating ("DropApple", 2f, secondsBetweenAppleDrops);
	}

	// Update is called once per frame
	void Update () {
		Vector3 pos = transform.position;
		pos.x += speed * Time.deltaTime;
		transform.position = pos;
		if (pos.x < -leftAndRightEdge) {
			speed = Mathf.Abs (speed);
		} else if (pos.x > leftAndRightEdge) {
			speed = -Mathf.Abs (speed);
		}
	}

	void FixedUpdate(){
		if (Random.value < changeToChangeDirections) {
			speed *= -1;
		}
	}
}
