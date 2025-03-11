#include <iostream>
#include <cmath>
using namespace std;
const int range = 100;


int main() {
	int data[range];
	int n; 
	cout << "입력될 정수의 갯수를 입력하세요: ";
	cin >> n;
	for (int i = 0; i < n; i++){ //정수 입력받는 반복문
		int input;
		cout << "입력되는 정수: "; 
		cin >> input; 
		data[i] = input; 
	}

	for (int i = n - 1; i > 0; i--) {
		int k = 0; // k는 최댓값의 인덱스 
		int MAX = data[0];


		for (int j = 1; j <= i; j++) {
			if (data[j] > MAX) {
				MAX = data[j];
				k = j;
			}
		}
		int tmp = data[i];
		data[i] = data[k];
		data[k] = tmp; 
	}
	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	return 0; 
}
