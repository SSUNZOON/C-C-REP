#include <stdio.h>
#pragma warning(disable: 4996)
void show();
void opt(char ch); 

int main()
{
	char ch;
	while (1) {
		show();
		printf("������ �����Ͻÿ�: ");
		scanf(" %c", &ch);
		if (ch == 'Q')
			break;
		else if (ch == 'A' || ch == 'S' || ch == 'M' || ch == 'D')
			opt(ch);
		else printf("�� �� �Է��ϼ̽��ϴ�.\n");	
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
	printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);
	if (ch == 'A') printf("%d\n", a + b);
	else if (ch == 'S') printf("%d\n", a - b);
	else if (ch == 'M') printf("%d\n", a * b);
	else if (ch == 'D') printf("%d\n", a / b);
}