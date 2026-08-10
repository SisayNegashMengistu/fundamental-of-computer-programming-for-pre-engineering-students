/*
 * Module 08 — Loops and Iteration
 * File: loops_demo.cpp
 * Description: Demonstrates for, while, do-while loops, nested loops,
 *              break, and continue in C++.
 *
 * Compile:  g++ -o loops loops_demo.cpp
 * Run:      ./loops
 */

#include <iostream>
using namespace std;

int main() {
    // ── 1. for Loop ────────────────────────────────────────────────────────
    cout << "=== for Loop: 1 to 5 ===" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // ── 2. while Loop ──────────────────────────────────────────────────────
    cout << "\n=== while Loop: Countdown ===" << endl;
    int count = 5;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << "Go!" << endl;

    // ── 3. do-while Loop ───────────────────────────────────────────────────
    cout << "\n=== do-while: Guess the number ===" << endl;
    int secret = 7, guess;
    do {
        cout << "Guess a number (1-10): ";
        cin >> guess;
        if (guess != secret)
            cout << "Wrong! Try again." << endl;
    } while (guess != secret);
    cout << "Correct! The number was " << secret << endl;

    // ── 4. Nested Loops: Multiplication Table ──────────────────────────────
    cout << "\n=== Nested Loops: 3×3 Multiplication Table ===" << endl;
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            cout << (row * col) << "\t";
        }
        cout << endl;
    }

    // ── 5. break and continue ─────────────────────────────────────────────
    cout << "\n=== break: stop at 4 ===" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 4) break;        // exit loop immediately
        cout << i << " ";
    }
    cout << endl;

    cout << "\n=== continue: skip even numbers ===" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue; // skip this iteration
        cout << i << " ";
    }
    cout << endl;

    // ── 6. Accumulator with Loop: Sum of 1..100 ────────────────────────────
    cout << "\n=== Sum of 1 to 100 ===" << endl;
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "Sum = " << sum << endl;   // Should be 5050

    // ── 7. Star Pattern ────────────────────────────────────────────────────
    cout << "\n=== Star Triangle ===" << endl;
    for (int row = 1; row <= 5; row++) {
        for (int star = 1; star <= row; star++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
