#ifndef GUIMANAGER
#define GUIMANAGER

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#include <tchar.h>


class GUIManager {
public:
	static int HandleMessage(UINT msg, WPARAM wParam, LPARAM lParam, UINT* g_ResizeWidth, UINT* g_ResizeHeight);
	static void ShowDemo(ImGuiIO* io);
	
};

#endif