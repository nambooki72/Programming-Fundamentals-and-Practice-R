#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    char X;

    printf("문자를 입력하시오");
    scanf(" %c", &X);

    if (X == 'a' || X == 'e' || X == 'i' || X == 'o' || X == 'u') //결론적으로, %c 앞의 공백은 입력 처리를 더 안정적으로 만들어주는 좋은 습관입니다. 특히 다른 입력 작업과 함께 사용될 때 유용합니다.
        printf("모음입니다 \n");
    else
        printf("자음입니다 \n");



    return 0;
} 

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char X;
    printf("문자를 입력하시오: ");
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
            printf("모음입니다\n");
            break;
        default:
            printf("자음입니다\n");
            break;  // 필수는 아니지만, 일관성을 위해 추가할 수 있습니다.

    }

    return 0;
}

*/