//숫자를 입력받아 절대값을 만드는 프로그램 생성
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "원하는 정수를 입력하세요(-환영): ";
	cin >> a;
	if (a > 0) {
		cout << a << " 입니다.";
	}
	else {
		a = a * -1;
		cout << a<<" 입니다(절대값 실행 완료)";
	}
	return 0;
}