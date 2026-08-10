# Module 15 — Debugging and Common Programming Errors

## 🎯 Learning Objectives

- Distinguish between syntax, runtime, and logic errors
- Use debugging strategies to isolate and fix bugs
- Recognize and avoid common C++ programming mistakes
- Use compiler warnings as a debugging tool

---

## 15.1 Types of Errors

### Syntax Errors
The code violates the grammar of C++. The **compiler** catches these.

```cpp
// Missing semicolon
int x = 5   // ERROR: expected ';'

// Mismatched braces
if (x > 0) {
    cout << x;
// ERROR: missing closing '}'
```

### Runtime Errors
The code compiles but **crashes** during execution.

```cpp
int arr[5];
cout << arr[10];   // RUNTIME ERROR: array out of bounds

int *p = nullptr;
cout << *p;        // RUNTIME ERROR: null pointer dereference

int x = 5, y = 0;
cout << x / y;     // RUNTIME ERROR: division by zero
```

### Logic Errors
The code runs but produces **wrong results**. The hardest to find!

```cpp
// Intended: calculate average of 5 grades
int sum = 80 + 90 + 70 + 85 + 95;
double avg = sum / 5;    // LOGIC ERROR if sum is done in int and then truncated? No — but:
double avg2 = sum / 4;   // LOGIC ERROR: dividing by 4 instead of 5
```

---

## 15.2 Debugging Strategies

### 1. Read Compiler Error Messages Carefully

```
conditionals_demo.cpp:12:5: error: expected ';' before 'cout'
```
→ Line 12, missing semicolon somewhere before `cout`.

### 2. Print Debug Statements

Insert `cout` statements to trace execution:

```cpp
cout << "DEBUG: reached line 25, x = " << x << endl;
```

### 3. Rubber Duck Debugging

Explain your code line-by-line to an imaginary rubber duck (or a friend). You often spot the bug while explaining.

### 4. Binary Search for Bugs

Comment out half the code to narrow down where the bug is.

### 5. Use a Debugger (gdb / VS Code debugger)

```bash
g++ -g -o program program.cpp    # compile with debug info
gdb ./program                    # start gdb
(gdb) break main                 # set breakpoint
(gdb) run                        # run program
(gdb) next                       # step through line by line
(gdb) print x                    # inspect variable
```

---

## 15.3 Common C++ Mistakes

| Mistake | Example | Fix |
|---------|---------|-----|
| Using `=` instead of `==` | `if (x = 5)` | `if (x == 5)` |
| Off-by-one error | `for (i=0; i<=n; i++)` | `for (i=0; i<n; i++)` |
| Integer division | `double avg = sum / n;` | `double avg = (double)sum / n;` |
| Forgetting `break` in switch | falls through to next case | Add `break;` |
| Using uninitialised variable | `int x; cout << x;` | Always initialise |
| Missing `return` in non-void | omitting `return` | Add `return value;` |
| Array out of bounds | `arr[size]` | Use `arr[size-1]` |
| Memory leak | `new` without `delete` | Pair every `new` with `delete` |
| Forgetting `cin.ignore()` | `getline` reads empty string | Call `cin.ignore()` first |

---

## 15.4 Compiler Warnings as Bugs

Compile with `-Wall -Wextra` to catch common issues:

```bash
g++ -Wall -Wextra -o program program.cpp
```

Common warnings and what they mean:

```
warning: unused variable 'x'           → variable declared but never used
warning: comparison between signed and unsigned  → mixing int and size_t
warning: 'x' may be used uninitialized → dangerous! always initialize
```

---

## 15.5 Example: Spotting and Fixing a Bug

**Buggy Code:**
```cpp
// Find the sum of even numbers from 1 to 10
int sum = 0;
for (int i = 1; i <= 10; i++) {
    if (i % 2 = 0)      // BUG: = should be ==
        sum = sum + i;
}
cout << "Sum of evens: " << sum << endl;
```

**Fixed Code:**
```cpp
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0)     // Fixed: use == for comparison
        sum += i;
}
```

---

## 📝 Quiz — Module 15

1. What are the three types of programming errors?
2. Which type of error does the compiler catch?
3. What does compiling with `-g` do?
4. What is an off-by-one error? Give an example.
5. Why is `if (x = 5)` a bug?
6. What is the purpose of `-Wall` when compiling?

---

## 🔗 Navigation

⬅️ [Module 14](../14-Object-Oriented-Programming/README.md) | ➡️ [Module 16](../16-Practical-Exercises-and-Challenges/README.md)
