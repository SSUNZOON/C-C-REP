#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int year;
	printf("�ݰ��⸦ �Է��ϼ���(��): ");
	scanf("%d", &year);
	
	double radio = 100.0; 
	int current = 0;

	while (radio >= 10) {
		current += 10;
		radio = radio * 0.5;
		printf("%d �Ŀ� ���� ��= %lf\n", current, radio);
		
	} 
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ��� �ð� =%d��", current); 
}