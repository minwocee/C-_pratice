//std::array  std::vector  std::map  std::set  std::list 처럼 반복하능한 모든 STL컨터이너에 대해 사용

//array::begin() 함수: 첫번쨰 원소를 가리키는 반복자를 반환
//array::end() 함수: 마지막 원소 다을을 가리키는 반복자를 반환 합니다.
//array::front() 함수: 배열의 첫번째 원소에 대한 참조(실제값)을 반환함
//array::back() 함수: 배열의 마지막 원소에 대한 참조(실제값)을 반환함
//array::data() 함수: 배열의 포인터 주소를 반환(배열 인덱스 [0])

for (auto it = arr.begin(); it != arr.end(); it++){    
    //it은 반복자로 설정됨(포인터 주소라고도 생각) ,증감 연산자로 다음 인덱스 위치로 옮긴다(++사용시 배열의 다음 칸으로 옮교진다).
    
    auto element=(*it);     //it 가 가르키는 내용물을 의미
    std::cout<<element<<' ';
}


std::array<int,5> arr={1,2,3,4,5};
std::cout<<arr.front()<<"\n";    //배열의 첫번째 요소 정수 1을 출력한다.
std::cout<<arr.back()<<"\n";    //배열의 마지막 요소 정수 5를 출력한다.
std::cout<<*(arr.data() +1 );    //첫번째 인덱스에서 두번째 인덱스로 한칸 이동한후 출력(정수 2출력됨)

