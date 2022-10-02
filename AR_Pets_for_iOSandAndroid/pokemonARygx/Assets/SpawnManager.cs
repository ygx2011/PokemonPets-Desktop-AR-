using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{

    public GameObject objectToSpawn;
    public PlacementManager placementManager;
    public GameObject placementQuad;

    public bool shouldSpawnOnce;
    private bool allowMultipleSpawn = true;

    //// Start is called before the first frame update
    //void Start()
    //{
        
    //}

    // Update is called once per frame
    void Update()
    {
        if (allowMultipleSpawn)
        {
            if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
            {
                GameObject arObj = Instantiate(objectToSpawn, placementQuad.transform.position, placementQuad.transform.rotation);

                if (shouldSpawnOnce == true)
                {
                    allowMultipleSpawn = false;

                    placementQuad.transform.GetChild(0).transform.GetComponent<Renderer>().enabled = false;
                }
            }
        }
    }
}
