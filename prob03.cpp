#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N; //N���� ������ �Է¹���
	cout << N << " �� �Է� �޾ҽ��ϴ�." << endl; 

	int nums; // nums���� ���ڸ� �Է� �޴� �����̴�.  
	int MIN = 10000000; //ó�� nums�� �񱳸� ���� �ʱ�ȭ�� �����̴�.
	int count = 0; //������ ������ �־��� N������ ������ ���, -1�� ����ؾ� �Ѵ�.


	for (int i = 0; i < N; i++) //N�� �ݺ� 
	{
		cin >> nums; 
		if (nums >= 0) { // nums�� 0���� ���� ���� ��츦 ������ 
			if (nums < MIN)
				MIN = nums;
		}
		else if (nums < 0) // nums�� 0���� ���� ��츦 ������   
			count+= 1; 
	}
	
	if (count == N) cout << "-1" << endl; 
	else cout << MIN << endl; // �Է¹��� ���� ��� ������ ��� ��� 

	return 0;
}



