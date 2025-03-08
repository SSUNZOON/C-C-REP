#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int N;
	cout << "입력될 정수의 갯수를 입력하세요(n<= 100): ";
	cin >> N;

	int input;
	int sum = 0;
	int power_sum = 0;
	double mean = 0;
	double result = 0;
	for (int i = 1; i <= N; i++) {
		cout << "정수를 입력하세요: ";
		cin >> input;
		sum += input;
		power_sum += input * input;
	}
	mean = double(sum) / N;
	result = power_sum - 2 * sum * mean + N * mean * mean;
	result = result / N;
	result = sqrt(result);
	cout << "평균은: " << mean << " 표준편차는: " << result;
	return 0;
}