//포인터의선언과 변수 주소를 대입 해보자
#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int* p;
	p = &a;    //포인터 변수 p 에 변수 a의 주소값을 대입(&: 변수의 주소를 알려줌)
	cout << "입력한 값: " << a << endl;
	cout << "포인터 변수값: " << *p;
	return 0;
}