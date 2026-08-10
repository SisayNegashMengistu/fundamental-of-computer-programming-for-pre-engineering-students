# Lesson 08 – Functions

## 1. Why Functions?

Without functions, you would repeat the same code every time you need it. Functions let you:
- Write code once, use it many times (reusability)
- Break complex problems into manageable pieces (modularity)
- Make programs easier to read, test, and debug

---

## 2. Function Anatomy

```cpp
// Function declaration (prototype)
return_type function_name(parameter_list);

// Function definition
return_type function_name(parameter_list) {
    // body
    return value;
}
```

**Example:**
```cpp
// Declaration
double square(double x);

// Definition
double square(double x) {
    return x * x;
}

// Call
double result = square(5.0);  // result = 25.0
```

---

## 3. Return Types

| Return type | Meaning |
|-------------|---------|
| `int`, `double`, `char`, etc. | Returns a value of that type |
| `void` | Returns nothing |

```cpp
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
    // no return statement needed
}

int add(int a, int b) {
    return a + b;
}
```

---

## 4. Parameters

### Pass by Value (copy)

Changes to the parameter inside the function do NOT affect the original variable.

```cpp
void doubleIt(int x) {
    x = x * 2;   // only changes the local copy
}

int main() {
    int n = 5;
    doubleIt(n);
    cout << n;  // still 5
}
```

### Pass by Reference

Changes to the parameter DO affect the original variable.

```cpp
void doubleIt(int& x) {  // & means "reference"
    x = x * 2;
}

int main() {
    int n = 5;
    doubleIt(n);
    cout << n;  // now 10
}
```

### Pass by Const Reference (large data, read-only)

```cpp
void printName(const string& name) {
    cout << name << endl;
}
```

---

## 5. Function Prototypes

If the function definition comes after `main()`, you need a prototype before `main()`:

```cpp
#include <iostream>
using namespace std;

double area(double radius);  // prototype

int main() {
    cout << area(5.0) << endl;
    return 0;
}

double area(double radius) {
    return 3.14159 * radius * radius;
}
```

---

## 6. Scope of Variables

| Scope | Where declared | Accessible |
|-------|---------------|-----------|
| Local | Inside a function or block | Only in that block |
| Global | Outside all functions | Everywhere in the file |

```cpp
int globalVar = 100;  // global

void myFunc() {
    int localVar = 10;  // local – only exists here
    cout << globalVar;  // OK
}

int main() {
    cout << globalVar;  // OK
    // cout << localVar; // ERROR – out of scope
}
```

Prefer local variables; use global constants (`const`) sparingly.

---

## 7. Function Overloading

Multiple functions with the same name but different parameter lists:

```cpp
double area(double radius) {
    return 3.14159 * radius * radius;  // circle
}

double area(double length, double width) {
    return length * width;  // rectangle
}

double area(double base, double height, bool triangle) {
    return 0.5 * base * height;  // triangle
}
```

---

## 8. Recursion

A function that calls itself. Must have a **base case** to avoid infinite recursion.

```cpp
// Factorial: n! = n × (n-1)!
long long factorial(int n) {
    if (n <= 1) return 1;       // base case
    return n * factorial(n - 1); // recursive case
}
```

**Call trace for `factorial(4)`:**
```
factorial(4) → 4 * factorial(3)
                   → 3 * factorial(2)
                         → 2 * factorial(1)
                               → 1  (base case)
```

---

## 9. Default Parameters

```cpp
void printLine(int count = 30, char ch = '-') {
    for (int i = 0; i < count; i++) cout << ch;
    cout << endl;
}

printLine();        // prints 30 dashes
printLine(10);      // prints 10 dashes
printLine(20, '='); // prints 20 equal signs
```

---

## 10. Engineering Example

```cpp
#include <iostream>
#include <cmath>
using namespace std;

// Calculate stress in a rod: σ = F / A
double stress(double force, double area) {
    return force / area;
}

// Calculate strain: ε = ΔL / L₀
double strain(double deltaL, double L0) {
    return deltaL / L0;
}

// Young's Modulus: E = σ / ε
double youngModulus(double sigma, double epsilon) {
    return sigma / epsilon;
}

int main() {
    double F = 5000.0;   // N
    double A = 0.01;     // m^2
    double dL = 0.002;   // m
    double L  = 1.0;     // m

    double s  = stress(F, A);
    double e  = strain(dL, L);
    double E  = youngModulus(s, e);

    cout << "Stress         = " << s << " Pa" << endl;
    cout << "Strain         = " << e << endl;
    cout << "Young's Modulus= " << E << " Pa" << endl;
    return 0;
}
```

---

## Summary

- Functions organize code into reusable, named blocks
- Function prototype (declaration) must appear before the first call
- Pass by value: caller's variable unchanged; pass by reference: caller's variable changed
- `void` functions return nothing; others must use `return`
- Overloading: same name, different parameters
- Recursion: a function calling itself (always needs a base case)

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 09 – Arrays & Strings](../09-arrays-and-strings/README.md)
