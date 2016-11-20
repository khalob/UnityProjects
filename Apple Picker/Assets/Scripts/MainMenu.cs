﻿using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour {

	public void ExitGame(){
		Application.Quit ();
	}

	public void StartLevel(){
		SceneManager.LoadScene ("_Scene_0");
	}
}
