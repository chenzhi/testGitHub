#include "main.h"

#include "AppDelegate.h"

int APIENTRY _tWinMain(HINSTANCE hInstance,
					   HINSTANCE hPrevInstance,
					   LPTSTR    lpCmdLine,
					   int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance

#ifdef WIN32
	WCHAR pBuffer[1024];
	ZeroMemory(pBuffer, 1024);
	::GetModuleFileName(NULL, pBuffer, 1024);
	::SetCurrentDirectory(pBuffer);

#endif


    AppDelegate app;

    return cocos2d::CCApplication::sharedApplication().run();
}
