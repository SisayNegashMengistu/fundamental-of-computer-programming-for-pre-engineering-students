// Example 10-01: Basic pointer operations

#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* ptr = &x;

    cout << "Value of x       : " << x    << endl;
    cout << "Address of x     : " << &x   << endl;
    cout << "Value of ptr     : " << ptr  << endl;
    cout << "Dereferenced ptr : " << *ptr << endl;

    // Modify x through pointer
    *ptr = 200;
    cout << "\nAfter *ptr = 200 :" << endl;
    cout << "Value of x       : " << x    << endl;

    return 0;
}
