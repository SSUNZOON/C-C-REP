#include <iostream>
using namespace std;

int main() {
	// ��ǥ����� �Ÿ��� 100 ������ ���� ������ ���ϴ� ���α׷�
	int count = 0; //(0,0) ���� 

	for (int x = 0; x <= 100; x++ ){
		for (int y = 0; y <= 100; y++) {
			if ((1/3.0)*x <= y && y <= (2/3.0)*x)
				if (x*x + y*y <= 10000) count++;
		}
	}
	cout << count << endl;
	return 0;
}



