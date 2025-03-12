#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 100;

int main() {
	int data[MAX];
	for (int i = 0; i < 7; i++) cin >> data[i];

	for (int i = 6; i > 0; i--) {
		for (int j = 0; j < i; j++){
			if (data[j] > data[j + 1]) {
				int tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 7; i++) cout << data[i] << " ";
	cout << endl; 
	int k = 0;
	for (int i = 1; i < 7; i++) {
		if (data[i] != data[i - 1]) {
			data[++k] = data[i];
		}
	}

	for (int i = 0; i < k+1; i++) cout << data[i] << " ";
	cout << endl;

	int check = 0;
	for (int i = 0; i < k; i++) {
		int t = 0; 
		for (int j = i; j < k; j++) {
			if (data[j + 1] - data[j] == 1) t++;
			else if (data[j + 1] - data[j] != 1) break;
			if (t >= 4) check = 1;
		}
	}
	if (check == 1) cout << "YES";
	else cout << "NO";

 	return 0;
}
	