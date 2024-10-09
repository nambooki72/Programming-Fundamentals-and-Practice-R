#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

    int age, time, fee;

    printf("현재 시간과 나이를 입력하시오: ");
    scanf("%d %d", &time, &age);


    if (time >= 17) {
        fee = 10000;
    }
    else {
        if (age <= 12 || age >= 65)
            fee = 25000;
        else
            fee = 34000;
    }

    printf("요금은 %d원입니다.\n", fee); //&fee가 문제엿구나
    return 0;
} //오류가 남