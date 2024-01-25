#include <iostream>
#include <iomanip>
int main()
{
    // Declation
    int starting_day;
    int days_in_month;
    int col = 1;

    // Identify of days in month
    do
    {
        std::cout << "Enter the number of last days in the month (from 28 to until the 31st): ";
        std::cin >> days_in_month;
    } while (days_in_month < 28 || days_in_month > 31);
    do
    {
        std::cout << "Enter the starting day of the week (1=Sun, 7=Sat): ";
        std::cin >> starting_day;
    } while (starting_day < 1 || starting_day > 7);
    // Print title.
    std::cout << "\nSon Mon Tue Wed Thu Fri Sat\n";
    std::cout << "--- --- --- --- --- --- ---\n";
    // Print blank space before the starting_day.
    for (int i = 1; i < starting_day; i++)
    {
        std::cout << "    ";
        col++;
    }
    // Print the calender.
    for (size_t i = 1; i <= days_in_month; i++)
    {
        std::cout << std::setw(3) << i << " ";
        col++;
        if (col > 7)
        {
            std::cout << std::endl;
            col = 1;
        }
    }
    std::cout << std::endl;
    return 0;
} // End of main()