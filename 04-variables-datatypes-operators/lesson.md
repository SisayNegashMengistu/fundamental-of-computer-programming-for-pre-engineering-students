# Lesson 04 – Variables, Data Types & Operators

## 1. Variables

A **variable** is a named location in memory that stores a value. In C++, every variable must be declared with a data type before use.

```cpp
// Syntax: data_type variable_name = initial_value;
int age = 21;
double temperature = 36.6;
char grade = 'A';
bool isValid = true;
```

### Variable Naming Rules

- Must start with a letter or underscore (`_`)
- Can contain letters, digits, and underscores
- Case-sensitive (`speed` ≠ `Speed`)
- Cannot use reserved keywords (`int`, `for`, `if`, etc.)

**Good names:** `velocity`, `studentCount`, `maxPressure`  
**Poor names:** `x`, `temp2`, `a1b2`

---

## 2. Fundamental Data Types

| Type | Size | Range | Example |
|------|------|-------|---------|
| `int` | 4 bytes | −2,147,483,648 to 2,147,483,647 | `int count = 10;` |
| `short` | 2 bytes | −32,768 to 32,767 | `short day = 365;` |
| `long` | 4–8 bytes | larger range than int | `long population = 1000000L;` |
| `float` | 4 bytes | ~7 significant digits | `float ratio = 1.5f;` |
| `double` | 8 bytes | ~15 significant digits | `double pi = 3.14159;` |
| `char` | 1 byte | single character | `char grade = 'B';` |
| `bool` | 1 byte | `true` (1) or `false` (0) | `bool passed = true;` |

**Engineering tip:** Use `double` for scientific calculations — it is more precise than `float`.

---

## 3. Constants

Use `const` to declare a value that should never change:

```cpp
const double GRAVITY = 9.81;      // m/s²
const double SPEED_OF_LIGHT = 3e8; // m/s
const int MAX_STUDENTS = 50;
```

---

## 4. Arithmetic Operators

| Operator | Operation | Example | Result |
|----------|-----------|---------|--------|
| `+` | Addition | `5 + 3` | `8` |
| `-` | Subtraction | `10 - 4` | `6` |
| `*` | Multiplication | `3 * 4` | `12` |
| `/` | Division | `10 / 3` | `3` (integer division) |
| `%` | Modulus (remainder) | `10 % 3` | `1` |

**Integer vs. floating-point division:**
```cpp
int a = 10, b = 3;
cout << a / b;         // Output: 3  (truncated)
cout << (double)a / b; // Output: 3.33333 (type cast)
```

---

## 5. Relational (Comparison) Operators

Used to compare two values. The result is `true` or `false`.

| Operator | Meaning | Example |
|----------|---------|---------|
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |
| `<` | Less than | `a < b` |
| `>` | Greater than | `a > b` |
| `<=` | Less than or equal | `a <= b` |
| `>=` | Greater than or equal | `a >= b` |

---

## 6. Logical Operators

Used to combine multiple conditions.

| Operator | Meaning | Example | Result |
|----------|---------|---------|--------|
| `&&` | AND – both must be true | `(a > 0) && (b > 0)` | true if both positive |
| `\|\|` | OR – at least one true | `(a > 0) \|\| (b > 0)` | true if either positive |
| `!` | NOT – reverses value | `!(a == b)` | true if a ≠ b |

---

## 7. Assignment Operators

| Operator | Equivalent to | Example |
|----------|--------------|---------|
| `=` | Assign | `x = 5` |
| `+=` | `x = x + n` | `x += 3` |
| `-=` | `x = x - n` | `x -= 2` |
| `*=` | `x = x * n` | `x *= 4` |
| `/=` | `x = x / n` | `x /= 2` |
| `%=` | `x = x % n` | `x %= 3` |

---

## 8. Increment & Decrement Operators

```cpp
int x = 5;
x++;   // post-increment: use x, then add 1
++x;   // pre-increment: add 1, then use x
x--;   // post-decrement
--x;   // pre-decrement
```

---

## 9. Type Casting

Convert a variable from one type to another:

```cpp
int a = 7, b = 2;

// C-style cast:
double result = (double)a / b;    // 3.5

// C++ style cast:
double result2 = static_cast<double>(a) / b;  // 3.5
```

---

## 10. Operator Precedence

Higher precedence is evaluated first (similar to mathematics):

| Precedence | Operators |
|------------|-----------|
| 1 (highest) | `++`, `--`, `!` (unary) |
| 2 | `*`, `/`, `%` |
| 3 | `+`, `-` |
| 4 | `<`, `>`, `<=`, `>=` |
| 5 | `==`, `!=` |
| 6 | `&&` |
| 7 | `\|\|` |
| 8 (lowest) | `=`, `+=`, `-=`, etc. |

Use parentheses `()` to make precedence explicit.

---

## 11. Engineering Example: Kinetic Energy

**Formula:** `KE = 0.5 × m × v²`

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double mass, velocity, kineticEnergy;
    cout << "Enter mass (kg): ";
    cin >> mass;
    cout << "Enter velocity (m/s): ";
    cin >> velocity;
    kineticEnergy = 0.5 * mass * pow(velocity, 2);
    cout << "Kinetic Energy = " << kineticEnergy << " J" << endl;
    return 0;
}
```

---

## Summary

- Variables store data in named memory locations
- C++ has several primitive types: `int`, `double`, `char`, `bool`, `float`
- Use `const` for values that should not change
- Arithmetic, relational, logical, and assignment operators perform different operations
- Use `static_cast<>` or `(type)` for explicit type conversion
- Operator precedence determines evaluation order; use parentheses for clarity

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 05 – Input & Output](../05-input-output/README.md)
