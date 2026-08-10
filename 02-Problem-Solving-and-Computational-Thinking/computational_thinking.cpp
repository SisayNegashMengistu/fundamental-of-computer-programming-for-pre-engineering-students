/*
 * Module 02 — Problem Solving and Computational Thinking
 * File: computational_thinking.cpp
 * Description: Demonstrates decomposition by solving the problem:
 *              "Calculate a student's average grade and letter grade."
 *
 * Compile:  g++ -o ct computational_thinking.cpp
 * Run:      ./ct
 *
 * Expected Output (example input: 85, 90, 78):
 *   Enter grade 1: 85
 *   Enter grade 2: 90
 *   Enter grade 3: 78
 *   Average: 84.33
 *   Letter Grade: B
 */

#include <iostream>
#include <iomanip>   // for setprecision
using namespace std;

// Sub-problem 1: Compute average (abstraction — caller doesn't need to know how)
double computeAverage(double g1, double g2, double g3) {
    return (g1 + g2 + g3) / 3.0;
}

// Sub-problem 2: Convert numeric grade to letter grade
char letterGrade(double avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

int main() {
    double grade1, grade2, grade3;

    // Sub-problem 3: Get inputs from user
    cout << "Enter grade 1: ";
    cin >> grade1;
    cout << "Enter grade 2: ";
    cin >> grade2;
    cout << "Enter grade 3: ";
    cin >> grade3;

    // Sub-problem 4: Compute results
    double avg = computeAverage(grade1, grade2, grade3);
    char lg  = letterGrade(avg);

    // Sub-problem 5: Display results
    cout << fixed << setprecision(2);
    cout << "Average: " << avg << endl;
    cout << "Letter Grade: " << lg << endl;

    return 0;
}
