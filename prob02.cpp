#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "하나의 양의 정수(n)을 입력 하세요: " << endl;
	cin >> input; //하나의 양의 정수를 입력받음
	float sum = 1;
	float opt = 0.5;
	if (input > 0)
	{
		for (int i = 1; i <= input; i++) //n번 반복
		{
			if (i % 2 == 0) //지수가 짝수 일떄 
			{
				sum += opt;
			}
			else //지수가 홀수 일떄
			{
				sum -= opt;
			}
			opt *= 0.5;
		}
		cout << sum << endl;
	}
	else // 잘못된 입력값
		cout << "잘 못 입력하셨습니다." << endl;
	return 0;
}
