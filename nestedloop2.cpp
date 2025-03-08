#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	for (int i = 1; i <= 5; i++) 
	{
		for (int j = 0; j < i; j++) printf("*");
		printf("\n");
	}
	return 0; 
}