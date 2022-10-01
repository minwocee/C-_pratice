//절대값을 구하는 함수를 작성해보자
#include<iostream>

using namespace std;

int abs(int x) {
	if (x > 0) {
		return x;
	}
	else {
		x *= -1;
		return x;
	}
}
int main() {
	cout << "절대값 변환을 원하는 정수를 입력 하시오(음수 환영 합니다.): ";
	int k;
	cin >> k;
	cout << abs(k) << " 이 변환 결과입니다";
	return 0;

}