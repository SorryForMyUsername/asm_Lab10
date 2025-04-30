#include <stdio.h>
#include <conio.h>

int main()
{
    double a = 1.1, b = 1.5, y = 0;
    __asm {
        fld a
        fld b
        fadd st(0), st(1)
        fstp y

    }
    printf("\n\t Otvet = %g\n", y);
    printf("\n\t Press key...");
    _getch();
    return 0;
}