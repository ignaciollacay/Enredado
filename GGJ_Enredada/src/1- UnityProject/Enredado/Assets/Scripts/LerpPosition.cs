using UnityEngine;
using UnityEngine.SceneManagement;
// TODO: Lerp Color from black to white according to camera y position.
// TODO: Lerp Camera Position from current position to start position OnPlayerDeath

// A longer example of Vector3.Lerp usage.
// Drop this script under an object in your scene, and specify 2 other objects in the "startMarker"/"endMarker" variables in the script inspector window.
// At play time, the script will move the object along a path between the position of those two markers.

public class LerpPosition : MonoBehaviour
{
    // Transforms to act as start and end markers for the journey.
    public Transform startMarker;
    public Transform endMarker;

    // Movement speed in units per second.
    public float forwardSpeed = 0.41F;
    public float reverseSpeed = 1.3F;
    private float speed;

    // Time when the movement started.
    private float startTime;

    // Total distance between the markers.
    private float journeyLength;

    private Camera cam;
    [SerializeField] Material dynamicColor;

    bool startLerp = false;
    bool reverseLerp = false;

    private void Awake()
    {
        cam = GetComponent<Camera>();
    }

    public void StartForwardLerp()
    {
        speed = forwardSpeed;
        reverseLerp = false;
        StartLerp();
    }

    public void StartReverseLerp()
    {
        startLerp = false;
        speed = reverseSpeed;
        reverseLerp = true;
        StartLerp();
    }

    private void StartLerp()
    {
        // Keep a note of the time the movement started.
        startTime = Time.time;

        // Calculate the journey length.
        journeyLength = startMarker.position.y - endMarker.position.y;

        startLerp = true;
    }

    // Move to the target end position.
    void Update()
    {
        if (startLerp && !reverseLerp)
        {
            UpdatePosition(startMarker.position.y, endMarker.position.y, Color.black, Color.white);
        }
        else if (startLerp && reverseLerp)
        {
            ReversePosition(transform.position.y, startMarker.position.y, cam.backgroundColor, Color.black);
        }
    }

    private void UpdatePosition(float startPos, float endPos, Color startCol, Color endCol)
    {
        // Distance moved equals elapsed time times speed..
        float distCovered = (Time.time - startTime) * speed;

        // Fraction of journey completed equals current distance divided by total distance.
        float fractionOfJourney = distCovered / journeyLength;

        // Set our position as a fraction of the distance between the markers.
        float yPos = Mathf.Lerp(startPos, endPos, fractionOfJourney);
        transform.position = new Vector3(0, yPos, transform.position.z);

        // Lerp camera color
        cam.backgroundColor = Color.Lerp(startCol, endCol, fractionOfJourney);

        // Lerp Player color
        dynamicColor.color = Color.Lerp(endCol, startCol, fractionOfJourney);
    }

    private void ReversePosition(float startPos, float endPos, Color startCol, Color endCol)
    {
        // Distance moved equals elapsed time times speed..
        float distCovered = (Time.time - startTime) * speed;

        // Fraction of journey completed equals current distance divided by total distance.
        float fractionOfJourney = distCovered / journeyLength;

        // Set our position as a fraction of the distance between the markers.
        float yPos = Mathf.Lerp(startPos, endPos, fractionOfJourney);
        transform.position = new Vector3(0, yPos, transform.position.z);

        // Lerp camera color
        cam.backgroundColor = Color.Lerp(cam.backgroundColor, endCol, fractionOfJourney);

        // Lerp Player color
        dynamicColor.color = Color.Lerp(dynamicColor.color, startCol, fractionOfJourney);

        if (transform.position.y >= -0.1f)
        {
            Debug.Log("Reverse ended.");
            SceneManager.LoadSceneAsync(0);
        }
    }
}

