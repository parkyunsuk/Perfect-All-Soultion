#include <stdio.h>

#define Max 5

int main(void)
{
	int n = 1;

	do {
		printf("%d\n", n++);
	} while (n <= Max);

	printf("\n����� n => %d\n", n);
	return 0;
}