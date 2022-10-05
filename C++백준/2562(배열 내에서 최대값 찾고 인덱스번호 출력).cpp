#include<iostream>
#include<algorithm>

using namespace std;
int main(int argc, char const* argv[]) {
	int mlist[9];    //정수형 배열을 9칸 생성 한다.
	int max = 0, index = 0;    //최대값, 인덱스 번호가 들어갈 변수를 만들어 준다.

	for (int i = 0; i < 9; i++) {    //9번을 반복해서 각 인덱스 마다 입력값을 넣어준다.
		cin >> mlist[i];
		if (mlist[i] > max) {    //최대값을 넣어주는 if문 생성
			max = mlist[i];
			index = i;
		}
	}
	cout << max << "\n";
	cout << index+1;
	return 0;
}