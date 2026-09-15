# Lesson 01 – Introduction to Programming

## 1. What is a Computer Program?

A **computer program** is a set of instructions written in a programming language that tells a computer what to do. Just as a recipe tells a chef how to prepare a dish, a program tells the computer exactly how to perform a task — step by step.

Programs are used everywhere: in smartphones, cars, medical devices, video games, websites, and engineering simulations.

---

## 2. Brief History of Programming Languages

| Generation | Era | Example | Description |
|------------|-----|---------|-------------|
| 1st | 1940s | Machine code | Raw binary (0s and 1s) |
| 2nd | 1950s | Assembly | Human-readable mnemonics for machine code |
| 3rd | 1960s–now | C, C++, Java | High-level, portable languages |
| 4th | 1980s–now | SQL, MATLAB | Domain-specific, closer to natural language |
| 5th | 1990s–now | Prolog | Logic and AI-oriented |

**C++**, the language used in this course, is a powerful third-generation language created by Bjarne Stroustrup in 1979 as an extension of C.

---

## 3. How a Computer Works

A computer has five main components:

```
Input → CPU (Process) → Output
         ↕
       Memory (RAM)
         ↕
       Storage (HDD/SSD)
```

- **Input devices**: keyboard, mouse, sensors
- **CPU (Central Processing Unit)**: executes instructions
- **Memory (RAM)**: temporary storage while the program runs
- **Storage**: permanent storage (hard disk, SSD)
- **Output devices**: monitor, printer, actuators

When you run a C++ program, the CPU reads instructions one by one from memory and executes them at millions of operations per second.

---

## 4. Programming Languages: Compiled vs. Interpreted

| Feature | Compiled (e.g., C++) | Interpreted (e.g., Python) |
|---------|---------------------|---------------------------|
| Translation | Done before running | Done line-by-line at runtime |
| Speed | Generally faster | Generally slower |
| Error detection | At compile time | Often at runtime |
| Portability | Compiled binary is OS-specific | Source runs anywhere with interpreter |

**C++ is a compiled language.** You write source code (`.cpp` files), then compile it into an executable (`.exe` on Windows, or a binary on Linux/macOS).

---

## 5. The Software Development Process

Good programmers follow a structured process:

1. **Problem Analysis** – Understand what the program must do
2. **Design** – Plan the solution (algorithms, flowcharts)
3. **Coding** – Write the source code
4. **Compilation** – Translate source code to executable
5. **Testing** – Check that the program works correctly
6. **Debugging** – Find and fix errors
7. **Maintenance** – Update and improve the program over time

---

## 6. Your First Look at C++

Here is the simplest C++ program:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

**Line-by-line explanation:**

| Line | Meaning |
|------|---------|
| `#include <iostream>` | Include the input/output library |
| `using namespace std;` | Use the standard namespace (avoids writing `std::cout`) |
| `int main()` | The starting point of every C++ program |
| `cout << "Hello, World!" << endl;` | Print text to the screen |
| `return 0;` | Tell the operating system the program finished successfully |

---

## 7. Compiling and Running Your Program

**Step 1:** Save the code in a file called `hello.cpp`

**Step 2:** Open a terminal and compile:
```bash
g++ -o hello hello.cpp
```

**Step 3:** Run the program:
```bash
./hello          # Linux/macOS
hello.exe        # Windows
```

**Expected output:**
```
Hello, World!
```

---

## 8. Types of Errors in Programming

You will encounter three types of errors:

| Type | When detected | Example |
|------|--------------|---------|
| **Syntax error** | At compile time | Missing semicolon `;` |
| **Runtime error** | While running | Dividing by zero |
| **Logic error** | In program output | Wrong formula produces wrong result |

Don't be discouraged by errors — they are a normal part of programming!

---

## Summary

- A program is a sequence of instructions a computer can execute.
- C++ is a compiled, high-level, general-purpose programming language.
- Every C++ program starts with `main()`.
- The development process: analyze → design → code → compile → test → debug → maintain.

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 02 – Problem Solving & Algorithms](../02-problem-solving-and-algorithms/README.md)
