#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "하나의 정수(2<= n <=30)를 입력 하세요: " << endl;
	cin >> input; //하나의 정수를 입력받음
	int a = 0, b = 1, tmp;
	if (2 <= input && input <= 30) {
		for (int i = 0; i < input; i++) {
			tmp = b;
			b = a + b;
			a = tmp;
		}
		cout << b << endl;
	}
	else cout << "잘 못 입력하셨습니다" << endl;

	return 0;
}
