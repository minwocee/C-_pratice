
//사용자가 정의한 print함수임
void print(std::array<int,5> arr)    //std::array<int,5> arr 은 매개변수역할로 들어가는 배열임
{
    for (auto ele:arr)               //다른 언어에서 var형처럼 auto는 자동으로 자료형을 인식함
    std::cout<<ele<<", ";            //ele:arr은 arr배열의 요소들을 [0]~[N-1](끝)까지 넣어주는걸 반복한다는 의미
}                                    //foreach와 비슷함

std::array<int,5> arr={1,2,3,4,5};
print(arr);

/*
실행결과
1, 2, 3, 4, 5
*/


//만약 배열의 사이즈가 <int,10>이면 위의 print함수에 들어가지 못한다.(너무 큰값이 들어갈려 하기 떄문)
//이런문제를 해결하기위해 유연하게 매개변수를 설정할수있게 이러한 코드를 넣는다

template<size_t N>
void print(const std::array<int, N>& arr);