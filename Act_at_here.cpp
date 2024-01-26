#include <iostream>
#include <cassert>
using namespace std;

class Rectangle
{
private:
    double length; // data member
    double height;

public:
    Rectangle(double l, double h); // constructor
    Rectangle(const Rectangle &r); // copy constructor
    ~Rectangle();                  // destructor
    void print() const;            // member function
    double getArea() const;
    double getPerimeter() const;
};

Rectangle ::Rectangle(double len, double hgt)
    : length(len), height(hgt)

{
    if ((length <= 0.0) || (height <= 0.0))
    {
        cout << "No rectangle can be made!" << endl;
        assert(false);
    }
}
// Copy constructor
Rectangle ::Rectangle(const Rectangle &rect)
    : length(rect.length), height(rect.height)
{
}
// Destructor
Rectangle ::~Rectangle()
{
}
// Accessor member function: Print length and height
void Rectangle ::print() const
{
    cout << "A rectangle of " << length << " by " << height << endl;
}
// Accessor member function: Get area
double Rectangle ::getArea() const
{
    return (length * height);
}
// Accessor member function: Get perimeter
double Rectangle ::getPerimeter() const
{
    return (2 * (length + height));
}
int main()
{
    // Instantiation of three objects
    Rectangle rect1(3.0, 4.2);  // Using parameter constructor
    Rectangle rect2(5.1, 10.2); // Using parameter constructor
    Rectangle rect3(rect2);     // Using copy constructor
    // Operations on first rectangle
    cout << "Rectangle 1: ";
    rect1.print();
    cout << "Area: " << rect1.getArea() << endl;
    cout << "Perimeter: " << rect1.getPerimeter() << endl
         << endl;
    // Operations on second rectangle
    cout << "Rectangle 2: ";
    rect2.print();
    cout << "Area: " << rect2.getArea() << endl;
    cout << "Perimeter: " << rect2.getPerimeter() << endl
         << endl;
    // Operations on third rectangle
    cout << "Rectangle 3: ";
    rect3.print();
    cout << "Area: " << rect3.getArea() << endl;
    cout << "Perimeter: " << rect3.getPerimeter() << endl
         << endl;
    return 0;
}