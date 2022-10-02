using UnityEngine;
using System;
// 为了使用属性：DllImport
using System.Runtime.InteropServices;

public class TablePetBackSampleygx : MonoBehaviour
{
    private int currentX;
    private int currentY;
    #region Win函数常量
    private struct MARGINS
    {
        public int cxLeftWidth;
        public int cxRightWidth;
        public int cyTopHeight;
        public int cyBottomHeight;
    }

    [DllImport("user32.dll")]
    static extern IntPtr FindWindow(string lpClassName, string lpWindowName);
    [DllImport("user32.dll")]
    static extern int SetWindowLong(IntPtr hWnd, int nIndex, int dwNewLong);

    [DllImport("user32.dll")]
    static extern int GetWindowLong(IntPtr hWnd, int nIndex);

    [DllImport("user32.dll")]
    static extern int SetWindowPos(IntPtr hWnd, int hWndInsertAfter, int X, int Y, int cx, int cy, int uFlags);

    [DllImport("Dwmapi.dll")]
    static extern uint DwmExtendFrameIntoClientArea(IntPtr hWnd, ref MARGINS margins);
    [DllImport("user32.dll")]
    private static extern int SetWindowLong(IntPtr hWnd, int nIndex, uint dwNewLong);

    [DllImport("user32.dll")]
    public static extern bool ReleaseCapture();
    [DllImport("user32.dll")]
    public static extern bool SendMessage(IntPtr hwnd, int wMsg, int wParam, int lParam);

    private const int GWL_EXSTYLE = -20;
    private const int GWL_STYLE = -16;
    private const int WS_EX_LAYERED = 0x00080000;
    private const int WS_BORDER = 0x00800000;
    private const int WS_CAPTION = 0x00C00000;
    private const int SWP_SHOWWINDOW = 0x0040;
    private const int LWA_COLORKEY = 0x00000001;
    private const int LWA_ALPHA = 0x00000002;
    private const int WS_EX_TRANSPARENT = 0x20;
    #endregion
    private IntPtr hwnd;

    float xx;
    bool bx;

    private float delaytime = 0.0f;
    public GameObject pet;
    private Animator anim;

    void Awake()
    {
        anim = pet.GetComponent<Animator>(); // 获取动画组件
        var productName = Application.productName;
#if UNITY_EDITOR
#else
        hwnd = FindWindow(null, productName);
        int intExTemp = GetWindowLong(hwnd, GWL_EXSTYLE);
        //SetWindowLong(hwnd, GWL_EXSTYLE, intExTemp | WS_EX_TRANSPARENT | WS_EX_LAYERED); //鼠标穿透
        SetWindowLong(hwnd, GWL_STYLE, GetWindowLong(hwnd, GWL_STYLE) & ~WS_BORDER & ~WS_CAPTION);
        currentX = 0;
        currentY = 0;
        SetWindowPos(hwnd, -1, currentX, currentY, Screen.currentResolution.width, Screen.currentResolution.height, SWP_SHOWWINDOW);
        var margins = new MARGINS() { cxLeftWidth = -1 };
        DwmExtendFrameIntoClientArea(hwnd, ref margins);     
#endif
    }

    void Update()
    {
#if UNITY_STANDALONE_WIN
        if (Input.GetMouseButtonDown(0))
        {

            xx = 0f;
            bx = true;
        }
        if (bx && xx >= 0.1f)
        { //这样做为了区分界面上面其它需要滑动的操作
            ReleaseCapture();
            SendMessage(hwnd, 0xA1, 0x02, 0);
            SendMessage(hwnd, 0x0202, 0, 0);


        }
        if (bx)
            xx += Time.deltaTime;
        if (Input.GetMouseButtonUp(0))
        {

            xx = 0f;
            bx = false;

        }

        // 鼠标右键交互
        if (Input.GetMouseButtonDown(1))
        {
            anim.SetBool("play", true);
            delaytime = Time.time;
        }
        if (Time.time - delaytime > 1.0f)
        {
            anim.SetBool("play", false);
        }
        if (Time.time - delaytime > 9.0f)
        {
            anim.SetBool("play", true);
            delaytime = Time.time;
        }

#endif
    }

}