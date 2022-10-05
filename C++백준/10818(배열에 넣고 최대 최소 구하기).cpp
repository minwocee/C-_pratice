#include <iostream>
#include <algorithm>    //sort() 함수 쓰기 위해 사용함

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);    

	int N;
	cin >> N;

	int* array = new int[N];    //동적 배열 할당


	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	sort(array, array + N);		// 0 ~ N-1 범위 정렬

	cout << array[0] << " " << array[N - 1];

	return 0;

}