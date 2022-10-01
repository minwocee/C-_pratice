//삼각형을 출력 하는 프로그램 작성
#include<iostream>

using namespace std;

int main() {
	cout << "역삼각형 가장 큰 변의 길이를 입력 하시오: ";
	int length;
	cin >> length;

	for (int i = 1; i < length+1; i++) {
		for (int k = 0; k < i; k++) {
			cout << "x";
		}
		cout << "" << endl;
	}
	return 0;

}