/*
#include <stdio.h>
int main(void)
{
	char op;
	int x, y, result;
	printf("������ �Է��Ͻÿ�");
	printf("(��: 2 + 5) ");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else
		result = x / y;


	printf("%d %c %d = %d ", x, op, y, result);
	return 0;
}*/



result = (op == '+') ? x + y :
	(op == '-') ? x - y :
	(op == '*') ? x * y :
	x / y;