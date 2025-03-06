#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; //N개의 정수를 입력받음
	cout << N << " 을 입력 받았습니다." << endl; 

	int nums; // nums에는 숫자를 입력 받는 변수이다.  
	int MIN = 10000000; //처음 nums와 비교를 위해 초기화한 변수이다.
	int count = 0; //음수의 갯수가 주어진 N갯수와 동일할 경우, -1을 출력해야 한다.


	for (int i = 0; i < N; i++) //N번 반복 
	{
		cin >> nums; 
		if (nums >= 0) { // nums가 0보다 작지 않은 경우를 상정함 
			if (nums < MIN)
				MIN = nums;
		}
		else if (nums < 0) // nums가 0보다 작은 경우를 상정함   
			count+= 1; 
	}
	
	if (count == N) cout << "-1" << endl; 
	else cout << MIN << endl; // 입력받은 수가 모두 음수일 경우 출력 

	return 0;
}



