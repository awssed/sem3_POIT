#include <Windows.h>

int main()
{
    LPCSTR message = "��������� ������!\n";
    LPCSTR caption = "������";

    MessageBoxA(NULL, message, caption, MB_OK | MB_ICONERROR | MB_SETFOREGROUND);
    return 0;
}