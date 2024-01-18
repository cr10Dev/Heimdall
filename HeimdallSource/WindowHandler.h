#ifndef WINDOW_HANDLER
#define WINDOW_HANDLER

#include <d3d11.h>
#include <tchar.h>

static ID3D11Device* g_pd3dDevice = nullptr;
static ID3D11DeviceContext* g_pd3dDeviceContext;
static UINT g_ResizeWidth = 0, gResizeHeight = 0;
static ID3D11RenderTargetView* g_mainRenderTargetView = nullptr;

bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

class WindowHandler {
public:
	int Display();
};

#endif