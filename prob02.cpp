#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "�ϳ��� ���� ����(n)�� �Է� �ϼ���: " << endl;
	cin >> input; //�ϳ��� ���� ������ �Է¹���
	float sum = 1;
	float opt = 0.5;
	if (input > 0)
	{
		for (int i = 1; i <= input; i++) //n�� �ݺ�
		{
			if (i % 2 == 0) //������ ¦�� �ϋ� 
			{
				sum += opt;
			}
			else //������ Ȧ�� �ϋ�
			{
				sum -= opt;
			}
			opt *= 0.5;
		}
		cout << sum << endl;
	}
	else // �߸��� �Է°�
		cout << "�� �� �Է��ϼ̽��ϴ�." << endl;
	return 0;
}
