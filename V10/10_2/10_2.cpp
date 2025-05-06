#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);

    double base1, base2, height, perimeter;
    printf("\n\t Верхнее основание: ");
    scanf_s("%lf", &base1);
    printf("\t Нижнее основание: ");
    scanf_s("%lf", &base2);
    printf("\t Высота: ");
    scanf_s("%lf", &height);

    __asm {
        fld base1
        fld base2
        fld st(0)
        fsub st(0), st(2)
        fabs
        fld1
        fadd st(0), st(0)
        fdivr st(0), st(1)
        fld height
        fmul st(0), st(0)
        fxch st(1)
        fmul st(0), st(0)
        fadd st(0), st(1)
        fsqrt
        fadd st(0), st(0)
        fadd st(0), st(3)
        fadd st(0), st(4)

        fstp perimeter
    }

    printf("\n\t Периметр = %g\n", perimeter);
    printf("\n\t Нажмите любую кнопку...");
    _getch();
    return 0;
}
