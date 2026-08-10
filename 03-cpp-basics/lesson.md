# Lesson 03 – C++ Basics & Program Structure

## 1. Anatomy of a C++ Program

Every C++ program follows the same basic structure:

```cpp
// 1. Preprocessor directives
#include <iostream>

// 2. Namespace declaration
using namespace std;

// 3. Main function
int main() {
    // 4. Program body (statements)
    cout << "Hello!" << endl;

    // 5. Return statement
    return 0;
}
```

---

## 2. Preprocessor Directives

Lines starting with `#` are processed **before** compilation by the **preprocessor**.

### `#include`

Tells the compiler to insert the contents of another file.

```cpp
#include <iostream>   // Standard library header (use angle brackets)
#include "myfile.h"   // Your own header file (use double quotes)
```

**Common standard headers:**

| Header | Purpose |
|--------|---------|
| `<iostream>` | Input/output (`cin`, `cout`) |
| `<cmath>` | Math functions (`sqrt`, `pow`, `sin`) |
| `<cstring>` | C-string functions |
| `<string>` | `std::string` class |
| `<fstream>` | File input/output |
| `<iomanip>` | Output formatting (`setw`, `setprecision`) |
| `<cstdlib>` | General utilities (`rand`, `abs`) |

### `#define`

Defines a named constant (a **macro**):

```cpp
#define PI 3.14159
#define MAX_SIZE 100
```

---

## 3. Namespaces

A **namespace** is a named scope that groups related identifiers to avoid name conflicts.

```cpp
// Without namespace:
std::cout << "Hello" << std::endl;

// With 'using namespace std;':
using namespace std;
cout << "Hello" << endl;
```

For larger programs, it is better practice to write `std::cout` explicitly instead of importing the entire `std` namespace.

---

## 4. The `main()` Function

Every C++ program must have **exactly one** `main()` function. Program execution begins here.

```cpp
int main() {
    // code
    return 0;  // 0 means success; non-zero means error
}
```

`main()` can also accept command-line arguments:

```cpp
int main(int argc, char* argv[]) {
    // argc = number of arguments
    // argv = array of argument strings
    return 0;
}
```

---

## 5. Comments

Comments are ignored by the compiler. They help humans understand the code.

```cpp
// This is a single-line comment

/*
   This is a
   multi-line comment
*/

/**
 * This is a documentation comment (Doxygen style)
 * @param x the input value
 * @return the square of x
 */
```

**Best practices:**
- Comment the *why*, not the *what* (the code already shows what)
- Keep comments up to date when you change code
- Use meaningful variable names to reduce the need for comments

---

## 6. The Compilation Process

```
Source Code (.cpp)
       │
       ▼
  Preprocessor    ← Handles #include, #define
       │
       ▼
   Compiler       ← Translates to object code (.o)
       │
       ▼
    Linker         ← Combines object files + libraries
       │
       ▼
  Executable      ← .exe (Windows) or binary (Linux/macOS)
```

### Common `g++` compiler flags

| Flag | Purpose |
|------|---------|
| `-o output` | Name the output executable |
| `-Wall` | Enable all warnings |
| `-std=c++17` | Use C++17 standard |
| `-g` | Include debug information |

**Example:**
```bash
g++ -Wall -std=c++17 -o program program.cpp
```

---

## 7. Program Formatting and Style

Good code style makes programs easier to read and maintain.

```cpp
// Good style example:
#include <iostream>
using namespace std;

int main() {
    int length = 10;   // side length in meters
    int area = length * length;
    cout << "Area = " << area << " m^2" << endl;
    return 0;
}
```

**Style guidelines:**
- Use consistent indentation (4 spaces is standard)
- Use descriptive variable names (`speed`, not `s`)
- One statement per line
- Opening brace `{` on the same line as the function header
- Leave blank lines between logical sections

---

## Summary

- A C++ program consists of preprocessor directives, namespace declaration, and `main()`
- `#include` brings in library headers; `#define` creates constants
- `using namespace std;` avoids repeatedly writing `std::`
- Comments explain the code to human readers
- The compilation pipeline: preprocess → compile → link → execute
- Always compile with `-Wall` to catch potential issues early

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 04 – Variables, Data Types & Operators](../04-variables-datatypes-operators/README.md)
