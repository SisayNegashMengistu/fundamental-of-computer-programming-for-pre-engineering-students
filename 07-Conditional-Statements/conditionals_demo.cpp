/*
 * Module 07 — Conditional Statements
 * File: conditionals_demo.cpp
 * Description: Demonstrates if, if-else, else-if ladder, nested if,
 *              and switch statements in C++.
 *
 * Compile:  g++ -o cond conditionals_demo.cpp
 * Run:      ./cond
 */

#include <iostream>
using namespace std;

int main() {
    // ── 1. Simple if ───────────────────────────────────────────────────────
    cout << "=== Simple if ===" << endl;
    int temperature = 35;
    if (temperature > 30) {
        cout << "It is hot outside." << endl;
    }

    // ── 2. if-else ─────────────────────────────────────────────────────────
    cout << "\n=== if-else ===" << endl;
    int score = 55;
    if (score >= 60) {
        cout << "You passed!" << endl;
    } else {
        cout << "You failed. Study harder!" << endl;
    }

    // ── 3. else-if Ladder (Grade Calculator) ──────────────────────────────
    cout << "\n=== else-if Ladder ===" << endl;
    int marks = 78;
    char grade;
    if      (marks >= 90) grade = 'A';
    else if (marks >= 80) grade = 'B';
    else if (marks >= 70) grade = 'C';
    else if (marks >= 60) grade = 'D';
    else                  grade = 'F';
    cout << "Marks: " << marks << " → Grade: " << grade << endl;

    // ── 4. Nested if ───────────────────────────────────────────────────────
    cout << "\n=== Nested if ===" << endl;
    int age   = 20;
    bool hasID = true;
    if (age >= 18) {
        if (hasID) {
            cout << "Entry allowed." << endl;
        } else {
            cout << "Please show ID." << endl;
        }
    } else {
        cout << "Under age. Entry denied." << endl;
    }

    // ── 5. switch Statement ────────────────────────────────────────────────
    cout << "\n=== switch Statement ===" << endl;
    int day = 3;   // 1 = Monday, 7 = Sunday
    switch (day) {
        case 1:  cout << "Monday"    << endl; break;
        case 2:  cout << "Tuesday"   << endl; break;
        case 3:  cout << "Wednesday" << endl; break;
        case 4:  cout << "Thursday"  << endl; break;
        case 5:  cout << "Friday"    << endl; break;
        case 6:  cout << "Saturday"  << endl; break;
        case 7:  cout << "Sunday"    << endl; break;
        default: cout << "Invalid day number" << endl;
    }

    // ── 6. Logical Operators in Conditions ─────────────────────────────────
    cout << "\n=== Compound Conditions ===" << endl;
    double gpa = 3.8;
    int extracurricular = 2;
    if (gpa >= 3.5 && extracurricular >= 2) {
        cout << "Eligible for scholarship." << endl;
    } else {
        cout << "Not eligible for scholarship." << endl;
    }

    return 0;
}
