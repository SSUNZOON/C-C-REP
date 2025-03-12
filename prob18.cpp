#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 100;

int main() {
	int n;
	cout << "N값을 입력하세요: ";
	cin >> n;
	int data[MAX];
	for (int i = 0; i < n; i++) cin >> data[i];

	int k;
	cout << "K값을 입력하시오: ";
	cin >> k; 
 
	int sum = 0;
	int i = 0;
	while (k >= sum && i < n) { //합이 k를 초과하지 않으면 반복한다.
		if (data[0] > k) break;
		sum += data[i];
		i++; 
	}
	cout << i;
	return 0;
}
