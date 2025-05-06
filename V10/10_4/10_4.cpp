#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);

    int adultNumber = 2, 
        schoolchildNumber = 15;

    double priceForAdult = 720,
        priceForSchoolchildRatio = 0.5,
        totalPrice;
    
    __asm {
        fild adultNumber
        fld priceForAdult
        fmul st(1), st(0)
        fld priceForSchoolchildRatio
        fmul st(0), st(1)
        fild schoolchildNumber
        fmul st(0), st(1)
        fadd st(0), st(3)
        fstp totalPrice
    }

    printf("\n\t Общая стоимость = %g руб.", totalPrice);
    printf("\n\t Нажмите любую кнопку...");
    _getch();
    return 0;
}