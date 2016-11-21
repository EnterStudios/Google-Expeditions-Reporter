using UnityEngine;

public class FlashCamera : MonoBehaviour {
	public CanvasGroup flashCanvas;
	private bool flash = false;

	// Use this for initialization
	void Start () {
		
		//FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://project-4670239214073903129.firebaseio.com/");

	}
	
	// Update is called once per frame
	void Update () {
		//flashCanvas = GameObject.Find ("CameraFlash").GetComponent<CanvasGroup> ();
		if (flash)
		{
			flashCanvas.alpha = flashCanvas.alpha - Time.deltaTime;
			Debug.Log("Flash should happen with alpha " + flashCanvas.alpha);
			if (flashCanvas.alpha <= 0)
			{
				flashCanvas.alpha = 0;
				flash = false;
			}
		}

		//GazeInputModule gazeTest = GameObject.Find ("EventSystem").GetComponent<GazeInputModule> ();
	}

	public void TakePhoto() {
		Invoke ("DoIt", 1);
	}

	public void DoIt() {
		//flashCanvas = GameObject.Find ("CameraFlash").GetComponent<CanvasGroup> ();
		// should delay to allow student to move view
		Debug.Log ("Send to teacher pressed");
		//flash = true;
		//flashCanvas.alpha = 1;

		//User user = new User("Sam Assaf", "INCORRECT");
		//string json = JsonUtility.ToJson(user);


		//DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;
		//reference.Child("messages").Child("Sam").SetRawJsonValueAsync(json);

	}

    public class User
    {
        private string v1;
        private string v2;

        public User(string v1, string v2)
        {
            this.v1 = v1;
            this.v2 = v2;
        }
    }


}
