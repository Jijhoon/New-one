#include <iostream>
int main()
{
    int x = true; // false는 소문자로 작성!
    if (x != 0) // (x = 0) -> 할당연산자 but (x == 0) 일치 연산자
    { // 괄호를 항상 빼먹지 말자.
        std::cout << "statement"<<std::endl; // 세미콜론도 빼먹지 말자.
    }

    if (x == 0) 
    std::cout << "statement2"<<std::endl; // 괄호가 없어도 바로 아래에 붙어있다면 작동은 하긴 한다. 여기서 중요한 것은 if block에 들어있는지 판단하는 도구가 필요한 것이다.
    std::cout << "statement3"<<std::endl;
        
    return 0; // int main()으로 시작했으니 return값이 int로 와야한다. 아마 관습적으로 0을 사용하는듯? 다른 int들도 작동은 된다.
}
