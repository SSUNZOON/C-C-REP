#include <iostream>
#include <cmath>
using namespace std; 
const int MAX = 100; 


int main() {
	int data[MAX];
	int n; 
	cout << "�Է��� ������ ������ �Է��Ͻÿ�: ";
	cin >> n; 
	
	for (int i = 0; i < n; i++) {
		cin >> data[i]; 
	}
	
	int k; 
	cout << "���� k���� �Է��Ͻÿ�: ";
	cin >> k; 

	int MIN = abs(data[0] - k); // 1 9 8 2 5 12 // 7 -> 6
	int nums = data[0];  
	for (int i = 1; i < n; i++) {
		if (MIN > abs(data[i] - k)) {
			MIN = abs(data[i] - k);
			nums = data[i];
		}
	}
	cout << nums << endl; 

}



