#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);

    double U = 14, R = 7, P;
    __asm {
        fld R
        fld U
        fmul st(0), st(0)
        fdiv st(0), st(1)
        fstp P
    }

    printf("\n\t P = %g Вт", P);
    printf("\n\t Нажмите любую кнопку...");
    _getch();
    return 0;
}