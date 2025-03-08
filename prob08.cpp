#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int N = 1000000;
	int p1 = 0, p2 = 0;
	srand((unsigned int)time(NULL)); //시간을 별도로 저장하지 않고 바로 반환하여 랜덤 씨드를 생성함

	for (int i = 0; i <= N; i++) { //1000,000번 실험할 거임
		int c1 = 0, c2 = 0; 
		for (int x1 = 0; x1 < 6; x1++) { //6번 던져서 적어도 1이 한번 나올 확률 
			if ((rand() % 6) + 1 == 1) c1++; 
		}
		for (int x2 = 0; x2 < 12; x2++) { //12번 던져서 적어도 1이 2번 나올 확률
			if ((rand() % 6) + 1 == 1) c2++;
		}
		if (c1 >= 1) p1++;
		if (c2 >= 2) p2++;
	}
	cout << "6번 던져서 1이 한번 나올 확률: " << double(p1) / N << "\n" << "12번 던져서 1이 2번 나올 확률: " << double(p2) / N << endl;
	return 0;
}



