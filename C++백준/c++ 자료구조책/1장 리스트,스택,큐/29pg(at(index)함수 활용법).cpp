std::array<int,4> arr3={1,2,3,4};    //arr3이름을 가진 정수형 4칸 배열을 만들고 바로 초기화 해줌


//try-catch문 활용(시도해보고 해당 특징이 발견되면 이걸 실행하라 라는 의미)
try
{
    std::cout <<arr3.at(3)<<"\n";    //at(3)은 인덱스[3]에 위치한 배열의 내용물을 복사해온다는 의미    
    std::cout <<arr3.at(4)<<"\n";    //at(4)는 인덱스 [4]에 위치한 배열의 내용물을 가져오는데 arr3배열은 [3]까지만 
                                     //인덱스 번호가 존재하므로 오류(std::out_of_range 예외) 가 발생한다.
}
catch(const std::out_of_range& ex)    //std::out_of_range 오류가 발생할시 실행한다는 의미
{
    std::cerr << e.what() << '\n';
}
