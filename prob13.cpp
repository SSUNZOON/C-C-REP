#include <iostream>
#include <cmath>
using namespace std;
const int range = 100;


int main() {
	int data[range];
	int n; 
	cout << "�Էµ� ������ ������ �Է��ϼ���: ";
	cin >> n;
	for (int i = 0; i < n; i++){ //���� �Է¹޴� �ݺ���
		int input;
		cout << "�ԷµǴ� ����: "; 
		cin >> input; 
		data[i] = input; 
	}

	for (int i = n - 1; i > 0; i--) {
		int k = 0; // k�� �ִ��� �ε��� 
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
