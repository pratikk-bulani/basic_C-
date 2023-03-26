#include <iostream>
#include "math.h"
using namespace std;

// To learn more on extern, please visit: https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/ (Example 4 is unclear)

// By default, all the functions are extern
int sum(int x, int y);
void print_pi();
// Better to put the function declarations in math.h file and include it here on top like #include "math.h"

extern float pi; // Comment this line of code to check the compilation error (No existence of the symbol pi)
// Remove the extern keyword from above and check the compilation error (Multiple definitions of the symbol pi)
int main(int argc, char **argv) {
    cout << "The sum(2, 3) is " << sum(2, 3) << endl;
    cout << "The value of pi is " << pi << endl;
    pi = 3.28;
    cout << "The new value of pi is " << pi << endl;
    print_pi();
    return 0;
}