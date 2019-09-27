using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class ReadWritePosition : MonoBehaviour
{

    const string DLL_NAME = "POSITIONDLL";
    [DllImport(DLL_NAME)]
    private static extern System.IntPtr ReadPosition();
    [DllImport(DLL_NAME)]
    private static extern void WritePosition(float x, float y, 
        float z);

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log(5);
            float[] temp = { 0, 0, 0 };
            Marshal.Copy(ReadPosition(), temp, 0, 3);
            Debug.Log(temp[0]);
            Debug.Log(temp[1]);
            Debug.Log(temp[2]);
            transform.position = new Vector3(temp[0],temp[1], temp[2]);
        }
        if (Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log(10);
            float x, y, z;
            x = transform.position.x;
            y = transform.position.y;
            z = transform.position.z;
            WritePosition(x, y, z);
        }
    }
}
