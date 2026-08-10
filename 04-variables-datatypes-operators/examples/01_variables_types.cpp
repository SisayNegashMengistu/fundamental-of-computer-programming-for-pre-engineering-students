// Example 04-01: Variables and data types
// Demonstrates declaration, initialization, and basic output of various types.

#include <iostream>
using namespace std;

int main() {
    int    studentCount = 35;
    double gpa          = 3.75;
    char   grade        = 'A';
    bool   isEnrolled   = true;

    cout << "Students enrolled: " << studentCount << endl;
    cout << "GPA             : " << gpa << endl;
    cout << "Grade           : " << grade << endl;
    cout << "Active          : " << isEnrolled << endl;  // prints 1 for true

    return 0;
}
