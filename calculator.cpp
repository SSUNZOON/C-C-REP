#include <stdio.h>
#pragma warning(disable: 4996)
void show();
void opt(char ch); 

int main()
{
	char ch;
	while (1) {
		show();
		printf("연산을 선택하시오: ");
		scanf(" %c", &ch);
		if (ch == 'Q')
			break;
		else if (ch == 'A' || ch == 'S' || ch == 'M' || ch == 'D')
			opt(ch);
		else printf("잘 못 입력하셨습니다.\n");	
	}
}

void show()
{
	printf("***************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("***************\n");
}

void opt(char ch) {
	int a, b; 
	printf("두 수를 공백으로 분리하여 입력하시오: ");
	scanf("%d %d", &a, &b);
	if (ch == 'A') printf("%d\n", a + b);
	else if (ch == 'S') printf("%d\n", a - b);
	else if (ch == 'M') printf("%d\n", a * b);
	else if (ch == 'D') printf("%d\n", a / b);
}