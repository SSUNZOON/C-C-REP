#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int cash = 1000000;
	double rate = 0.3; 
	int year = 0;
	while (1)
	{
		year++; 
		cash = cash*(1 + rate); 
		if (10000000 < cash) break; 
	}
	printf("10�谡 �Ǳ���� �ɸ� �ð���: %d��", year);
	return 0; 
}