/*
 * Module 11 — Pointers and Memory
 * File: pointers_demo.cpp
 * Description: Demonstrates pointer declaration, address-of operator,
 *              dereferencing, pointer arithmetic, and dynamic memory.
 *
 * Compile:  g++ -o ptrs pointers_demo.cpp
 * Run:      ./ptrs
 */

#include <iostream>
using namespace std;

int main() {
    // ── 1. Basic Pointer ──────────────────────────────────────────────────
    cout << "=== Basic Pointer ===" << endl;
    int value = 42;
    int *ptr = &value;    // ptr holds the address of value

    cout << "value        = " << value  << endl;
    cout << "address (&v) = " << &value << endl;
    cout << "ptr          = " << ptr    << endl;   // same as &value
    cout << "*ptr (deref) = " << *ptr   << endl;   // 42

    // Modify through pointer
    *ptr = 100;
    cout << "After *ptr=100, value = " << value << endl;

    // ── 2. Pointer Arithmetic ─────────────────────────────────────────────
    cout << "\n=== Pointer Arithmetic ===" << endl;
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;         // points to first element

    cout << "Array elements via pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(p + i) << endl;
    }

    // ── 3. Pointer and Function (swap) ────────────────────────────────────
    cout << "\n=== Pointer as Function Parameter ===" << endl;
    int a = 5, b = 10;
    cout << "Before: a=" << a << ", b=" << b << endl;

    // Inline swap using pointers
    int *pa = &a, *pb = &b;
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    cout << "After swap: a=" << a << ", b=" << b << endl;

    // ── 4. Dynamic Memory Allocation ─────────────────────────────────────
    cout << "\n=== Dynamic Memory (new / delete) ===" << endl;
    int n;
    cout << "How many grades? ";
    cin >> n;

    int *grades = new int[n];    // allocate n integers on the heap

    for (int i = 0; i < n; i++) {
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grades[i];
    }

    int total = 0;
    for (int i = 0; i < n; i++) total += grades[i];
    cout << "Average: " << (double)total / n << endl;

    delete[] grades;    // ALWAYS free dynamically allocated memory!
    grades = nullptr;   // prevent dangling pointer

    // ── 5. Null Pointer ───────────────────────────────────────────────────
    cout << "\n=== Null Pointer ===" << endl;
    int *nullPtr = nullptr;
    if (nullPtr == nullptr) {
        cout << "Pointer is null — safe to check before dereferencing." << endl;
    }

    return 0;
}
