#include <iostream>
using namespace std;
const int MAX = 100;

int main() {
	int n;
	int data[MAX];
	cout << "�Էµ� ������ ������ �Է��ϼ���:";
	cin >> n;

	cin >> data[0];
	int leader = data[0]; // leader �ʱ�ȭ
	int count = 1;

	cout << "���� ����:" << leader << endl;

	for (int i = 1; i < n; i++) {
		int t; //�迭�� �ٷ� ���� �ʰ� ������ ���� �� �Ѵ� 
		cin >> t;

		if (leader < t) //�������� �Է°��� �� ū ��� 
		{
			leader = t; //���� ��ü
			data[i] = t;
			count++; //���� ���� ���� 	
		}
		else if (leader == t) {
			data[i] = t;
			count++;
		}
		cout << "������ ����: " << count << " ���� ����: " << leader << endl;
	}
	cout << count << ":";
	for (int i = 0; i < count; i++)
		cout << data[i] << " ";

	return 0;

}