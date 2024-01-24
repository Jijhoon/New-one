#include <iostream>
int main()
{
    int day;
    std::cout << "Enter the number, 0 to 4";
    std::cin >> day;

    switch (day)
    {
    case 1: 
        std::cout << "GOOD DAY";
        break; // break가 없으면 case 2가 실행이 되버린다.
    case 2: 
        std::cout << "GOOD DAY2";
    case 3: 
        std::cout << "GOOD DAY3\n";
        break;
    case 4: 
        std::cout << "GOOD DAY4";
        break;
    
    default: // except같은 느낌으로 다른 것을 입력하면 이 결과가 출력.
        std::cout << "NULL DAY";
        break;
    }
    return 0;
}