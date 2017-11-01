/*This code creates a .exe application consiting of LEDs flickering at different frequencies of 5Hz, 7Hz, 9Hz, 11Hz, 13Hz, 23Hz, which will create Electroencephalography signal of similar frequency in the brain*/
//
//Ananya Dutta

#include <windows.h>
#include <iostream>
#include <conio.h>
#include <objidl.h>
#include <gdiplus.h>
using namespace Gdiplus;
#include <algorithm>
#pragma comment (lib,"Gdiplus.lib")
VOID OnPaint(HDC hdc)
{ 
Graphics graphics(hdc);
   //Print text
   FontFamily  fontFamily(L"Times New Roman");
Font        font(&fontFamily, 24, FontStyleRegular, UnitPixel);
PointF      pointF1(75.0f, 100.0f);
SolidBrush  solidBrush01(Color(255, 255, 255, 255));
graphics.DrawString(L"5Hz", -1, &font, pointF1, &solidBrush01);
PointF      pointF2(225.0f, 100.0f);
graphics.DrawString(L"7Hz", -1, &font, pointF2, &solidBrush01);
PointF      pointF3(375.0f, 100.0f);
graphics.DrawString(L"9Hz", -1, &font, pointF3, &solidBrush01);
PointF      pointF4(75.0f, 300.0f);
graphics.DrawString(L"11Hz", -1, &font, pointF4, &solidBrush01);
PointF      pointF5(225.0f, 300.0f);
graphics.DrawString(L"13Hz", -1, &font, pointF5, &solidBrush01);
PointF      pointF6(375.0f, 300.0f);
graphics.DrawString(L"23Hz", -1, &font, pointF6, &solidBrush01);
Sleep(10000);/*creating a delay of 10 seconds*/
   // Draw the square1.
    for (std::size_t i = 0; i < 200; ++i)/* repeating LED blinking 200 times*/
	{
		{
SolidBrush solidBrush17(Color(255, 255, 255, 255));/* color white of LED*/
	graphics.FillEllipse(&solidBrush17, 30, 30, 30, 30);/* creating small LEDs in the LED grid at different locations*/
SolidBrush solidBrush18(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush18, 60, 30, 30, 30);
SolidBrush solidBrush19(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush19, 90, 30, 30, 30);
SolidBrush solidBrush112(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush112, 30,60, 30, 30);
SolidBrush solidBrush113(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush113, 60, 60, 30, 30);
SolidBrush solidBrush114(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush114, 90, 60, 30, 30);
SolidBrush solidBrush117(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush117, 30, 90, 30, 30);
SolidBrush solidBrush118(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush118, 60, 90, 30, 30);
SolidBrush solidBrush119(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush119, 90, 90, 30, 30);
}
Sleep(100);/* making LED blink at required frequency 
//Part 1 done 
{
SolidBrush solidBrush17(Color(255, 0, 0, 0));/*color black of LED grid*/
	graphics.FillEllipse(&solidBrush17, 30, 30, 30, 30);
SolidBrush solidBrush18(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush18, 60, 30, 30, 30);
SolidBrush solidBrush19(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush19, 90, 30, 30, 30);
SolidBrush solidBrush112(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush112, 30,60, 30, 30);
SolidBrush solidBrush113(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush113, 60, 60, 30, 30);
SolidBrush solidBrush114(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush114, 90, 60, 30, 30);
SolidBrush solidBrush117(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush117, 30, 90, 30, 30);
SolidBrush solidBrush118(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush118, 60, 90, 30, 30);	
SolidBrush solidBrush119(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush119, 90, 90, 30, 30);	
}
Sleep(100);/*5Hz frequency delay time*/

//Part 2 done 
}
   // Draw the square2.
    for (std::size_t i = 0; i < 200; ++i)/*making LED grid of 7Hz frequency*/
	{
		{
SolidBrush solidBrush17(Color(255, 255, 255, 255));/* color white of LED*/
	graphics.FillEllipse(&solidBrush17, 180, 30, 30, 30);
SolidBrush solidBrush18(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush18, 210, 30, 30, 30);
SolidBrush solidBrush19(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush19, 240, 30, 30, 30);
SolidBrush solidBrush112(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush112, 180,60, 30, 30);
SolidBrush solidBrush113(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush113, 210, 60, 30, 30);
SolidBrush solidBrush114(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush114, 240, 60, 30, 30);
SolidBrush solidBrush117(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush117, 180, 90, 30, 30);
SolidBrush solidBrush118(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush118, 210, 90, 30, 30);
SolidBrush solidBrush119(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush119, 240, 90, 30, 30);
}
Sleep(71);
//Part 1 done 
{	
SolidBrush solidBrush17(Color(255, 0, 0, 0));/* color black of LED*/
	graphics.FillEllipse(&solidBrush17, 180, 30, 30, 30);
SolidBrush solidBrush18(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush18, 210, 30, 30, 30);
SolidBrush solidBrush19(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush19, 240, 30, 30, 30);
SolidBrush solidBrush112(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush112, 180,60, 30, 30);
SolidBrush solidBrush113(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush113, 210, 60, 30, 30);
SolidBrush solidBrush114(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush114, 240, 60, 30, 30);
SolidBrush solidBrush117(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush117, 180, 90, 30, 30);
SolidBrush solidBrush118(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush118, 210, 90, 30, 30);
SolidBrush solidBrush119(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush119, 240, 90, 30, 30);
}
Sleep(71);/*7Hz frequency delay time*/

//Part 2 done 
}
   // Draw the square3.
    for (std::size_t i = 0; i < 200; ++i)/*making LED grid of 9Hz frequency*/
	{
		{		
SolidBrush solidBrush17(Color(255, 255, 255, 255));/* color white of LED*/
	graphics.FillEllipse(&solidBrush17, 330, 30, 30, 30);
SolidBrush solidBrush18(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush18, 360, 30, 30, 30);
SolidBrush solidBrush19(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush19, 390, 30, 30, 30);
SolidBrush solidBrush112(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush112, 330,60, 30, 30);
SolidBrush solidBrush113(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush113, 360, 60, 30, 30);
SolidBrush solidBrush114(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush114, 390, 60, 30, 30);
SolidBrush solidBrush117(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush117, 330, 90, 30, 30);
SolidBrush solidBrush118(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush118, 360, 90, 30, 30);
SolidBrush solidBrush119(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush119, 390, 90, 30, 30);	
}
Sleep(55);/*9Hz frequency delay time*/
//Part 1 done 
{
SolidBrush solidBrush17(Color(255, 0, 0, 0));/* color black of LED*/
	graphics.FillEllipse(&solidBrush17, 330, 30, 30, 30);
SolidBrush solidBrush18(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush18, 360, 30, 30, 30);
SolidBrush solidBrush19(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush19, 390, 30, 30, 30);
SolidBrush solidBrush112(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush112, 330,60, 30, 30);
SolidBrush solidBrush113(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush113, 360, 60, 30, 30);
SolidBrush solidBrush114(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush114, 390, 60, 30, 30);
SolidBrush solidBrush117(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush117, 330, 90, 30, 30);
SolidBrush solidBrush118(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush118, 360, 90, 30, 30);
SolidBrush solidBrush119(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush119, 390, 90, 30, 30);
}
Sleep(55);

//Part 2 done
}
   // Draw the square4.
    for (std::size_t i = 0; i < 200; ++i)/*making LED grid of 11 Hz frequency*/
	{
		{
SolidBrush solidBrush17(Color(255, 255, 255, 255));/* color white of LED*/
	graphics.FillEllipse(&solidBrush17, 30, 230, 30, 30);
SolidBrush solidBrush18(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush18, 60, 230, 30, 30);
SolidBrush solidBrush19(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush19, 90, 230, 30, 30);
SolidBrush solidBrush112(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush112, 30,260, 30, 30);
SolidBrush solidBrush113(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush113, 60, 260, 30, 30);
SolidBrush solidBrush114(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush114, 90, 260, 30, 30);
SolidBrush solidBrush117(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush117, 30, 290, 30, 30);
SolidBrush solidBrush118(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush118, 60, 290, 30, 30);
SolidBrush solidBrush119(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush119, 90, 290, 30, 30);
}
Sleep(45);/*11Hz frequency delay time*/

//Part 1 done 
{
SolidBrush solidBrush17(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush17, 30, 230, 30, 30);
SolidBrush solidBrush18(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush18, 60, 230, 30, 30);
SolidBrush solidBrush19(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush19, 90, 230, 30, 30);
SolidBrush solidBrush112(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush112, 30,260, 30, 30);
SolidBrush solidBrush113(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush113, 60, 260, 30, 30);
SolidBrush solidBrush114(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush114, 90, 260, 30, 30);
SolidBrush solidBrush117(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush117, 30, 290, 30, 30);
SolidBrush solidBrush118(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush118, 60, 290, 30, 30);
SolidBrush solidBrush119(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush119, 90, 290, 30, 30);
}
Sleep(45);
//Part 2 done 
}
   // Draw the square5.
    for (std::size_t i = 0; i < 200; ++i)/*making LED grid of 13Hz frequency*/
	{
		{
SolidBrush solidBrush17(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush17, 180, 230, 30, 30);
SolidBrush solidBrush18(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush18, 210, 230, 30, 30);
SolidBrush solidBrush19(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush19, 240, 230, 30, 30);
SolidBrush solidBrush112(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush112, 180,260, 30, 30);
SolidBrush solidBrush113(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush113, 210, 260, 30, 30);
SolidBrush solidBrush114(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush114, 240, 260, 30, 30);
SolidBrush solidBrush117(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush117, 180, 290, 30, 30);
SolidBrush solidBrush118(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush118, 210, 290, 30, 30);
SolidBrush solidBrush119(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush119, 240, 290, 30, 30);
}
Sleep(38);/*13Hz frequency delay time*/

//Part 1 done 
{
SolidBrush solidBrush17(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush17, 180, 230, 30, 30);
SolidBrush solidBrush18(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush18, 210, 230, 30, 30);
SolidBrush solidBrush19(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush19, 240, 230, 30, 30);
SolidBrush solidBrush112(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush112, 180,260, 30, 30);
SolidBrush solidBrush113(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush113, 210, 260, 30, 30);
SolidBrush solidBrush114(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush114, 240, 260, 30, 30);
SolidBrush solidBrush117(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush117, 180, 290, 30, 30);
SolidBrush solidBrush118(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush118, 210, 290, 30, 30);
SolidBrush solidBrush119(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush119, 240, 290, 30, 30);	
}
Sleep(38);
//Part 2 done 
}
   // Draw the square6.
    for (std::size_t i = 0; i < 200; ++i)/*making LED grid of 23Hz frequency*/
	{
		{
SolidBrush solidBrush17(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush17, 330, 230, 30, 30);
SolidBrush solidBrush18(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush18, 360, 230, 30, 30);
SolidBrush solidBrush19(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush19, 390, 230, 30, 30);
SolidBrush solidBrush112(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush112, 330,260, 30, 30);
SolidBrush solidBrush113(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush113, 360, 260, 30, 30);
SolidBrush solidBrush114(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush114, 390, 260, 30, 30);
SolidBrush solidBrush117(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush117, 330, 290, 30, 30);
SolidBrush solidBrush118(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush118, 360, 290, 30, 30);
SolidBrush solidBrush119(Color(255, 255, 255, 255));
	graphics.FillEllipse(&solidBrush119, 390, 290, 30, 30);
}
Sleep(21);/*23Hz frequency delay time*/

//Part 1 done 
{
SolidBrush solidBrush17(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush17, 330, 230, 30, 30);
SolidBrush solidBrush18(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush18, 360, 230, 30, 30);
SolidBrush solidBrush19(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush19, 390, 230, 30, 30);
SolidBrush solidBrush112(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush112, 330,260, 30, 30);
SolidBrush solidBrush113(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush113, 360, 260, 30, 30);
SolidBrush solidBrush114(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush114, 390, 260, 30, 30);
SolidBrush solidBrush117(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush117, 330, 290, 30, 30);
SolidBrush solidBrush118(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush118, 360, 290, 30, 30);
SolidBrush solidBrush119(Color(255, 0, 0, 0));
	graphics.FillEllipse(&solidBrush119, 390, 290, 30, 30);
}
Sleep(21);
//Part 2 done 
}	
PointF      pointF7(200.0f, 100.0f);
graphics.DrawString(L"Thank You!!", -1, &font, pointF1, &solidBrush01);
}
/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
static int size = 400;
static int top = 80;
static int left = 100;
static int right = 700;
static int bottom = 480;
HDC hdc;
PAINTSTRUCT ps;
//HRGN hrgn;
RECT rc1, rc2;
static bool flag = false;
/*  Make the class name into a global variable  */
char szClassName[ ] = "WindowsApp";
int WINAPI WinMain (HINSTANCE hThisInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR lpszArgument,
                    int nFunsterStil)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */
	GdiplusStartupInput gdiplusStartupInput;
   ULONG_PTR           gdiplusToken;
   // Initialize GDI+.
   GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = TEXT("Hello");
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_BYTEALIGNWINDOW;           
    wincl.cbSize = sizeof (WNDCLASSEX);
    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use black as the background of the window */
    wincl.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;
    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           TEXT("Hello"),         /* Classname */
           TEXT("Windows App"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           0,       /* Windows decides the position */
           0,       /* where the window ends up on the screen */
           500,                 /* The programs width */
           400,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );
	/* Make the window visible on the screen */
    ShowWindow (hwnd, nFunsterStil);
    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
	{
        /* Translate virtual-key messages into character messages */
       TranslateMessage(&messages);
        /* Send message to WindowProcedure */
		DispatchMessage(&messages);	
	}
	GdiplusShutdown(gdiplusToken);
    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}
/*  This function is called by the Windows function DispatchMessage()  */
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)                  /* handle the messages */
    {
        case WM_CREATE:
            hdc = GetDC(hwnd);
       //     xPixel = GetDeviceCaps(hdc,ASPECTX);
        //    yPixel = GetDeviceCaps(hdc,ASPECTY);
            ReleaseDC(hwnd,hdc);
        case WM_PAINT:
            hdc = BeginPaint(hwnd, &ps);
             OnPaint(hdc);
      EndPaint(hwnd, &ps);
      return 0;			
        case WM_KEYDOWN:
             switch(wParam)
             {
                 case VK_ADD:
                    //  size += 50;
                      top -=15;
                      bottom += 15;
                      break;
                 case VK_SUBTRACT:
                   //   size -= 50;
                      top += 15;
                      bottom -= 15;
                      break;
             }
             InvalidateRect(hwnd, &rc2, FALSE);
             flag = true;
        //     SendMessage(hwnd, WM_PAINT, 0, 0);
             return 0;
        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }
}
