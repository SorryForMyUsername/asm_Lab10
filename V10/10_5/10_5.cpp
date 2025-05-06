#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);

    double x, y, m;
    printf("\n\t x: ");
    scanf_s("%lf", &x);

    __asm {
        fld1
        fld x
        fld st(0)

        fsub st(0), st(2)
        fabs

        fxch st(2)
        fadd st(0), st(0)
        fxch st(1)
        fmul st(0), st(0)
        fld st(0)
        fsub st(0), st(2)
        fabs
        fsqrt
        fmul st(0), st(3)

        fld1
        faddp st(3), st(0)
        fxch st(2)
        fsub st(1), st(0)
        fxch st(1)
        fabs
        fdiv st(0), st(1)
        fmul st(0), st(2)

        fst y

        //Вычисление m
        fabs
        fld x
        fabs
        fld st(0)
        fsub st(0), st(2)
        fld1
        fxch st(3)
        fmul st(0), st(2)
        fabs
        fadd st(0), st(3)
        fdivp st(1), st(0)

        fxch st(2)
        fadd st(0), st(0)
        fmul st(0), st(0)
        fld1
        faddp st(1), st(0)
        fxch st(1)
        fmul st(0), st(0)
        fadd st(0), st(1)
        fsqrt
        fadd st(0), st(2)
        
        fstp m
    }

    printf("\n\t y = %g", y);
    printf("\n\t m = %g", m);
    printf("\n\t Нажмите любую кнопку...");
    _getch();
    return 0;
}