#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	//������ ���� ���ϴ� ���α׷� 
	int time;
	printf("�ð��� �Է��ϼ���(��): ");
	scanf("%d", &time);
	
	int bio = 10;
	
	for (int i = 0; i < time; i++) {
		bio *= 4.0;
	} 
	printf("������ �� = %d", bio); 
}