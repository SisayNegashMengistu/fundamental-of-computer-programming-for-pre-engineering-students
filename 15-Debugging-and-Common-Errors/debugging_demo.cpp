/*
 * Module 15 — Debugging and Common Errors
 * File: debugging_demo.cpp
 * Description: Shows examples of buggy code and the corrected versions,
 *              demonstrating common C++ programming mistakes.
 *
 * Compile:  g++ -Wall -Wextra -o debug debugging_demo.cpp
 * Run:      ./debug
 */

#include <iostream>
#include <string>
using namespace std;

// ─── Demo 1: Integer Division Bug ─────────────────────────────────────────
void integerDivisionDemo() {
    cout << "=== Integer Division Bug ===" << endl;

    int total = 75 + 80 + 90;

    // BUG: integer division truncates
    double wrong_avg = total / 3;    // 245 / 3 = 81 (truncated)

    // FIX: cast to double before dividing
    double correct_avg = (double)total / 3;

    cout << "Wrong  average: " << wrong_avg   << endl;  // 81
    cout << "Correct average: " << correct_avg << endl; // 81.67
}

// ─── Demo 2: Off-By-One Error ─────────────────────────────────────────────
void offByOneDemo() {
    cout << "\n=== Off-By-One Error ===" << endl;

    int arr[5] = {10, 20, 30, 40, 50};

    // BUG: i <= 5 accesses arr[5] which is out of bounds!
    // for (int i = 0; i <= 5; i++) cout << arr[i];

    // FIX: use i < 5
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ─── Demo 3: Uninitialized Variable ───────────────────────────────────────
void uninitializedDemo() {
    cout << "\n=== Uninitialized Variable ===" << endl;

    // BUG: using x before giving it a value is undefined behavior
    // int x;
    // cout << x;   // undefined — could print garbage!

    // FIX: always initialize
    int x = 0;
    cout << "Initialized x = " << x << endl;
}

// ─── Demo 4: Assignment vs Comparison in if ───────────────────────────────
void assignmentVsComparisonDemo() {
    cout << "\n=== Assignment in if Condition ===" << endl;

    int score = 85;

    // BUG: if (score = 100) always assigns 100 and evaluates to true!
    // if (score = 100) { cout << "100!" << endl; }

    // FIX: use == for comparison
    if (score == 100) {
        cout << "Perfect score!" << endl;
    } else {
        cout << "Score: " << score << " (not 100)" << endl;
    }
}

// ─── Demo 5: Missing break in switch ──────────────────────────────────────
void switchFallthroughDemo() {
    cout << "\n=== switch Fall-Through ===" << endl;
    int day = 2;

    // Without break, case 2 falls through to case 3
    cout << "Buggy (no break):" << endl;
    switch (day) {
        case 1: cout << "Monday" << endl;   // intentional fallthrough (bug demo)
                [[fallthrough]];
        case 2: cout << "Tuesday" << endl;  // falls through!
        case 3: cout << "Wednesday" << endl;
        break;
        default: cout << "Other" << endl;
    }

    // Fixed: each case has break
    cout << "Fixed (with break):" << endl;
    switch (day) {
        case 1: cout << "Monday"    << endl; break;
        case 2: cout << "Tuesday"   << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        default: cout << "Other"    << endl;
    }
}

int main() {
    integerDivisionDemo();
    offByOneDemo();
    uninitializedDemo();
    assignmentVsComparisonDemo();
    switchFallthroughDemo();
    return 0;
}
