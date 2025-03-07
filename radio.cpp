#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int year;
	printf("반감기를 입력하세요(년): ");
	scanf("%d", &year);
	
	double radio = 100.0; 
	int current = 0;

	while (radio >= 10) {
		current += 10;
		radio = radio * 0.5;
		printf("%d 후에 남는 양= %lf\n", current, radio);
		
	} 
	printf("1/10 이하로 되기까지 걸리는 시간 =%d년", current); 
}