/* NOTE: private, protected, public / access modifier
private : // private member -> can't access from outside of class // class 본인만 접근 가능
protected : // protected member -> can access from derived class // class를 상속받은 class만 접근 가능
public : // public member -> can access from anywhere // 어디서든 접근 가능
*/

/* NOTE: classes and functions
#include <iostream>
using namespace std;
// Declaration of Circle class and its member functions
class Circle
{
private:
double radius;
public:
double getRadius () const; -> const member라고 정의하면 member function이 object의 data member를 수정할 수 없다.
double getArea () const;
double getPerimeter () const; 
void setRadius (double value); -> const가 아니라면 member function이 object의 data member를 수정할 수 있다.
}; <- important!!!!!!! DON'T forget semicolon

// Definition of getRadius member function
double Circle :: getRadius () const
{
return radius;
}
// Definition of getArea member function
double Circle :: getArea () const
{
const double PI = 3.14;
return (PI * radius * radius);
}
// Definition of getPerimeter member function
double Circle :: getPerimeter () const
{
const double PI = 3.14;
return (2 * PI * radius);
}
// Definition of setRadius member function
void Circle :: setRadius (double value) // private member는 직접 접근이 불가능하므로 public member function을 정의하여 접근한다
{
radius = value;
}


int main ( )
{
// Creating first circle and applying member functions
cout << "Circle 1: " << endl;
Circle circle1;
circle1.setRadius (10.0);
cout << "Radius: " << circle1.getRadius() << endl;
cout << "Area: " << circle1.getArea() << endl;
cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;
// Creating second circle and applying member functions
cout << "Circle 2: " << endl;
Circle circle2;
circle2.setRadius (20.0);
cout << "Radius: " << circle2.getRadius() << endl;
cout << "Area: " << circle2.getArea() << endl;
cout << "Perimeter: " << circle2.getPerimeter();
return 0;
}
*/

/* NOTE: sum of number sereis

     1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 ... + n = n(n+1)/2

     1 + 4 + 9 + 16 + 25 + 36 + 49 + 64 + 81 + 100 ... + n^2 = n(n+1)(2n+1)/6

     1 + 8 + 27 + 64 + 125 + 216 + 343 + 512 + 729 + 1000 ... + n^3 = n^2(n+1)^2/4

    */

/* NOTE: Sentinel-controlled loop

 sentinel : a guard who prevents unauthorized person from passing a point.

 -> sentinel-contlled loop : a loop that is controlled by a sentinel value.

 sentinel value : a special value that is used to terminate the loop.

 ex) 0, -1, 999, 100, 9999, 999999, 999999999, 999999999999999999

 Programer struct the code when if -1 is entered, the loop will be terminated.

 */

/* NOTE: EOF-Controlled Loop

EOF : End Of File

EOF is a special value that is defined in the header file <iostream>.

When the user enters the EOF value, the loop will be terminated.

detail of EOF-Controlled Loop

    1. Declare a variable of int type.

    2. Use the variable as the loop condition.

    3. Read a value into the variable in the loop condition.

    4. Change the value of the variable in the loop body.

ex) while (std::cin >> number)

    {

        ...

    }

*/

/* NOTE: Use a Flag

Flag : a 'variable' that is used to control the loop.

<detail of Flag>

    1. Declare a variable of bool type.

    2. Initialize the variable to false.

    3. Use the variable as the loop condition.

    4. Change the value of the variable in the loop body.

ex) bool done = false; // done is a flag

    while (!done)

    {

        ...

        if (...)

            done = true; //

    }

*/

/* NOTE: For loop

if There is no one among the three option, doesn't act.

if you don't need initialization or update, don't write something but just semicolon.

for (initialization; condition; update)

ex) for (int i = 0; i < 10; i++)

    {

        ...

    }

*/
   
/* NOTE: How to use ternary operator
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
*/

/* NOTE: How to use switch statement
switch : it looks like a 'if'
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
        break;
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
*/

/* NOTE: pointer(*)
 pointer is a variable that stores the address of another variable.
 declare pointer : type *var_name;
 detail of pointer
    1. pointer is a variable that stores the address of another variable.
    |  ex) int *ptr; // ptr is a pointer variable that stores the address of int variable.
    & : address of operator
    * : dereference operator
    ex) int *ptr; // ptr is a pointer variable that stores the address of int variable.
        int var = 10; // var is a int variable that stores 10.
        ptr = &var; // ptr stores the address of var.
        cout << *ptr; // print the value of var.
*/

/* NOTE: What class is, How to use class with public and private


#include <iostream>
class Circle // "class" defines a class type :  class class_name { member_declaration; member_declaration; ... };
{
    private:    // access specifier. private members are accessible only from within other members of the same class.
        double radius;
    public:    // access specifier public members are accessible from anywhere where the object is visible.
        Circle(double r) : radius(r) { }
        double circum() { return 2 * radius * 3.14159265; }
};

int main()
{
    Circle foo(10.0);   // functional form
    Circle bar = 20.0;  // assignment init.
    Circle baz {30.0};  // uniform init.
    Circle qux = {40.0};// POD-like

    std::cout << "foo's circumference: " << foo.circum() << '\n'; //foo.circum() is a member function of class Circle.
    return 0;
}

*/