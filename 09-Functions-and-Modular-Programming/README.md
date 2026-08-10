# Module 09 — Functions and Modular Programming

## 🎯 Learning Objectives

- Define and call functions with parameters and return values
- Understand function declaration (prototype) vs definition
- Distinguish between pass-by-value and pass-by-reference
- Write recursive functions
- Understand function scope and local variables

---

## 9.1 Why Functions?

Functions allow us to:
- **Reuse** code without repeating it
- **Organize** a large program into smaller pieces
- **Test** individual pieces independently
- Make programs **easier to read** and maintain

---

## 9.2 Function Anatomy

```cpp
return_type function_name(parameter_list) {
    // body
    return value;   // if return_type != void
}
```

```cpp
// Function that adds two numbers
int add(int a, int b) {
    return a + b;
}

// Calling the function
int result = add(3, 5);   // result = 8
```

---

## 9.3 Function Prototypes

Always declare the function **before** `main()` so the compiler knows its signature:

```cpp
double circleArea(double r);   // prototype

int main() {
    cout << circleArea(5.0);   // can call before definition
}

double circleArea(double r) {  // definition below main
    return 3.14159 * r * r;
}
```

---

## 9.4 void Functions

A function with no return value uses `void`:

```cpp
void printLine(int n) {
    for (int i = 0; i < n; i++) cout << "-";
    cout << endl;
}
// Called as: printLine(20);
```

---

## 9.5 Pass-by-Value vs Pass-by-Reference

### Pass-by-Value (default)
The function gets a **copy** — the original is unchanged:
```cpp
void doubleIt(int x) { x *= 2; }   // only affects local copy
```

### Pass-by-Reference (`&`)
The function works on the **original** variable:
```cpp
void doubleIt(int &x) { x *= 2; }  // modifies original
```

---

## 9.6 Recursion

A function that calls **itself** is recursive. Every recursive function needs:
1. A **base case** (stops the recursion)
2. A **recursive case** (moves toward the base case)

```cpp
// Factorial: n! = n * (n-1)!
int factorial(int n) {
    if (n <= 1) return 1;            // base case
    return n * factorial(n - 1);    // recursive case
}
```

---

## 9.7 Local vs Global Variables

```cpp
int globalCounter = 0;      // global: accessible everywhere

void increment() {
    globalCounter++;        // modifies global
    int localX = 5;         // local: dies when function ends
}
```

> ✅ Prefer local variables; use globals sparingly.

---

## 📝 Quiz — Module 09

1. What is the purpose of a function prototype?
2. What is the difference between pass-by-value and pass-by-reference?
3. Write a recursive function to compute the nth Fibonacci number.
4. What is a `void` function? Give an example.
5. What is a local variable? How does it differ from a global variable?
6. What happens if a recursive function has no base case?

---

## 🔗 Navigation

⬅️ [Module 08](../08-Loops-and-Iteration/README.md) | ➡️ [Module 10](../10-Arrays-and-Strings/README.md)
