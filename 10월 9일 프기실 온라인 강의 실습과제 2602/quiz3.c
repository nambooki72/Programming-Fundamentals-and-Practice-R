#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

    int age, time, fee;

    printf("���� �ð��� ���̸� �Է��Ͻÿ�: ");
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

    printf("����� %d���Դϴ�.\n", fee); //&fee�� ����������
    return 0;
} //������ ��