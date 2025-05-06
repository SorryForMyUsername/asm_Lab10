#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);

    double y;
    __asm {
        fld1
        fld1
        fadd st(0), st(1)
        fmul st(0), st(0)
        fsubr st(1), st(0)
        fld st(0)
        fmul st(0), st(0)
        fmul st(0), st(2)   //st(0) = 48; st(1) = 4; st(2) = 3

        fsqrt
        fmul st(1), st(0)
        fxch st(2)
        fsqrt
        fdiv st(1), st(0)
        fld st(1)

        fstp y
    }
    
    printf("\n\t y = %g\n", y);
    printf("\n\t Нажмите любую кнопку...");
    _getch();
    return 0;
}
