/*
 * Module 10 — Arrays and Strings
 * File: arrays_strings_demo.cpp
 * Description: Demonstrates 1D arrays, 2D arrays, C-style strings,
 *              std::string operations, and common array algorithms.
 *
 * Compile:  g++ -o arrays arrays_strings_demo.cpp
 * Run:      ./arrays
 */

#include <iostream>
#include <string>
#include <algorithm>  // sort, reverse
using namespace std;

// Function to print an integer array
void printArray(int arr[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << "]" << endl;
}

int main() {
    // ── 1. Declaring and Initializing an Array ────────────────────────────
    cout << "=== 1D Array ===" << endl;
    int scores[5] = {85, 92, 78, 96, 88};
    printArray(scores, 5);

    // Accessing elements by index
    cout << "First: " << scores[0] << ", Last: " << scores[4] << endl;

    // ── 2. Array Traversal and Statistics ────────────────────────────────
    cout << "\n=== Array Statistics ===" << endl;
    int sum = 0, maxVal = scores[0], minVal = scores[0];
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
        if (scores[i] > maxVal) maxVal = scores[i];
        if (scores[i] < minVal) minVal = scores[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "Average: " << (double)sum / 5 << endl;
    cout << "Max: " << maxVal << ", Min: " << minVal << endl;

    // ── 3. Sorting ────────────────────────────────────────────────────────
    cout << "\n=== Sorted Array ===" << endl;
    sort(scores, scores + 5);   // uses std::sort from <algorithm>
    printArray(scores, 5);

    // ── 4. 2D Array (Matrix) ─────────────────────────────────────────────
    cout << "\n=== 2D Array (3x3 Matrix) ===" << endl;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }

    // ── 5. std::string ────────────────────────────────────────────────────
    cout << "\n=== std::string ===" << endl;
    string name = "Sisay Negash";
    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    cout << "Uppercase: ";
    for (char c : name) cout << (char)toupper(c);
    cout << endl;

    // String methods
    cout << "Substring (0,5): " << name.substr(0, 5) << endl;
    cout << "Find 'Negash': index " << name.find("Negash") << endl;
    cout << "Reversed: ";
    string rev = name;
    reverse(rev.begin(), rev.end());
    cout << rev << endl;

    // String concatenation
    string greeting = "Hello, " + name + "!";
    cout << greeting << endl;

    // ── 6. Array of Strings ───────────────────────────────────────────────
    cout << "\n=== Array of Strings ===" << endl;
    string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun"};
    for (int i = 0; i < 6; i++) {
        cout << (i + 1) << ". " << months[i] << endl;
    }

    return 0;
}
