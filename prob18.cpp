#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 100;

int main() {
	int n;
	cout << "N���� �Է��ϼ���: ";
	cin >> n;
	int data[MAX];
	for (int i = 0; i < n; i++) cin >> data[i];

	int k;
	cout << "K���� �Է��Ͻÿ�: ";
	cin >> k; 
 
	int sum = 0;
	int i = 0;
	while (k >= sum && i < n) { //���� k�� �ʰ����� ������ �ݺ��Ѵ�.
		if (data[0] > k) break;
		sum += data[i];
		i++; 
	}
	cout << i;
	return 0;
}
