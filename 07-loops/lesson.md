# Lesson 07 – Loops

## 1. Why Loops?

Imagine printing the numbers 1 to 1000 — you cannot write 1000 `cout` statements! Loops let you repeat a block of code automatically.

---

## 2. The `for` Loop

Best when the number of iterations is known in advance.

```cpp
// Syntax
for (initialization; condition; update) {
    // body
}
```

**Example: Print 1 to 10**
```cpp
for (int i = 1; i <= 10; i++) {
    cout << i << " ";
}
// Output: 1 2 3 4 5 6 7 8 9 10
```

**Loop variable scope:** `i` is local to the `for` loop.

---

## 3. The `while` Loop

Best when the number of iterations is not known in advance.

```cpp
// Syntax
while (condition) {
    // body
}
```

**Example: Count down from user input**
```cpp
int n;
cin >> n;
while (n > 0) {
    cout << n << " ";
    n--;
}
```

---

## 4. The `do-while` Loop

Executes the body **at least once**, then checks the condition.

```cpp
// Syntax
do {
    // body (runs at least once)
} while (condition);
```

**Example: Input validation**
```cpp
int score;
do {
    cout << "Enter score (0-100): ";
    cin >> score;
} while (score < 0 || score > 100);
cout << "Valid score: " << score << endl;
```

---

## 5. Choosing the Right Loop

| Loop | Use when |
|------|---------|
| `for` | Number of iterations is known |
| `while` | Loop depends on a condition, may run 0 times |
| `do-while` | Body must execute at least once (e.g., menus, input validation) |

---

## 6. `break` and `continue`

### `break` – exits the loop immediately
```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) break;
    cout << i << " ";
}
// Output: 1 2 3 4
```

### `continue` – skips the rest of the current iteration
```cpp
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) continue;
    cout << i << " ";
}
// Output: 1 3 5 7 9  (odd numbers only)
```

---

## 7. Nested Loops

A loop inside another loop. The inner loop runs completely for each iteration of the outer loop.

```cpp
// Multiplication table (5×5)
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        cout << i * j << "\t";
    }
    cout << "\n";
}
```

---

## 8. Infinite Loops

A loop that never ends (usually a logic error — but sometimes intentional):

```cpp
// Intentional infinite loop (server-style)
while (true) {
    // check for shutdown signal
}

// Common mistake: wrong condition
int i = 0;
while (i >= 0) {  // Always true!
    i++;
}
```

Always ensure your loop has a valid termination condition.

---

## 9. Engineering Example: Sum of Series

Calculate the sum of the first `n` terms of an arithmetic series: `S = 1 + 2 + 3 + ... + n`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of 1 to " << n << " = " << sum << endl;
    return 0;
}
```

---

## 10. Engineering Example: Simpson's Rule Approximation

Approximate the integral of a function using a loop (numerical integration):

```cpp
#include <iostream>
#include <cmath>
using namespace std;

// Integrate f(x) = x^2 from a to b using n trapezoids
int main() {
    double a = 0, b = 1;
    int n = 1000;
    double h = (b - a) / n;
    double area = 0;

    for (int i = 0; i < n; i++) {
        double x = a + i * h;
        area += (x * x) * h;  // height * width of each strip
    }

    cout << "Approximate integral of x^2 from "
         << a << " to " << b << " = " << area << endl;
    return 0;
}
```

---

## Summary

- `for` loops: known iteration count
- `while` loops: condition-based, may run 0 times
- `do-while` loops: runs at least once
- `break` exits a loop; `continue` skips an iteration
- Nested loops handle 2D data (tables, matrices)
- Always ensure loops have a correct termination condition

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 08 – Functions](../08-functions/README.md)
