#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "�ϳ��� ����(2<= n <=30)�� �Է� �ϼ���: " << endl; 
	cin >> input; //�ϳ��� ������ �Է¹���
	int a = 0, b = 1, tmp;

	for (int i = 0; i < input; i++) {
		tmp = b;
		b = a + b; 
		a = tmp; 
	}
	cout << b << endl;

	return 0;
}
