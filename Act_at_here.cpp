#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Declations
    const double PI = 3.14159265;
    int n;
    double x, y, z;
    // Input
    do
    {
        cout << "Enter the number of the function you want to use: " << endl;
        cin >> n;
    } while (n < 4);

    do
    {
        cout << "Enter the value of x(Side): " << endl;
        cin >> x;
    } while (x <= 0.0);
    // Process
    y = n * x;
    z = (n * pow(x, 2)) / (n * tan(PI / n));
    // Output
    cout << "The value of y(Perimeter) is: " << y << endl;
    cout << "The value of z(Area) is: " << z << endl;
    return 0;
}
