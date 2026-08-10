# Module 04 — Variables, Constants, and Data Types

## 🎯 Learning Objectives

- Declare and initialize variables in C++
- Understand the difference between variables and constants
- Identify and use the fundamental C++ data types
- Understand memory sizes and value ranges

---

## 4.1 Variables

A **variable** is a named storage location in memory that holds a value which can change during program execution.

### Syntax

```cpp
data_type variable_name;               // Declaration
data_type variable_name = value;       // Declaration + Initialization
```

### Rules for Variable Names
- Must start with a letter or underscore (`_`)
- Can contain letters, digits, and underscores
- **Case-sensitive**: `age` and `Age` are different
- Cannot be a C++ keyword (`int`, `for`, `return`, ...)

```cpp
int age = 20;           // Valid
double gpa = 3.75;      // Valid
char grade = 'A';       // Valid
// int 2name = 5;       // Invalid: starts with a digit
// int for = 5;         // Invalid: 'for' is a keyword
```

---

## 4.2 Constants

A **constant** is a value that cannot be changed after it is set.

### Method 1: `const` keyword

```cpp
const double PI = 3.14159265;
const int MAX_STUDENTS = 50;
```

### Method 2: `#define` preprocessor directive

```cpp
#define GRAVITY 9.81
#define SPEED_OF_LIGHT 299792458
```

> ✅ Prefer `const` over `#define` — it is type-safe and respects scope.

---

## 4.3 Fundamental Data Types

| Type | Size (typical) | Range | Example |
|------|---------------|-------|---------|
| `int` | 4 bytes | −2,147,483,648 to 2,147,483,647 | `int score = 95;` |
| `long` | 4–8 bytes | larger range | `long pop = 8000000000L;` |
| `float` | 4 bytes | ±3.4 × 10³⁸ (7 digits precision) | `float temp = 36.6f;` |
| `double` | 8 bytes | ±1.7 × 10³⁰⁸ (15 digits precision) | `double pi = 3.14159;` |
| `char` | 1 byte | 0–255 (ASCII) | `char letter = 'A';` |
| `bool` | 1 byte | `true` or `false` | `bool pass = true;` |
| `string` | varies | text | `string name = "Sisay";` |

> Note: Actual sizes may vary by platform. Use `sizeof(type)` to check.

---

## 4.4 Type Modifiers

```cpp
unsigned int count = 0;      // Only non-negative values (0 to 4,294,967,295)
short int small = 100;       // Smaller range, less memory
long long bigNum = 9876543210LL;  // Very large integers
```

---

## 4.5 Type Conversion

### Implicit (Automatic)
```cpp
int a = 5;
double b = a;    // int automatically converted to double → b = 5.0
```

### Explicit (Casting)
```cpp
double x = 9.7;
int y = (int)x;   // Truncates decimal → y = 9
```

---

## 4.6 Scope of Variables

```cpp
int globalVar = 10;    // Global: accessible everywhere

int main() {
    int localVar = 5;  // Local: only inside main()
    {
        int blockVar = 2;  // Block: only inside this { }
    }
    // blockVar is NOT accessible here
    return 0;
}
```

---

## 4.7 Example Program

See `variables_demo.cpp` in this folder.

**Expected Output:**
```
=== Variable and Data Type Demo ===
Student Name  : Sisay
Age           : 20
GPA           : 3.75
Grade         : A
Passed?       : 1 (true)
PI (constant) : 3.14159
Size of int   : 4 bytes
Size of double: 8 bytes
```

---

## 📝 Quiz — Module 04

1. What is the difference between a **variable** and a **constant**?
2. What data type would you use to store: a student's GPA? a student's ID number? the first letter of a name?
3. What is the output of: `int x = 7; double y = x / 2;`? Explain why.
4. What are the rules for naming variables?
5. What does `sizeof(int)` do?
6. Declare a constant for the value of gravity (9.81 m/s²) using both `const` and `#define`.

---

## 🔗 Navigation

⬅️ [Module 03](../03-Algorithms-and-Flowcharts/README.md) | ➡️ [Module 05](../05-Operators-and-Expressions/README.md)
