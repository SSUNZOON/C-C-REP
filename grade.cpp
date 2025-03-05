#include <stdio.h>
#pragma warning (disable:4996)

int main() {

	int grade = 0, n = 0, sum = 0;	
	
	printf("종료하려면 음수를 입력하세요 \n");
	
	while (1) {
		printf("성적을 입력하세요:");
		scanf("%d", &grade);
		if (grade == -1) break;
		n++;
		sum += grade;
	
	}
	printf("성적의 평균은 %f입니다\n", sum / (float)n);
	return 0; 
}