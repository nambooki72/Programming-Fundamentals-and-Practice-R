#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main(void)
{
	enum color { RED, GREEN, BLUE };
	int input;
	printf("�� ����(R[0], G[1], B[2]) ���� �ϳ��� �Է�: ");
	scanf("%d", &input);

	switch (input) {
		case 0 :
			printf("Red\n");
			break;

		case 1 :
			printf("Green\n");
			break;
				
		case 2 :
			printf("Blue\n");
			break;
			
		default:
			printf("�߸��� �Է�\n");
	}
	return 0;
}