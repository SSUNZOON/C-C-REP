#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int N;
	cout << "�Էµ� ������ ������ �Է��ϼ���(n<= 100): ";
	cin >> N;

	int input;
	int sum = 0;
	int power_sum = 0;
	double mean = 0;
	double result = 0;
	for (int i = 1; i <= N; i++) {
		cout << "������ �Է��ϼ���: ";
		cin >> input;
		sum += input;
		power_sum += input * input;
	}
	mean = double(sum) / N;
	result = power_sum - 2 * sum * mean + N * mean * mean;
	result = result / N;
	result = sqrt(result);
	cout << "�����: " << mean << " ǥ��������: " << result;
	return 0;
}