#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    printf("x 좌표와 y 좌표를 입력하세요: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1사분면");
    else if (x < 0 && y > 0)
        printf("2사분면");
    else if (x < 0 && y < 0)
        printf("3사분면");
    else if (x > 0 && y < 0)
        printf("4사분면");
    else if (x == 0 && y != 0)
        printf("y축");
    else if (x != 0 && y == 0)
        printf("x축");
    else
        printf("원점");

    return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    printf("x 좌표와 y 좌표를 입력하세요: ");
    scanf("%d %d", &x, &y);

    printf("%s",
        (x > 0 && y > 0) ? "1사분면" :
        (x < 0 && y > 0) ? "2사분면" :
        (x < 0 && y < 0) ? "3사분면" :
        (x > 0 && y < 0) ? "4사분면" :
        (x == 0 && y != 0) ? "y축" :
        (x != 0 && y == 0) ? "x축" :
        "원점");

    return 0;
}