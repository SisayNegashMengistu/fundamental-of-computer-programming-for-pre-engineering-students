# Fundamentals of Computer Programming for Pre-Engineering Students

A beginner-friendly, structured learning resource designed to introduce Pre-Engineering students to core programming concepts, problem-solving techniques, algorithms, and practical coding skills using **C++**.

---

## 🎯 Course Objectives

By the end of this course, students will be able to:

- Understand fundamental programming concepts and terminology
- Apply computational thinking and problem-solving strategies
- Design algorithms and represent them using flowcharts and pseudocode
- Write, compile, and debug C++ programs
- Use variables, data types, operators, control flow, functions, arrays, and pointers
- Understand object-oriented programming fundamentals
- Read from and write to files
- Solve practical engineering-related programming problems

---

## 📚 Course Modules

| # | Module | Topics |
|---|--------|--------|
| 01 | [Introduction to Programming](01-introduction/README.md) | What is programming, history, how computers work, development process |
| 02 | [Problem Solving & Algorithms](02-problem-solving-and-algorithms/README.md) | Computational thinking, pseudocode, flowcharts |
| 03 | [C++ Basics & Program Structure](03-cpp-basics/README.md) | Compilation, `main()`, comments, first program |
| 04 | [Variables, Data Types & Operators](04-variables-datatypes-operators/README.md) | Types, declarations, arithmetic, relational, logical operators |
| 05 | [Input & Output](05-input-output/README.md) | `cin`, `cout`, `printf`, formatting |
| 06 | [Conditional Statements](06-conditional-statements/README.md) | `if`, `if-else`, `switch`, nested conditions |
| 07 | [Loops](07-loops/README.md) | `for`, `while`, `do-while`, nested loops, `break`/`continue` |
| 08 | [Functions](08-functions/README.md) | Declaration, definition, parameters, return types, recursion |
| 09 | [Arrays & Strings](09-arrays-and-strings/README.md) | 1D/2D arrays, C-strings, `std::string` |
| 10 | [Pointers](10-pointers/README.md) | Memory addresses, pointer arithmetic, dynamic memory |
| 11 | [Structures](11-structures/README.md) | `struct`, nested structures, arrays of structures |
| 12 | [File Handling](12-file-handling/README.md) | `fstream`, reading/writing files, error handling |
| 13 | [OOP Fundamentals](13-oop-fundamentals/README.md) | Classes, objects, encapsulation, constructors, inheritance |
| 14 | [Debugging & Error Handling](14-debugging-error-handling/README.md) | Syntax/runtime/logic errors, debugging strategies |
| 15 | [Projects & Practical Problems](15-projects/README.md) | Mini-projects integrating all concepts |

---

## 🗂 Repository Structure

```
.
├── README.md
├── 01-introduction/
│   ├── README.md
│   ├── lesson.md
│   ├── examples/
│   └── exercises/
├── 02-problem-solving-and-algorithms/
│   ├── README.md
│   ├── lesson.md
│   ├── examples/
│   └── exercises/
... (same pattern for all modules)
└── 15-projects/
    ├── README.md
    └── projects/
```

---

## 🛠 Prerequisites

- No prior programming experience required
- A C++ compiler (e.g., GCC via MinGW on Windows, or g++ on Linux/macOS)
- A code editor (e.g., VS Code, Code::Blocks, or any text editor)

### Installing a Compiler

**Windows:** Download [MinGW](https://www.mingw-w64.org/) or use the [GCC bundled with Code::Blocks](https://www.codeblocks.org/).

**Linux/macOS:**
```bash
sudo apt install g++       # Ubuntu/Debian
brew install gcc            # macOS with Homebrew
```

### Compiling and Running a Program

```bash
g++ -o my_program my_program.cpp
./my_program
```

---

## 👩‍🏫 For Instructors

Each module contains:
- **lesson.md** – Concept explanations with examples
- **examples/** – Ready-to-compile C++ source files
- **exercises/** – Practice problems with solution hints
- **quiz.md** – Short knowledge-check questions

Modules are designed to be taught sequentially, but can also be used as standalone references.

---

## 📌 How to Use This Repository

1. Clone the repository:
   ```bash
   git clone https://github.com/SisayNegashMengistu/fundamental-of-computer-programming-for-pre-engineering-students.git
   ```
2. Navigate to a module folder and read `lesson.md`
3. Study the code examples in `examples/`
4. Complete the exercises in `exercises/`
5. Test your knowledge with `quiz.md`

---

## 🤝 Contributing

Contributions are welcome! Feel free to open issues or pull requests for:
- New examples or exercises
- Bug fixes in code samples
- Additional quizzes or projects

---

## 📄 License

This repository is intended for educational use. All content is original and freely available for academic purposes.

