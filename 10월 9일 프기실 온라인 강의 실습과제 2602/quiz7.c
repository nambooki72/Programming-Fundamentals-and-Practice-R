#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;
    printf("���ڸ� �ϳ� �Է��ϼ���: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("�빮��");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("�ҹ���");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("����");
    }
    else {
        printf("���ĺ��� ���ڵ� �ƴմϴ�");
    }

    return 0; //�ƽ�Ű�ڵ带 ����ϴ±���
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;
    printf("���ڸ� �ϳ� �Է��ϼ���: ");
    scanf(" %c", &ch);

    printf("%s",
        (ch >= 'A' && ch <= 'Z') ? "�빮��" :
        (ch >= 'a' && ch <= 'z') ? "�ҹ���" :
        (ch >= '0' && ch <= '9') ? "����" :
        "���ĺ��� ���ڵ� �ƴմϴ�");

    return 0;
}