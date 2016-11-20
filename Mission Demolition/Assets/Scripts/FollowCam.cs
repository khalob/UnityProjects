using UnityEngine;
using System.Collections;

public class FollowCam : MonoBehaviour {

    static public FollowCam S;

    //fields set in the Unity Inspector pane
    public float easing = 0.05f;
    public Vector2 minXY;
    public bool _________;
    //fields set dynamically
    public GameObject poi;
    public float camZ;


	// Use this for initialization
	void Awake () {
        S = this;
        camZ = this.transform.position.z;
	
	}
	
	// Update is called once per frame
	void FixedUpdate () {
        Vector3 destination;
        if (poi == null)
        {
            destination = Vector3.zero;
        }
        else
        {
            destination = poi.transform.position;
            if(poi.tag == "Projectile")
            {
                if(poi.GetComponent<Rigidbody>().IsSleeping())
                {
                    poi = null;
                    //MissionDemolition.SwitchView("Both");
                    return;
                }
            }
        }

        destination.x = Mathf.Max(minXY.x, destination.x);
        destination.y = Mathf.Max(minXY.y, destination.y);
        //Interpolate from the current Camera position toward destination
        destination = Vector3.Lerp(transform.position, destination, easing);
        //Retain a destination.z of camZ
        destination.z = camZ;
        //Set the camera to the destination
        transform.position = destination;
        //Set the orthographicSize of the Camera to keep Ground in view
        this.GetComponent<Camera>().orthographicSize = destination.y + 10;
	}
}
