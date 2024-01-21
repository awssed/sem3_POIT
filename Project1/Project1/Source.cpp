#include <Windows.h>

int main()
{
    LPCSTR message = "Произошла ошибка!\n";
    LPCSTR caption = "Ошибка";

    MessageBoxA(NULL, message, caption, MB_OK | MB_ICONERROR | MB_SETFOREGROUND);
    return 0;
}