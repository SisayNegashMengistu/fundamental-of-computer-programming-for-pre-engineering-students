/*
 * Module 01 — Introduction to Programming
 * File: hello_world.cpp
 * Description: The classic first program — prints a welcome message.
 *              This demonstrates the minimal structure of a C++ program.
 *
 * Compile:  g++ -o hello hello_world.cpp
 * Run:      ./hello  (Linux/macOS)  |  hello.exe  (Windows)
 *
 * Expected Output:
 *   Hello, World!
 *   Welcome to C++ Programming!
 */

#include <iostream>     // Required for cout (console output)
using namespace std;    // Lets us write cout instead of std::cout

int main() {
    // Print "Hello, World!" followed by a newline
    cout << "Hello, World!" << endl;

    // Print a second welcome message
    cout << "Welcome to C++ Programming!" << endl;

    return 0;   // 0 = program finished successfully
}
