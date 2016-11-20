using UnityEngine;
using System.Collections;

public class Scorezone : MonoBehaviour
{
    static public bool scoreMet = false;
    // Use this for initialization
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Projectile")
        {
            Scorezone.scoreMet = true;
            Color c = GetComponent<Renderer>().material.color;
            c.a = 1;
            GetComponent<Renderer>().material.color = c;
        }
    }

}
