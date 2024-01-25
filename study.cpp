/* sum of number sereis
     1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 ... + n = n(n+1)/2
     1 + 4 + 9 + 16 + 25 + 36 + 49 + 64 + 81 + 100 ... + n^2 = n(n+1)(2n+1)/6
     1 + 8 + 27 + 64 + 125 + 216 + 343 + 512 + 729 + 1000 ... + n^3 = n^2(n+1)^2/4
    */

/* NOTE : Sentinel-controlled loop
 sentinel : a guard who prevents unauthorized person from passing a point.
 -> sentinel-contlled loop : a loop that is controlled by a sentinel value.
 sentinel value : a special value that is used to terminate the loop.
 ex) 0, -1, 999, 100, 9999, 999999, 999999999, 999999999999999999
 Programer struct the code when if -1 is entered, the loop will be terminated.
 */
#include <iostream>
int main()
{
    // Declation
    int total = 0;
    int number;

    // Loop
    std::cout << "Enter a number (-1 to quit): ";
    std::cin >> number;
    while (number != -1)
    {
        total += number;
        std::cout << "Enter a number (-1 to quit): ";
        std::cin >> number;
    }
    std::cout << "The total is " << total << std::endl;

    return 0;
}

/*NOTE : EOF-Controlled Loop
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

/*NOTE : Use a Flag
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

/*NOTE : For loop
if There is no one among the three option, doesn't act. 
if you don't need initialization or update, don't write something but just semicolon.
for (initialization; condition; update)
ex) for (int i = 0; i < 10; i++)
    {
        ...
    }
*/