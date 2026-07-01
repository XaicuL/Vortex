// 변수 할당 및 초기화

#include <iostream>

int main() {

    /**
    int x; // Define a variable x
    int y, z; // Define variables y and z

    // 여기서 varaible은 원래 한 줄에 하나씩 정의하는 것이 좋다.

    x = 5; // x 라는 variable에 5 라는 값을 Assign

    std::cout << x << std::endl;
   **/

    int width {5};
    std::cout << width << std::endl;
    // width 는 {5} 초기화 인자이고, 5는 초기값이다.

    int height = 5;
    //복사 초기화 라고 하는 방식인데, height 라는 값은 5라고 초기화 된다.

    int z(5); // 직접 초기화 라고 하는 방식이다. 일단 이정도로 보고 넘어간다고 한다.


    int w {5};
    int m = {6};

    // 위에 두 방법을 리스트 초기화라고 한다.



    return 0;
}