using UnityEngine;
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
    public float speed = 1.0F;

    // Time when the movement started.
    private float startTime;

    // Total distance between the markers.
    private float journeyLength;

    private Camera cam;

    bool startLerp;
    private void Awake()
    {
        cam = GetComponent<Camera>();
    }
    public void StartLerp()
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
        if (startLerp)
        {
            UpdatePosition();
        }
    }
    [SerializeField] Material dynamicColor;

    private void UpdatePosition()
    {
        // Distance moved equals elapsed time times speed..
        float distCovered = (Time.time - startTime) * speed;

        // Fraction of journey completed equals current distance divided by total distance.
        float fractionOfJourney = distCovered / journeyLength;

        // Set our position as a fraction of the distance between the markers.
        float yPos = Mathf.Lerp(startMarker.position.y, endMarker.position.y, fractionOfJourney);
        transform.position = new Vector3(0, yPos, transform.position.z);

        // Lerp camera color
        cam.backgroundColor = Color.Lerp(Color.black, Color.white, fractionOfJourney);

        // Lerp Player color
        dynamicColor.color = Color.Lerp(Color.white, Color.black, fractionOfJourney);
    }
}

