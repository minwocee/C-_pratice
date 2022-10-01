// 222pg 두 행렬의 합을 구하는 프로그램을 작성 해보자

#include<iostream>

using namespace std;

int main() {
	int a[3][4] = { {1,2,3,4} ,{5,6,7,8} ,{9,10,11,12}  };
	int b[3][4] = { {1,2,3,4} ,{5,6,7,8} ,{9,10,11,12}  };
	int c[3][4];
	

	for (int p = 0; p < 3; p++) {
		for (int q = 0; q < 4; q++) {
			c[p][q] = a[p][q] + b[p][q];
		}
	}

	for (int p = 0; p < 3; p++) {
		for (int q = 0; q < 4; q++) {
			cout << c[p][q]<<" ";
		}
		cout << "" << endl;
	}
	return 0;

}