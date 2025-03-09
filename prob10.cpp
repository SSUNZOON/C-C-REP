#include <iostream>
#include <cmath>
using namespace std; 
const int MAX = 100; 


int main() {
	int data[MAX];
	int n; 
	cout << "입력할 정수의 갯수를 입력하시오: ";
	cin >> n; 
	
	for (int i = 0; i < n; i++) {
		cin >> data[i]; 
	}
	
	int k; 
	cout << "비교할 k값을 입력하시오: ";
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



