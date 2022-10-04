#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[]) {

	ios_base::sync_with_stdio(0);    //속도 빨라지게 할때 사용함

	int N;
	cin >> N;    //사용자로부터 원하는 만큼의 수의 개수를 입력 받는다.

	int array[1000001];    //주어진 한도의 최대 사이즈 배열을 생성한다.

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	sort(array, array + N);		// [0] ~ [N-1] 범위를 정렬

	cout << array[0] << " " << array[N - 1];

	return 0;

}