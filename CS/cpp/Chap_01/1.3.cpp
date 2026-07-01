// 객체와 변수

#include <iostream>

int main() {

    /**
    std::cout << 5;
    std::cout << -6, 7;
    std::cout << 'H';
    std::cout << "Hello";
**/

    int a; //define a variable
    int b;

    // 사실 다음과 같이 작성하여도 동일한 기능을 수행함을 알고 있으면 좋을 것 같다.
    // int a, b;

    //단, 이런 실수는 피하도록 하자.
    //int a, int b; <-- 이건 올바르지 않은 방식이라고 보면 된다.

    /**
     두개의 type으로 각각의 variable을 define하고 싶다면 다음과 같은 방식을 사용하자.

   =>  int a; double b;


     **/



    return 0;


    /*
     변수에서 중요한 것은 따옴표인데

     - 작은 따옴표 : 컴파일러에서 문자 값으로 해석한다.
     - 큰 따옴표 : 컴파일러에서 텍스트 값으로 해석한다.
     - 숫자는 따옴표로 묶지 않는다
     */


}
