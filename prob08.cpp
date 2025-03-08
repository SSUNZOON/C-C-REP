#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int N = 1000000;
	int p1 = 0, p2 = 0;
	srand((unsigned int)time(NULL)); //�ð��� ������ �������� �ʰ� �ٷ� ��ȯ�Ͽ� ���� ���带 ������

	for (int i = 0; i <= N; i++) { //1000,000�� ������ ����
		int c1 = 0, c2 = 0; 
		for (int x1 = 0; x1 < 6; x1++) { //6�� ������ ��� 1�� �ѹ� ���� Ȯ�� 
			if ((rand() % 6) + 1 == 1) c1++; 
		}
		for (int x2 = 0; x2 < 12; x2++) { //12�� ������ ��� 1�� 2�� ���� Ȯ��
			if ((rand() % 6) + 1 == 1) c2++;
		}
		if (c1 >= 1) p1++;
		if (c2 >= 2) p2++;
	}
	cout << "6�� ������ 1�� �ѹ� ���� Ȯ��: " << double(p1) / N << "\n" << "12�� ������ 1�� 2�� ���� Ȯ��: " << double(p2) / N << endl;
	return 0;
}



