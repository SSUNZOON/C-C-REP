#include <iostream>
using namespace std; 
const int MAX = 100; 

int main() {
	int data[MAX];
	int input; 
	int number = 0; 
 
	
	while (1) {
		cout << "정수를 입력하세요:";
		cin >> input;
		if (input == -1) break; //-1 입력하면 종료  

		int duplicate = 0;

		for (int i = 0; i < number; i++) {
			if (data[i] == input) //배열에 입력값이 있는지 검사
				duplicate = 1;
		}
		if (duplicate == 1)
			cout << "duplicate"; 
		if (duplicate == 0)
		{
			int j = number - 1;
			while (j >= 0 && data[j] > input)
			{
				data[j + 1] = data[j];
				j--; 
			}
			data[j + 1] = input;
			number++; 

			for (int k = 0; k < number; k++)
				cout << data[k] << " ";
		}
		cout << endl;
	}
	return 0;
}