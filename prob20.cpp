#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX = 100;

int main() {


  int data[MAX][MAX]; //배열 선언
  int N;


  srand((unsigned int)time(NULL));
  int save_place[4][2];


  cout << "N값 입력(N<=100인 홀수): ";
  cin >> N; //판 크기 입력 받기
  int wins = 0;
  int ex_count = 0;
  
  while (ex_count < 10000) {
    int col = (N - 1) / 2; //행 ex) N=9
    int row = (N - 1) / 2; //열

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) data[i][j] = 0; //0은 방문하지 않았음, 1은 방문했음
    } //N*N 크기의 2차원 배열 생성
    data[col][row] = 1; //초기 위치 설정 col = 4 row = 4

    while (1) { //가장자리 셀의 번호에 도착
      
      for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
          save_place[i][j] = 0;
        }
      } //save_place 배열 초기화

      int count = 0; // 인접 셀 중에 방문하지 않은 셀의 갯수

      //1. 인접 셀 방문 유무 확인 후 방문 했으면 save_place 2차원 배열에 행, 열 번호 저장

      if (data[col + 1][row] == 0) { //위 셀
        save_place[count][0] = col + 1;
        save_place[count][1] = row; //위 셀의 행과 열의 번호를 저장
        count++;
      }
      if (data[col - 1][row] == 0) { //아래 셀
        save_place[count][0] = col - 1;
        save_place[count][1] = row; //위 셀의 행과 열의 번호를 저장
        count++;
      }
      if (data[col][row + 1] == 0) { //오른쪽 셀
        save_place[count][0] = col;
        save_place[count][1] = row + 1; //위 셀의 행과 열의 번호를 저장
        count++;
      }
      if (data[col][row - 1] == 0) { //왼쪽 셀
        save_place[count][0] = col;
        save_place[count][1] = row - 1; //위 셀의 행과 열의 번호를 저장
        count++;
      }
      //인접한 셀 4개가 방문 안했으면 count == 3 인접한 셀이 다 방문했으면 count == 0 그럼 프로그램 끝내기
      if (count == 0) break;
      //2. 방문할 셀 결정
      
      int move = rand() % count;
      
      if (move == 0) { //
        col = save_place[0][0];
        row = save_place[0][1];
      }
      else if (move == 1) {
        col = save_place[1][0];
        row = save_place[1][1];
      }
      else if (move == 2) {
        col = save_place[2][0];
        row = save_place[2][1];
      }
      else {
        col = save_place[3][0];
        row = save_place[3][1];
      }
      data[col][row] = 1;
      if (col == 0 || col == N - 1 || row == 0 || row == N - 1) {
        wins++;
        break;
      }
    }
  ex_count++;
  }
  
  cout << wins / 10000.0 << endl;
  return 0; 
}

