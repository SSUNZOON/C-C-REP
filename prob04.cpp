#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; //N개의 정수를 입력받음
	if (N > 0) {
		cout << N << " 을 입력 받았습니다." << endl;
		int nums; // nums에는 숫자를 입력 받는 변수이다.  
		
		cin >> nums;
		int MIN = nums;
		int MAX = nums;
		cout << "0\n" << endl;
		for (int i = 1; i < N; i++) //N번 반복 
		{
			cin >> nums;
			if (nums < MIN) MIN = nums;
			else if (MAX< nums) MAX = nums;
			cout << (MAX-MIN) << "\n" << endl;
		}
	}
	else cout << "잘 못 입력하셨습니다" << endl;
	return 0;
}



