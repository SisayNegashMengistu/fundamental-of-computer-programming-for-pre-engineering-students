# Module 07 — Conditional Statements

## 🎯 Learning Objectives

- Use `if`, `if-else`, and `else-if` for decision making
- Use nested `if` statements for complex conditions
- Use `switch` for multi-way branching
- Combine conditions with logical operators

---

## 7.1 Simple `if`

```cpp
if (condition) {
    // executed only if condition is true
}
```

```cpp
int speed = 120;
if (speed > 100) {
    cout << "Speeding! Slow down." << endl;
}
```

---

## 7.2 `if-else`

```cpp
if (condition) {
    // true branch
} else {
    // false branch
}
```

```cpp
int temperature = 25;
if (temperature > 30)
    cout << "Hot" << endl;
else
    cout << "Comfortable" << endl;
```

---

## 7.3 `else-if` Ladder

Used when there are **multiple mutually exclusive conditions**:

```cpp
int score = 78;
if      (score >= 90) cout << "A";
else if (score >= 80) cout << "B";
else if (score >= 70) cout << "C";
else if (score >= 60) cout << "D";
else                  cout << "F";
```

---

## 7.4 Nested `if`

```cpp
if (outer_condition) {
    if (inner_condition) {
        // both true
    }
}
```

> ⚠️ Avoid deeply nested `if` statements — they reduce readability. Consider using `&&` instead.

---

## 7.5 `switch` Statement

Best for checking a single variable against **discrete constant values**:

```cpp
switch (expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // if no case matches
}
```

> ⚠️ Always include `break` — without it, execution "falls through" to the next case.

**Example:**
```cpp
char grade = 'B';
switch (grade) {
    case 'A': cout << "Excellent"; break;
    case 'B': cout << "Good";      break;
    case 'C': cout << "Average";   break;
    default:  cout << "Below average";
}
```

---

## 7.6 Compound Conditions

```cpp
// AND: both must be true
if (age >= 18 && hasID) { ... }

// OR: at least one must be true
if (day == 6 || day == 7) { cout << "Weekend"; }

// NOT
if (!isLoggedIn) { cout << "Please log in"; }
```

---

## 📝 Quiz — Module 07

1. What is the difference between `if-else` and `switch`?
2. What happens if you forget `break` in a `switch` statement?
3. Write a program that reads a number and prints whether it is positive, negative, or zero.
4. Write an `else-if` ladder to convert a percentage score to a letter grade.
5. What does `(x > 0 && x < 100)` evaluate to if `x = 50`?

---

## 🔗 Navigation

⬅️ [Module 06](../06-Input-and-Output/README.md) | ➡️ [Module 08](../08-Loops-and-Iteration/README.md)
