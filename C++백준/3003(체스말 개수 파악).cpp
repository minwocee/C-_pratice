#include<iostream>
using namespace std;

int main(int argc, char const* argv[]) {
	int K, Q, L, B, N, P;    //입력받을때 필요한 변수들
	int k = 1, q = 1, l = 2, b = 2, n = 2, p = 8;    //체스에서 기본적으로 필요한 체스말의 기준

	cin >> K >> Q >> L >> B >> N >> P;
	cout <<k-K<<" " <<q-Q << " " << l-L << " " << b-B << " " <<n-N << " " << p-P;    //빈칸을 넣어주기위해 공백문자 삽입

	return 0;
}