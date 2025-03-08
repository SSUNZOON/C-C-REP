#include <iostream>
using namespace std;

int main() {
	int year1, month1, day1;
	int year2, month2, day2; 
	int result = 0; //출력 결과를 지정함
	cout << "두 개의 날짜를 입력하시오: ";
	cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2;

	cout << "입력값 입니다: " << year1 << " " << month1 << " " << day1 << " ";
	cout << year2 << " " << month2 << " " << day2 << endl;

	if (year1 > year2) result = 1;
	else if (year1 == year2) { //연도가 같을 때는 월을 비교한다
		if (month1 > month2) result = 1;
		else if (month1 == month2) { // 월이 같을 때 일을 비교한다.
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



