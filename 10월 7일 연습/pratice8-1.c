#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 0, b = 0, c, result;
	char null = '\0', m = 'a';
	int zero = 0, n = 10;
	printf("논리연산자\n");
	printf("결과1 : %d\n", zero && n);
	printf("결과2 : %d\n", m || null);
	printf("논리 연산자 단축 계산\n");
	a = 10; b = 5; m = 1;
	result = (a < b) && (m++ == 1);
	printf("결과3 : m=%d result=%d\n", m, result);
	return 0;
}