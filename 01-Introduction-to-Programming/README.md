# Module 01 — Introduction to Computer Programming

## 🎯 Learning Objectives

By the end of this module, you will be able to:
- Define what a computer program is
- Describe the history and importance of programming
- Identify the basic components of a computer
- Set up a C++ development environment
- Write and run your first C++ program

---

## 1.1 What Is a Computer Program?

A **computer program** is a set of instructions that tells a computer what to do. Programs are written in **programming languages** — formal languages that humans use to communicate with machines.

Examples of things programs do:
- Calculate and display results (calculator app)
- Process and store data (banking system)
- Control hardware (embedded systems in cars)

---

## 1.2 Brief History of Programming

| Era | Milestone |
|-----|-----------|
| 1940s | Machine language — programs written in binary (0s and 1s) |
| 1950s | Assembly language — mnemonics replace binary codes |
| 1960s | High-level languages: FORTRAN, COBOL |
| 1970s | C language created at Bell Labs |
| 1980s | C++ extends C with object-oriented features |
| 1990s–now | Java, Python, JavaScript, and many more |

---

## 1.3 Why C++?

C++ is an excellent first language because:
- It teaches **fundamental concepts** that apply to almost every language
- It is **widely used** in engineering, game development, and systems programming
- It gives insight into how **memory and hardware** work
- It is **fast and efficient**

---

## 1.4 Basic Computer Components

```
                  ┌─────────────┐
    Input ───────►│     CPU     │───────► Output
   (Keyboard)     │  (Process)  │        (Screen)
                  └──────┬──────┘
                         │
                    ┌─────▼─────┐
                    │  Memory   │
                    │ (RAM/ROM) │
                    └───────────┘
```

- **CPU** (Central Processing Unit): The "brain" — executes instructions
- **Memory (RAM)**: Temporary storage used while the program runs
- **Storage (HDD/SSD)**: Permanent storage for files and programs
- **Input devices**: Keyboard, mouse
- **Output devices**: Monitor, printer

---

## 1.5 How a C++ Program Works

```
Source Code (.cpp)
       │
       ▼
   Compiler (g++)
       │
       ▼
  Machine Code (.exe / a.out)
       │
       ▼
     Runs on CPU
```

1. You write code in a `.cpp` file (source code)
2. The **compiler** translates it to machine language
3. The operating system runs the resulting program

---

## 1.6 Setting Up Your Environment

### Option A — VS Code (Recommended)
1. Download [VS Code](https://code.visualstudio.com/)
2. Install the **C/C++ extension** by Microsoft
3. Install [MinGW-w64](https://www.mingw-w64.org/) (Windows) or use the system `g++` (Linux/macOS)

### Option B — Online Compiler (No Installation)
Visit [https://www.onlinegdb.com/online_c++_compiler](https://www.onlinegdb.com/online_c++_compiler)  
This lets you write and run C++ programs directly in your browser.

---

## 1.7 Structure of a C++ Program

```cpp
#include <iostream>     // Include input/output library
using namespace std;    // Use the standard namespace

int main() {            // Main function — program starts here
    // Your code goes here
    return 0;           // Return 0 means the program ran successfully
}
```

### Key Parts Explained

| Part | Meaning |
|------|---------|
| `#include <iostream>` | Includes the library for input/output |
| `using namespace std;` | Allows use of `cout`, `cin` without `std::` prefix |
| `int main()` | Entry point of every C++ program |
| `{ }` | Curly braces define a block of code |
| `return 0;` | Signals successful completion |
| `//` | Single-line comment (ignored by compiler) |

---

## 1.8 Your First Program: Hello, World!

See `hello_world.cpp` in this folder.

**Expected Output:**
```
Hello, World!
Welcome to C++ Programming!
```

---

## 📝 Quiz — Module 01

1. What is a computer program?
2. What does a compiler do?
3. Name three high-level programming languages.
4. What does `#include <iostream>` do in C++?
5. What is the entry point of a C++ program?
6. What does `return 0;` mean?
7. True or False: C++ programs can run directly without compilation.
8. List two input devices and two output devices.

---

## 🔗 Next Module

➡️ [Module 02 — Problem Solving and Computational Thinking](../02-Problem-Solving-and-Computational-Thinking/README.md)
