#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main(void)
{
	int month, days;
	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &month);

	if (month == 2)
		days = 28;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		days = 30;
	else
		days = 31;

	printf("%d���� �ϼ��� %d�Դϴ�.\n", month, days);
	return 0;
}
	/*
	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d���� �ϼ��� %d�Դϴ�.\n", month, days);
	return 0;
} */