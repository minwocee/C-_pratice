//https://www.acmicpc.net/problem/23246
#include<iostream>
#include<algorithm>

using namespace std;
typedef struct challenger {
	int backnumber;
	int Ascore;
	int Bscore;
	int Cscore;
	int total1;    //곱연산 낮은게 좋은거
	int total2;    //합연산 낮은게 좋은거
};

int main() {
	int N;
	cin >> N;
	challenger* list = new challenger[N];    //구조체로 만든 배열을 생성
	for (int i = 0; i < N; i++) {
		cin >> list[i].backnumber >> list[i].Ascore >> list[i].Bscore >> list[i].Cscore;
		list[i].total1 = list[i].Ascore * list[i].Bscore * list[i].Cscore;
		list[i].total2= list[i].Ascore + list[i].Bscore + list[i].Cscore;
	}    //구조체 형식으로 모든 정보를 저장 완료 함 이제 비교를 하자
	//정렬하고 1-3위 제외하고 전부 날려버림?
	//나중에 파이썬으로 풀어보기
	return 0;
}