#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    char X;

    printf("���ڸ� �Է��Ͻÿ�");
    scanf(" %c", &X);

    if (X == 'a' || X == 'e' || X == 'i' || X == 'o' || X == 'u') //���������, %c ���� ������ �Է� ó���� �� ���������� ������ִ� ���� �����Դϴ�. Ư�� �ٸ� �Է� �۾��� �Բ� ���� �� �����մϴ�.
        printf("�����Դϴ� \n");
    else
        printf("�����Դϴ� \n");



    return 0;
} 

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char X;
    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf(" %c", &X);

    switch(X)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("�����Դϴ�\n");
            break;
        default:
            printf("�����Դϴ�\n");
            break;  // �ʼ��� �ƴ�����, �ϰ����� ���� �߰��� �� �ֽ��ϴ�.

    }

    return 0;
}

*/