#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printff("���� �Է�: ");
	scanf("%d", &n);

	if (n % 2);
		printf("Ȧ��");
	else
		printf("¦��");

	printf("�Դϴ�.\n");

	(n % 2) ? printf("Ȧ��") : printf("¦��");
	pritnf("�Դϴ�.\n");

	return 0;
}