#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
#include <time.h>
int main() {
	srand((unsigned)time(NULL)); 


	int money = 50; 
	int goal = 250; 
	int N = 100;

	int wins = 0; 

	for (int i = 0; i < N; i++)
	{
		int cash = money;
		while (cash < goal && cash > 0)
		{
			if (rand() % 2 == 1) cash++;
			else cash--; 
		}
		if (cash == goal) wins++; 
	}
	printf("%d", wins); 
	



}