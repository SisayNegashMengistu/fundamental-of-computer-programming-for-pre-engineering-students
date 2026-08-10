/*
 * Module 04 — Variables, Constants, and Data Types
 * File: variables_demo.cpp
 * Description: Demonstrates declaration, initialization, and use of
 *              various C++ data types, constants, and sizeof.
 *
 * Compile:  g++ -o vars variables_demo.cpp
 * Run:      ./vars
 *
 * Expected Output:
 *   === Variable and Data Type Demo ===
 *   Student Name  : Sisay
 *   Age           : 20
 *   GPA           : 3.75
 *   Grade         : A
 *   Passed?       : 1 (true)
 *   PI (constant) : 3.14159
 *   Size of int   : 4 bytes
 *   Size of double: 8 bytes
 */

#include <iostream>
#include <string>
#include <iomanip>   // setprecision, fixed
using namespace std;

// Constant declaration
const double PI = 3.14159265;
const int    MAX_STUDENTS = 50;

int main() {
    // --- Variable declarations and initialization ---
    string name   = "Sisay";    // text
    int    age    = 20;          // whole number
    double gpa    = 3.75;        // decimal number
    char   grade  = 'A';         // single character
    bool   passed = true;        // true/false

    // --- Output ---
    cout << "=== Variable and Data Type Demo ===" << endl;
    cout << "Student Name  : " << name   << endl;
    cout << "Age           : " << age    << endl;
    cout << fixed << setprecision(2);
    cout << "GPA           : " << gpa    << endl;
    cout << "Grade         : " << grade  << endl;
    cout << "Passed?       : " << passed << " (true)" << endl;
    cout << setprecision(5);
    cout << "PI (constant) : " << PI     << endl;

    // sizeof shows memory used by each type
    cout << "Size of int   : " << sizeof(int)    << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    // --- Type conversion demo ---
    double x = 7.9;
    int    y = (int)x;    // explicit cast — truncates decimal
    cout << "\nCasting 7.9 to int: " << y << endl;

    // --- Unsigned integer ---
    unsigned int students = MAX_STUDENTS;
    cout << "Max students  : " << students << endl;

    return 0;
}
