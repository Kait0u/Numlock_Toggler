#include <windows.h>

int main()
{
    auto state = GetKeyState(VK_NUMLOCK);
    if (!state)
    {
        keybd_event(VK_NUMLOCK, 0, KEYEVENTF_EXTENDEDKEY, 0);
        keybd_event(VK_NUMLOCK, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
    }
}