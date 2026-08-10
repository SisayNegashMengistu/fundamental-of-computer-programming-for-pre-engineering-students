/*
 * Module 09 — Functions and Modular Programming
 * File: functions_demo.cpp
 * Description: Demonstrates function declaration, definition, parameters,
 *              return values, pass by value vs reference, and recursion.
 *
 * Compile:  g++ -o funcs functions_demo.cpp
 * Run:      ./funcs
 */

#include <iostream>
#include <cmath>    // sqrt, pow
using namespace std;

// ─── Function Prototypes (declarations) ───────────────────────────────────
double circleArea(double radius);
int    factorial(int n);
bool   isPrime(int n);
void   swap(int &a, int &b);     // pass by reference
int    power(int base, int exp);

// ─── main ─────────────────────────────────────────────────────────────────
int main() {
    // 1. Return-value function
    cout << "=== Circle Area ===" << endl;
    double r = 5.0;
    cout << "Area of circle (r=" << r << "): " << circleArea(r) << endl;

    // 2. Recursive function
    cout << "\n=== Factorial (Recursive) ===" << endl;
    for (int i = 0; i <= 7; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }

    // 3. Boolean return
    cout << "\n=== Prime Numbers 1-20 ===" << endl;
    for (int i = 2; i <= 20; i++) {
        if (isPrime(i)) cout << i << " ";
    }
    cout << endl;

    // 4. Pass by reference
    cout << "\n=== Swap (Pass by Reference) ===" << endl;
    int x = 10, y = 20;
    cout << "Before swap: x=" << x << ", y=" << y << endl;
    swap(x, y);
    cout << "After  swap: x=" << x << ", y=" << y << endl;

    // 5. Default vs custom power
    cout << "\n=== Power Function ===" << endl;
    cout << "2^10 = " << power(2, 10) << endl;
    cout << "3^4  = " << power(3, 4)  << endl;

    return 0;
}

// ─── Function Definitions ─────────────────────────────────────────────────

// Returns the area of a circle given its radius
double circleArea(double radius) {
    const double PI = 3.14159265;
    return PI * radius * radius;
}

// Recursive factorial: n! = n * (n-1)!
int factorial(int n) {
    if (n <= 1) return 1;        // base case
    return n * factorial(n - 1); // recursive call
}

// Returns true if n is a prime number
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Swaps two integers using pass-by-reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Computes base^exp iteratively
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
