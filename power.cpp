#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	for (int i = 1; i <= 20; i++) printf("=");
	printf("\n");
	printf("n   nÀÇ Á¦°ö\n");
	for (int i = 1; i <= 20; i++) printf("=");
	printf("\n");
	for (int i = 1; i <= 10; i++)
	{
		printf("%d %5d\n", i, i * i);
	}
}