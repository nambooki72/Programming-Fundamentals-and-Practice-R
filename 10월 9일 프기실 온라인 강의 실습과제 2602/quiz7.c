#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;
    printf("문자를 하나 입력하세요: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("대문자");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("소문자");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("숫자");
    }
    else {
        printf("알파벳도 숫자도 아닙니다");
    }

    return 0; //아스키코드를 사용하는구나
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;
    printf("문자를 하나 입력하세요: ");
    scanf(" %c", &ch);

    printf("%s",
        (ch >= 'A' && ch <= 'Z') ? "대문자" :
        (ch >= 'a' && ch <= 'z') ? "소문자" :
        (ch >= '0' && ch <= '9') ? "숫자" :
        "알파벳도 숫자도 아닙니다");

    return 0;
}