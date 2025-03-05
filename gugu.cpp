#include <stdio.h>
#pragma warning(disable:4996)
void calc(int n); 

int main() {
	int n; 
	printf("출력하고 싶은 단:");
	scanf("%d", &n);

	calc(n); // 구구단 출력 함수
	
	return 0;
}

void calc(int n) {
	int i = 1;
	while (i <= 9) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}
}