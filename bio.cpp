#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	//세균의 수를 구하는 프로그램 
	int time;
	printf("시간을 입력하세요(시): ");
	scanf("%d", &time);
	
	int bio = 10;
	
	for (int i = 0; i < time; i++) {
		bio *= 4.0;
	} 
	printf("세균의 수 = %d", bio); 
}