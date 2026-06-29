#include <iostream>

//iostream : c++ 표준 라이브러리 사용을 안내함
// 즉 표준 라이브러리를 포함함 이라는 의미
//iostream의 역할 : 콘솔에서 텍스트를 일고 쓸 수 있도록 해줌
//iostream을 사용하기 위해선 std::cout 과 같은 것이

int main() {
    //컴파일러에게 함수 이름을 정의할 것이라고 알려준다. c++의 모든 프로그램은 main을 가지고 있어야 하며, main이 없으면 링크에 실패한다.
    //해당 함수는 정수형 값을 반환한다 int
    std::cout << "Hello world!" << std::endl;
    return 0;
}

// 기억 해야하는 것은 c++에선 무조건 세미콜론(;)이 필수적이라는 것.

