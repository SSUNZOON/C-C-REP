#include <iostream>
using namespace std;

int main() {
	int year1, month1, day1;
	int year2, month2, day2; 
	int result = 0; //��� ����� ������
	cout << "�� ���� ��¥�� �Է��Ͻÿ�: ";
	cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2;

	cout << "�Է°� �Դϴ�: " << year1 << " " << month1 << " " << day1 << " ";
	cout << year2 << " " << month2 << " " << day2 << endl;

	if (year1 > year2) result = 1;
	else if (year1 == year2) { //������ ���� ���� ���� ���Ѵ�
		if (month1 > month2) result = 1;
		else if (month1 == month2) { // ���� ���� �� ���� ���Ѵ�.
			if (day1 > day2) result = 1;
			else if (day1 == day2) result = 0;
			else result = -1;
		}
		else result = -1;
	}
	else result = -1;

	cout << result << endl;

	return 0;
}



