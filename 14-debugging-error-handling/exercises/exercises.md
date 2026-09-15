# Exercises – Module 14: Debugging & Error Handling

---

## Exercise 1: Find and Fix the Bugs

The following program has three bugs. Find and fix all of them:

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n = 0) return 1;       // Bug 1
    return n * factorial(n);   // Bug 2
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n
    cout << n << "! = " << factorial(n) << endl;  // Bug 3
    return 0;
}
```

---

## Exercise 2: Exception Handling – Safe Square Root

Write a function `double safeSqrt(double x)` that:
- Throws `invalid_argument` if `x < 0`
- Returns `sqrt(x)` otherwise

Wrap the call in a `try-catch` block.

---

## Exercise 3: Input Validation Loop

Write a program that asks for a student's exam score. Use a loop to keep asking until a valid score (0–100) is entered. Then display a grade classification.

---

## Exercise 4: Defensive Array Access

Write a function `int safeGet(int arr[], int size, int index)` that:
- Returns `arr[index]` if `index` is valid
- Throws `out_of_range` exception if index is out of bounds

Test with valid and invalid indices.

---

## Exercise 5: Debug the Engineering Program

The following program should calculate power from voltage and current (`P = V * I`), but it produces wrong results. Find the bug and fix it:

```cpp
#include <iostream>
using namespace std;
int main() {
    int V = 12, I = 3;
    int P = V * I / 2;   // "average power for AC circuit"
    cout << "Power = " << P << " W" << endl;
    return 0;
}
```

Note: `P = V * I` for DC; the division by 2 is wrong here. But also check the data type — what if V or I were 5 and 3? What would `5/3` give?

---

## Submission

Save as `exercise1.cpp` through `exercise5.cpp`.
