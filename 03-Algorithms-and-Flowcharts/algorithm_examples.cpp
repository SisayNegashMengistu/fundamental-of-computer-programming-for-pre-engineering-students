/*
 * Module 03 — Algorithms and Flowcharts
 * File: algorithm_examples.cpp
 * Description: Implements three classic algorithms:
 *              1. Find the maximum of three numbers
 *              2. Check if a number is prime
 *              3. Simple linear search
 *
 * Compile:  g++ -o algo algorithm_examples.cpp
 * Run:      ./algo
 */

#include <iostream>
using namespace std;

// ─── Algorithm 1: Maximum of three numbers ────────────────────────────────
// Pseudocode:
//   SET max = a
//   IF b > max: SET max = b
//   IF c > max: SET max = c
//   RETURN max
int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// ─── Algorithm 2: Prime check ──────────────────────────────────────────────
// Pseudocode:
//   IF n < 2: NOT prime
//   FOR i = 2 TO sqrt(n):
//       IF n % i == 0: NOT prime
//   RETURN prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;  // divisible → not prime
    }
    return true;
}

// ─── Algorithm 3: Linear Search ───────────────────────────────────────────
// Pseudocode:
//   FOR each element in array:
//       IF element == target: RETURN index
//   RETURN -1 (not found)
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;   // found at index i
    }
    return -1;   // not found
}

int main() {
    // Test Algorithm 1
    cout << "=== Maximum of Three Numbers ===" << endl;
    cout << "Max(4, 9, 6) = " << findMax(4, 9, 6) << endl;

    // Test Algorithm 2
    cout << "\n=== Prime Number Check ===" << endl;
    for (int n : {2, 3, 4, 7, 15, 17}) {
        cout << n << (isPrime(n) ? " is prime" : " is NOT prime") << endl;
    }

    // Test Algorithm 3
    cout << "\n=== Linear Search ===" << endl;
    int data[] = {10, 25, 3, 47, 8, 99};
    int size = 6;
    int target = 47;
    int pos = linearSearch(data, size, target);
    if (pos != -1)
        cout << target << " found at index " << pos << endl;
    else
        cout << target << " not found" << endl;

    return 0;
}
