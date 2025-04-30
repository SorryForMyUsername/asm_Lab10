#include <stdio.h>
#include <conio.h>

int main()
{
    double x = 1.1, y = 1.5, z = 0;
    __asm {
        fld x
        fld y
        fsub st(0), st(1)
        ffree st(1)
        fst st(1)
        fmul st(0), st(0)
        fst st(2)
        fmul st(0), st(1)
        fadd st(0), st(1)
        fadd st(0), st(2)
        fstp z
    }
    printf("\n\t Otvet = %g\n", z);
    printf("\n\t Press key...");
    _getch();
    return 0;
}