//10926번  사용자가 입력한 문자열 뒤에 !!?를 붙여서 다시 출력 해주는 문제
#include<iostream>
#include<string>    //string k; 식으로 이제 사용이 가능함
using namespace std;

int main(int argc, char const* argv[]) {
	string mystr;
	cin >> mystr;
	cout << mystr + "??!";    // + 를 사용해 문자열 ??! 를 뒤에 바로 붙여준다.
	return 0;
}