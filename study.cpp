#include <iostream>
int main()
{
    int seconds;
    std::cout << "Press any number: ";
    std::cin >> seconds;
    int time = 60;
    int hours = seconds / 3600;
    int minuits = (seconds - (3600*hours)) / 60;
    double second = seconds - (3600*hours) - (60*minuits);

    std::cout << seconds << ": givne seconds." << std::endl;
    std::cout << hours << ": hours." << std::endl;
    std::cout << minuits << ": minuits." << std::endl;
    std::cout << second << ": left-over seconds." << std::endl;

    return 0;
}