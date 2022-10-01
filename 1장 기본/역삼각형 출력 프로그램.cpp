#include<iostream>
using namespace std;

int main() {
	cout << "원하는 역삼각형의 높이를 입력 하시오: ";
	int height;    //역삼각형의 높이를 입력 받아준다.
	cin >> height;
	for (int i = 1; i < height + 1; i++) {
		for (int k = height; k > i-1; k--) {
			cout << "x";
		}
		cout << "" << endl;
	}
	return 0;
}