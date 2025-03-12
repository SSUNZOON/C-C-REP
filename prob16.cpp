#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 100;

int main() {
	int n;
	cout << "입력 받을 정수의 갯수: ";
	cin >> n;
	int data[MAX];
	int data2[MAX][2];

	for (int i = 0; i < n; i++) cin >> data[i];
	//4 2 1 1 3 

	int k = 0;
	for (int i = 0; i < n - 1; i++) { // 4 / 2 / 2 / 1 / 3
		for (int j = i; j < n; j++) {
			if (data[i] > data[j]) { // data[0] = 4 > data[1] =2  
				data2[k][0] = data[i];
				data2[k][1] = data[j]; 
				k++;
			}
		}
	}

	for (int i = 0; i < k; i++) {
		cout << "(" << data2[i][0] << " " << data2[i][1] << ")" << endl;
	}
	cout << k; 
	return 0;
}
