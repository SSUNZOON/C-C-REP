#include <stdio.h>
#pragma warning (disable:4996)

int main() {

	int grade = 0, n = 0, sum = 0;	
	
	printf("�����Ϸ��� ������ �Է��ϼ��� \n");
	
	while (1) {
		printf("������ �Է��ϼ���:");
		scanf("%d", &grade);
		if (grade == -1) break;
		n++;
		sum += grade;
	
	}
	printf("������ ����� %f�Դϴ�\n", sum / (float)n);
	return 0; 
}