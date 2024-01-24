#include <iostream>
int main()
{
    const int Size = 10;
    // NOTE: C++에서 문자열을 입력받기 위해서는 문자열이 저장될 문자형 배열을 미리 생성해야한다. Size가 배열의 크기에 해당한다.
    char city[Size];
    char name[Size];

    std::cout << "내가 살고 있는 곳: ";
    std::cin.get(city, Size).ignore(Size, "\n");
    std::cout << "이름: ";
    std::cin.get(name, Size).ignore(Size, "\n");

    std::cout << city << "에 살고," << name << "입니다." << std::endl;
    return 0;
}
