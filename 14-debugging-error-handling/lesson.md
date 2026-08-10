# Lesson 14 – Debugging & Error Handling

## 1. Types of Errors

| Type | When It Appears | Example |
|------|----------------|---------|
| **Syntax error** | Compile time | Missing `;`, misspelled keyword |
| **Runtime error** | During execution | Division by zero, out-of-bounds access |
| **Logic error** | Wrong output | Wrong formula, off-by-one loop |

Syntax errors prevent compilation. Runtime and logic errors are harder to detect.

---

## 2. Syntax Errors – Compiler as Your Friend

The compiler tells you exactly where syntax errors are. Always read error messages carefully.

**Buggy code:**
```cpp
int main() {
    int x = 5
    cout << x << endl;   // ERROR on previous line: missing ;
    return 0;
}
```

**Compiler message:**
```
error: expected ';' after expression
    int x = 5
```

**Fix:** Add the missing semicolon.

**Compile with warnings enabled:**
```bash
g++ -Wall -Wextra -std=c++17 -o prog prog.cpp
```

---

## 3. Logic Errors – Test Your Code

Logic errors produce incorrect output but no crash. Use test cases to find them.

**Buggy code (wrong average):**
```cpp
int a = 10, b = 20, c = 30;
double avg = a + b + c / 3;   // WRONG: operator precedence!
cout << avg;  // prints 40, not 20
```

**Fix:**
```cpp
double avg = (a + b + c) / 3.0;
```

**Debugging with print statements:**
```cpp
cout << "DEBUG: sum = " << (a + b + c) << endl;  // temporary
```

Remove all debug prints before submitting or releasing code.

---

## 4. Runtime Errors – Common Causes

| Runtime Error | Cause | Prevention |
|--------------|-------|-----------|
| Division by zero | `x / 0` | Check divisor before dividing |
| Array out of bounds | `arr[10]` on `arr[5]` | Validate indices |
| Null pointer dereference | `*nullptr` | Initialize and check pointers |
| Stack overflow | Infinite recursion | Ensure base case exists |
| File not found | Missing file | Check `if (!file)` |

---

## 5. `assert()` – Catch Assumptions Early

```cpp
#include <cassert>

double divide(double a, double b) {
    assert(b != 0);  // program aborts with message if false
    return a / b;
}
```

Use assertions to verify assumptions during development. Disable in release builds with `#define NDEBUG`.

---

## 6. Exception Handling

C++ exception handling uses `try`, `throw`, and `catch`:

```cpp
#include <iostream>
#include <stdexcept>
using namespace std;

double safeDivide(double a, double b) {
    if (b == 0)
        throw invalid_argument("Division by zero!");
    return a / b;
}

int main() {
    try {
        double result = safeDivide(10.0, 0.0);
        cout << result << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
```

### Standard Exception Classes

| Exception | Use Case |
|-----------|---------|
| `std::exception` | Base class |
| `std::invalid_argument` | Bad argument value |
| `std::out_of_range` | Index/value out of range |
| `std::runtime_error` | General runtime error |
| `std::overflow_error` | Arithmetic overflow |

---

## 7. Defensive Programming Practices

1. **Validate all inputs** before using them
2. **Check function return values** (file open, etc.)
3. **Initialize variables** — never assume a default value
4. **Use meaningful variable names** — reduces logic errors
5. **Test boundary conditions** (0, negative, max values)
6. **Use `const`** when a variable should not change
7. **Keep functions small** — easier to test and debug

---

## 8. Engineering Example: Safe Velocity Calculator

```cpp
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

// v = sqrt(2 * KE / m) from kinetic energy
double velocityFromKE(double kineticEnergy, double mass) {
    if (mass <= 0)
        throw invalid_argument("Mass must be positive.");
    if (kineticEnergy < 0)
        throw invalid_argument("Kinetic energy cannot be negative.");

    return sqrt(2.0 * kineticEnergy / mass);
}

int main() {
    double ke, m;
    cout << "Kinetic energy (J): ";
    cin >> ke;
    cout << "Mass (kg)         : ";
    cin >> m;

    try {
        double v = velocityFromKE(ke, m);
        cout << "Velocity = " << v << " m/s" << endl;
    } catch (const invalid_argument& e) {
        cerr << "Input Error: " << e.what() << endl;
    }

    return 0;
}
```

---

## 9. Debugging Checklist

When your program has a bug:

- [ ] Read the compiler error message and fix the indicated line
- [ ] Check your formula or algorithm against a manual calculation
- [ ] Trace through your code line by line (mentally or with print statements)
- [ ] Check array indices (off-by-one errors are very common)
- [ ] Verify that all variables are initialized
- [ ] Test with simple, known inputs first
- [ ] Test with edge cases: 0, negative numbers, empty arrays

---

## Summary

- Three error types: syntax (compile time), runtime, logic
- Compile with `-Wall -Wextra` to catch warnings early
- Use `assert()` for internal consistency checks during development
- Use `try`/`catch`/`throw` for runtime error handling
- Write defensive code: validate inputs, check return values, initialize variables

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Apply your skills in [Module 15 – Projects](../15-projects/README.md)
