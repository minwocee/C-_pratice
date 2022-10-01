//입력받은 정수를 팩토리얼을 입력하는 함수를 만들어 보자
#include<iostream>

using namespace std;
int pac(int x) {    //팩토리얼 계산 프로그램 만들기
	int total=1;
	for (int i = 1; i < x+1; i++) {
		total *=i;
	}
	return total;
}

int main() {
	cout << "팩토리얼 계산을 원하는 정수를 입력 하시오: ";
	int k;
	cin >> k;
	cout << pac(k) << " 입니다.";
	return 0;
}