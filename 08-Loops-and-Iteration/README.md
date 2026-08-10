# Module 08 — Loops and Iteration

## 🎯 Learning Objectives

- Use `for`, `while`, and `do-while` loops correctly
- Choose the right loop type for a given problem
- Use `break` and `continue` to control loop flow
- Write nested loops for 2D patterns and tables

---

## 8.1 The `for` Loop

Use when the **number of iterations is known in advance**.

```cpp
for (initialization; condition; update) {
    // body
}
```

```cpp
// Print 1 to 10
for (int i = 1; i <= 10; i++) {
    cout << i << " ";
}
```

---

## 8.2 The `while` Loop

Use when the **number of iterations is not known in advance** and you need to check **before** executing.

```cpp
while (condition) {
    // body
}
```

```cpp
int n = 1;
while (n <= 5) {
    cout << n << " ";
    n++;
}
```

---

## 8.3 The `do-while` Loop

Executes the body **at least once** before checking the condition.

```cpp
do {
    // body
} while (condition);
```

```cpp
// Validates input — keeps asking until valid
int age;
do {
    cout << "Enter age (1-120): ";
    cin >> age;
} while (age < 1 || age > 120);
```

---

## 8.4 Choosing the Right Loop

| Situation | Best Loop |
|-----------|-----------|
| Known number of iterations | `for` |
| Unknown iterations, check first | `while` |
| Must execute at least once | `do-while` |

---

## 8.5 `break` and `continue`

```cpp
// break: immediately exits the loop
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    cout << i;  // prints 0 1 2 3 4
}

// continue: skips the rest of this iteration
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) continue;
    cout << i;  // prints 1 3 5 7 9 (odd numbers only)
}
```

---

## 8.6 Nested Loops

```cpp
// Multiplication table 5×5
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        cout << i * j << "\t";
    }
    cout << endl;
}
```

---

## 8.7 Common Loop Patterns

### Sum / Accumulator

```cpp
int sum = 0;
for (int i = 1; i <= n; i++) sum += i;
```

### Factorial

```cpp
int fact = 1;
for (int i = 1; i <= n; i++) fact *= i;
```

### Find Maximum

```cpp
int max = arr[0];
for (int i = 1; i < n; i++)
    if (arr[i] > max) max = arr[i];
```

---

## 📝 Quiz — Module 08

1. What is the difference between `while` and `do-while`?
2. When would you use `break` inside a loop?
3. What is the output of: `for (int i = 0; i < 5; i += 2) cout << i;`?
4. Write a loop that calculates and prints the factorial of 6.
5. Write nested loops to print a 4×4 matrix of zeros.
6. What is an infinite loop? Give an example and how to fix it.

---

## 🔗 Navigation

⬅️ [Module 07](../07-Conditional-Statements/README.md) | ➡️ [Module 09](../09-Functions-and-Modular-Programming/README.md)
