#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    printf("x ��ǥ�� y ��ǥ�� �Է��ϼ���: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1��и�");
    else if (x < 0 && y > 0)
        printf("2��и�");
    else if (x < 0 && y < 0)
        printf("3��и�");
    else if (x > 0 && y < 0)
        printf("4��и�");
    else if (x == 0 && y != 0)
        printf("y��");
    else if (x != 0 && y == 0)
        printf("x��");
    else
        printf("����");

    return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    printf("x ��ǥ�� y ��ǥ�� �Է��ϼ���: ");
    scanf("%d %d", &x, &y);

    printf("%s",
        (x > 0 && y > 0) ? "1��и�" :
        (x < 0 && y > 0) ? "2��и�" :
        (x < 0 && y < 0) ? "3��и�" :
        (x > 0 && y < 0) ? "4��и�" :
        (x == 0 && y != 0) ? "y��" :
        (x != 0 && y == 0) ? "x��" :
        "����");

    return 0;
}