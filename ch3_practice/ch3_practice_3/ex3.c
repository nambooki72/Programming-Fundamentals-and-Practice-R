//[예제3] 덧셈 프로그램 #3
// 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x;
	double y;
	double sum;

	printf("첫번째 숫자를 입력하시오:");
	scanf("%lf", &x);

	printf("두번째 숫자를 입력하시오:");
	scanf("%lf", &y);

	sum = x + y;
	printf("두수의 합: %lf", sum);

	return 0;
}