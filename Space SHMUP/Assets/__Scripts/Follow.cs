using UnityEngine;
using System.Collections;

public class Follow : MonoBehaviour {

	public GameObject whatToFollow;
	public float Xoffset = 10f;
	public float Yoffset = 10f;
	// Update is called once per frame
	void Update () {
		if (whatToFollow != null) {
			transform.position = whatToFollow.transform.position + new Vector3 (Xoffset, Yoffset, 0.0f);
		} else {
			Destroy (gameObject);
		}
	}
}
