#include <iostream>
using namespace std;
const int MAX =100; 

int main() { 
//입력으로 n개의 구간이 주어진다. 각 구간은 시작과 끝을 나타내는 정수가 주어진다. 
//시작점이 빠른 순서대로 정렬하고 시작점이 같으면 끝점이 빠른 순서대로 정렬된다. 
  int n;  
  int data[MAX][2];
  cout << "입력될 구간의 갯수를 구하시오: "; 
  cin >> n; 

  for (int i =0; i< n; i++) {
    cout<< i+1 << "번째 구간 입력입니다." << endl;
    cin >> data[i][0]; //시작 구간
    cin >> data[i][1]; //끝 구간
  }
  //입력된 구간을 시작점으로 오름차순으로 정렬한다.
  for (int i =0; i < n-1; i++){
    for(int j = 0; j< n-i-1; j++){
      if(data[j][0] > data[j+1][0]){
        int tmp_0 = data[j][0]; 
        int tmp_1 = data[j][1];
        data[j][0] = data[j+1][0];
        data[j][1] = data[j+1][1];
        data[j+1][0] = tmp_0; 
        data[j+1][1] = tmp_1; 
      }
      else if(data[j][0] == data[j+1][0] && data[j][1] > data[j2+1][1]){
      int tmp_0 = data[j][0]; 
      int tmp_1 = data[j][1];
      data[j][0] = data[j+1][0];
      data[j][1] = data[j+1][1];
      data[j+1][0] = tmp_0; 
      data[j+1][1] = tmp_1; 
      }
    }
  } 
    
  for (int i =0; i< n; i++) {
    cout << "("; 
    for(int j=0; j< 2; j++) {
      cout << data[i][j];
      if(j==0) cout << ", ";
    }
    cout << ") " << endl; 
  }

  return 0 ;   
}
