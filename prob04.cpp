#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; //N���� ������ �Է¹���
	if (N > 0) {
		cout << N << " �� �Է� �޾ҽ��ϴ�." << endl;
		int nums; // nums���� ���ڸ� �Է� �޴� �����̴�.  
		
		cin >> nums;
		int MIN = nums;
		int MAX = nums;
		cout << "0\n" << endl;
		for (int i = 1; i < N; i++) //N�� �ݺ� 
		{
			cin >> nums;
			if (nums < MIN) MIN = nums;
			else if (MAX< nums) MAX = nums;
			cout << (MAX-MIN) << "\n" << endl;
		}
	}
	else cout << "�� �� �Է��ϼ̽��ϴ�" << endl;
	return 0;
}



