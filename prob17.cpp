#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 100;

int main() {
	int n;
	cout << "입력 받을 정수의 갯수: ";
	cin >> n;
	int data[MAX];
	
	for (int i = 0; i < n; i++) cin >> data[i];
	//4 2 1 1 3 
 
	int range = 0; 

	for (int i = 0; i < n-1; i++) {
		int k = 1;		
		for (int j = i; j < n; j++) {
			if (data[j] <= data[j + 1]) k++;

			else {
				if (k > range) range = k; 
				break; 
			}
		}
	}

	cout << range; 

	return 0;
}
