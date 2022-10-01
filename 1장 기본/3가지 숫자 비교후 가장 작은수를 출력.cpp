#include<iostream>
using namespace std;

int main() {
	int a, b, c, total;
	cout << "정수 3개를 공백을 활용해 입력 하시오: ";
	cin >> a >> b >> c;
	if (a > b) {
		if (a > c) {
			cout << a << " 가 가장 크네요";
		}
		else {
			cout << c << " 가 가장 크네요";
		}
	}
	else {
		if (b < c) {
			cout << c << " 가 가장 크네요.";
		}
		else {
			cout << b << " 가 가장 크네요";
		}
	}
	return 0;
}