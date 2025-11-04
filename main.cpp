#include <windows.h>
#include <thread>

HHOOK hHook;

void EmulateAltShift() {
    keybd_event(VK_MENU, 0, 0, 0);               // Alt down
    keybd_event(VK_SHIFT, 0, 0, 0);              // Shift down
    keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0); // Shift up
    keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);  // Alt up
}

LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION) {
        KBDLLHOOKSTRUCT* p = (KBDLLHOOKSTRUCT*)lParam;

        if (wParam == WM_KEYDOWN && p->vkCode == VK_CAPITAL) {
            bool shiftDown = (GetAsyncKeyState(VK_SHIFT) & 0x8000);

            if (!shiftDown) {
                EmulateAltShift();
                return 1; // suppress CapsLock
            }
        }
    }
    return CallNextHookEx(hHook, nCode, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    hHook = SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, NULL, 0);
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    UnhookWindowsHookEx(hHook);
    return 0;
}
