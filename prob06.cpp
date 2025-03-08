#include <iostream>
using namespace std;

int main() {
	//극값 구하기 프로그램 
	
	int num1, num2;
	int num3 = 0 ; // while문 안에서 받을 정수
	int count = 0; 

	cin >> num1;
	cin >> num2;
	
	if (num1 <= num2)
		count++;

	while(1) {
		cin >> num3;
		if (num3 == -1) break;

		if (num2 <= num1 && num2 <= num3) 
			count++;
		num1 = num2; //다음 극솟값을 비교하기 위해 숫자를 옮겨준다.
		num2 = num3;
	}
	if (num2 <= num1) count++; // 마지막 값이 극솟값인지를 확인한다.

	cout << count << endl;

	return 0;
}



