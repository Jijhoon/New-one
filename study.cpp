#include <iostream>
int main()
{
    int num1, num2;
    int more_larger;

    std::cout << "number 1: ";
    std::cin >> num1;
    std::cout << "number 2: ";
    std::cin >> num2;
    more_larger = (num1 > num2) ? num1 : num2; // 조건이 true면 more_larger = num1  <-->조건이 false면 more_larger = num2
    std::cout << more_larger << " is more larger" << std::endl;

    return 0;
}