#include <iostream>
#include <cmath>
int main()
{
    int x = -5;
    //int abs(int x); -> absolute value of x
    
    std::cout << abs(x) << std::endl; // this state is working.
    std::cin >> x;
    std::cout << abs(x) << std::endl; // this state is working.
    
    return 0;

}