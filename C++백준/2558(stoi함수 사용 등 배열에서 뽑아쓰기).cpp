#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const* argv[]) {
    int A;
    string B;
    cin >> A;
    cin >> B;

    cout << A * (B[2] - '0')<<"\n";    //인덱스에 담겨져 있는 값을 그대로 사용 하기 위해 -'0'을 붙였다고 생각하자
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    cout << A * stoi(B);    //문자열을 정수형 으로 바꾸어 주는 stoi() 함수
    return 0;
}