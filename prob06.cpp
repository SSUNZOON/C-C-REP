#include <iostream>
using namespace std;

int main() {
	//�ذ� ���ϱ� ���α׷� 
	
	int num1, num2;
	int num3 = 0 ; // while�� �ȿ��� ���� ����
	int count = 0; 

	cin >> num1;
	cin >> num2;
	
	if (num1 <= num2)
		count++;

	while(1) {
		cin >> num3;
		if (num3 == -1) break;

		if (num2 <= num1 && num2 <= num3) 
			count++;
		num1 = num2; //���� �ؼڰ��� ���ϱ� ���� ���ڸ� �Ű��ش�.
		num2 = num3;
	}
	if (num2 <= num1) count++; // ������ ���� �ؼڰ������� Ȯ���Ѵ�.

	cout << count << endl;

	return 0;
}



