#include <stdio.h>
#include <conio.h>

int main()
{
    double x = 2.0, y = 5.0, z = 0;
    __asm {
        fld x
        fld y
        fsub st(0), st(1)
        fabs
        ffree st(1)
        fst st(1)
        fmul st(0), st(0)
        fst st(2)
        fmul st(0), st(1)
        fld1
        fadd st(2), st(0)
        fadd st(0), st(0)
        fst st(4)
        fdivr st(0), st(3)
        fadd st(2), st(0)
        fxch st(4)
        fld1
        fadd st(0), st(1)
        fdivr st(0), st(2)
        fadd st(0), st(3)
        fstp z
    }
    printf("\n\t Otvet = %g\n", z);
    printf("\n\t Press key...");
    _getch();
    return 0;
}