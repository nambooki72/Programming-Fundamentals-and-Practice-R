#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 0, b = 0, c, result;
	char null = '\0', m = 'a';
	int zero = 0, n = 10;
	printf("��������\n");
	printf("���1 : %d\n", zero && n);
	printf("���2 : %d\n", m || null);
	printf("�� ������ ���� ���\n");
	a = 10; b = 5; m = 1;
	result = (a < b) && (m++ == 1);
	printf("���3 : m=%d result=%d\n", m, result);
	return 0;
}