# Lesson 06 – Conditional Statements

## 1. The `if` Statement

Executes a block of code only if a condition is `true`.

```cpp
if (condition) {
    // code to execute if condition is true
}
```

**Example:**
```cpp
int speed = 120;
if (speed > 100) {
    cout << "Warning: Excessive speed!" << endl;
}
```

---

## 2. The `if-else` Statement

Provides an alternative block when the condition is `false`.

```cpp
if (condition) {
    // executes when true
} else {
    // executes when false
}
```

**Example: Pass or Fail**
```cpp
int score;
cin >> score;
if (score >= 50) {
    cout << "PASS" << endl;
} else {
    cout << "FAIL" << endl;
}
```

---

## 3. The `if-else if-else` Ladder

Used to check multiple conditions in sequence.

```cpp
if (condition1) {
    // ...
} else if (condition2) {
    // ...
} else if (condition3) {
    // ...
} else {
    // none matched
}
```

**Example: Grade Classification**
```cpp
int score;
cin >> score;
if (score >= 90) {
    cout << "A – Excellent" << endl;
} else if (score >= 80) {
    cout << "B – Very Good" << endl;
} else if (score >= 70) {
    cout << "C – Good" << endl;
} else if (score >= 60) {
    cout << "D – Satisfactory" << endl;
} else {
    cout << "F – Fail" << endl;
}
```

---

## 4. Nested `if` Statements

You can place `if` statements inside other `if` blocks.

```cpp
int temperature = 35;
bool isRaining = false;

if (temperature > 30) {
    if (!isRaining) {
        cout << "Hot and sunny – stay hydrated!" << endl;
    } else {
        cout << "Hot and rainy – take an umbrella!" << endl;
    }
}
```

Keep nesting to a minimum for readability (maximum 2–3 levels).

---

## 5. The `switch` Statement

Efficient for testing a single variable against many constant values.

```cpp
switch (expression) {
    case value1:
        // ...
        break;
    case value2:
        // ...
        break;
    default:
        // none matched
}
```

**Example: Day of Week**
```cpp
int day;
cin >> day;
switch (day) {
    case 1: cout << "Monday";    break;
    case 2: cout << "Tuesday";   break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday";  break;
    case 5: cout << "Friday";    break;
    case 6: cout << "Saturday";  break;
    case 7: cout << "Sunday";    break;
    default: cout << "Invalid day";
}
```

**Important:** Always include `break` to prevent **fall-through** (execution continuing into the next case).

---

## 6. The Ternary (Conditional) Operator

A compact form of `if-else`:

```cpp
// Syntax: condition ? value_if_true : value_if_false
int x = 10, y = 20;
int max = (x > y) ? x : y;
cout << "Max = " << max << endl;  // Max = 20
```

---

## 7. Combining Conditions

```cpp
double voltage = 5.0;
double current = 2.5;

if (voltage > 0 && current > 0) {
    double power = voltage * current;
    cout << "Power = " << power << " W" << endl;
} else {
    cout << "Invalid circuit values." << endl;
}
```

---

## 8. Engineering Example: Safety Check

```cpp
#include <iostream>
using namespace std;

int main() {
    double load, capacity;
    cout << "Enter applied load (kN)  : ";
    cin >> load;
    cout << "Enter beam capacity (kN) : ";
    cin >> capacity;

    double safetyFactor = capacity / load;

    if (safetyFactor >= 2.0) {
        cout << "SAFE – Safety factor: " << safetyFactor << endl;
    } else if (safetyFactor >= 1.0) {
        cout << "MARGINAL – Safety factor: " << safetyFactor << endl;
    } else {
        cout << "UNSAFE – Safety factor: " << safetyFactor << endl;
    }
    return 0;
}
```

---

## Summary

- `if` executes code when a condition is true
- `if-else` provides an alternative when false
- `if-else if-else` chains check multiple conditions
- `switch` efficiently handles multi-way branching on a single value
- The ternary operator `?:` is a compact one-line `if-else`
- Use `&&`, `||`, `!` to combine conditions

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 07 – Loops](../07-loops/README.md)
