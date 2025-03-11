#include <iostream>
using namespace std;
const int MAX = 100;

int main() {
	int n;
	int data[MAX];
	cout << "입력될 정수의 갯수를 입력하세요:";
	cin >> n;

	cin >> data[0];
	int leader = data[0]; // leader 초기화
	int count = 1;

	cout << "현재 리더:" << leader << endl;

	for (int i = 1; i < n; i++) {
		int t; //배열에 바로 넣지 않고 리더와 조건 비교 한다 
		cin >> t;

		if (leader < t) //리더보다 입력값이 더 큰 경우 
		{
			leader = t; //리더 교체
			data[i] = t;
			count++; //리더 갯수 증가 	
		}
		else if (leader == t) {
			data[i] = t;
			count++;
		}
		cout << "리더의 갯수: " << count << " 현재 리더: " << leader << endl;
	}
	cout << count << ":";
	for (int i = 0; i < count; i++)
		cout << data[i] << " ";

	return 0;

}