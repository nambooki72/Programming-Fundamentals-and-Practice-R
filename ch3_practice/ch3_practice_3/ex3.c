//[����3] ���� ���α׷� #3
// ����ڷκ��� �Է¹��� 2���� ������ ���� ����Ͽ� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x;
	double y;
	double sum;

	printf("ù��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%lf", &x);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�:");
	scanf("%lf", &y);

	sum = x + y;
	printf("�μ��� ��: %lf", sum);

	return 0;
}