#include <stdio.h>
#pragma warning(disable:4996)
void calc(int n); 

int main() {
	int n; 
	printf("����ϰ� ���� ��:");
	scanf("%d", &n);

	calc(n); // ������ ��� �Լ�
	
	return 0;
}

void calc(int n) {
	int i = 1;
	while (i <= 9) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}
}