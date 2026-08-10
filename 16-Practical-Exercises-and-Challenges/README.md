# Module 16 — Practical Exercises and Challenges

## 🎯 Overview

This final module brings together everything you have learned. Complete these mini-projects to solidify your understanding of C++ programming. Each project is accompanied by hints and a suggested approach.

---

## 🟢 Beginner Challenges

### Challenge 1: Simple Calculator

**Description:** Build a command-line calculator that reads two numbers and an operator (`+`, `-`, `*`, `/`, `%`) and prints the result.

**Requirements:**
- Use `switch` for the operator
- Handle division by zero
- Use a loop to allow multiple calculations until the user types `q`

**Sample Run:**
```
Enter expression (e.g., 5 + 3) or q to quit: 10 / 4
Result: 2.5
Enter expression: 7 % 3
Result: 1
Enter expression: q
Goodbye!
```

---

### Challenge 2: Number Guessing Game

**Description:** The program picks a random number between 1 and 100. The user keeps guessing until correct, receiving "Too high" or "Too low" hints.

**Requirements:**
- Use `rand()` and `srand(time(0))` for random number
- Count and display the number of attempts
- Award a "star rating" based on attempts (≤5: ⭐⭐⭐, ≤10: ⭐⭐, else: ⭐)

---

### Challenge 3: Temperature Converter

**Description:** Convert temperatures between Celsius, Fahrenheit, and Kelvin.

**Formulas:**
- `F = C × 9/5 + 32`
- `K = C + 273.15`

**Requirements:** Menu-driven program with a loop.

---

## 🟡 Intermediate Challenges

### Challenge 4: Student Grade Manager

**Description:** Manage a list of up to 30 students, storing each student's name and five subject scores. Compute the average and letter grade.

**Requirements:**
- Use a `struct Student`
- Functions: `inputStudents()`, `displayAll()`, `findTopStudent()`, `computeClassAverage()`
- Output a formatted table

**Sample Table:**
```
ID   Name           Avg    Grade
---  -------------- -----  -----
1    Sisay Negash   87.40  B
2    Amina Kebede   91.20  A
```

---

### Challenge 5: Text Statistics

**Description:** Read a sentence from the user and report:
- Number of words
- Number of vowels
- Number of consonants
- Number of spaces
- Whether it is a palindrome (ignoring spaces and case)

---

### Challenge 6: Savings Account Simulator

**Description:** Simulate a bank account for one year with monthly compound interest.

**Formula:** `balance = P × (1 + r/12)^12`

**Requirements:**
- Input: Principal, annual interest rate
- Output: Monthly balance table showing month number and end-of-month balance
- Use a loop and formatted output

---

## 🔴 Advanced Challenges

### Challenge 7: Inventory Management System

**Description:** Build a simple inventory system that allows adding, searching, updating, and deleting products.

**Requirements:**
- Store up to 100 products using an array of structs (`Product`: id, name, price, quantity)
- Save/load inventory from a file (`inventory.txt`)
- Menu-driven with input validation

---

### Challenge 8: Matrix Operations

**Description:** Implement a program that performs operations on 2D matrices.

**Requirements:**
- Read two matrices from the user
- Implement: addition, subtraction, multiplication, transpose
- Validate that matrix dimensions are compatible for each operation

---

### Challenge 9: Mini Student Information System (OOP)

**Description:** Using classes, build a student information system.

**Classes needed:**
- `Person` (base): name, age, contact
- `Student` (inherits Person): ID, GPA, array of course names
- `Course`: name, credits, grade

**Methods:** `displayInfo()`, `calculateGPA()`, `addCourse()`, `saveToFile()`

---

### Challenge 10: Capstone — Simple Library System

**Description:** Build a text-based library management system.

**Features:**
- Add, search (by title or author), and display books
- Check out and return books (track availability)
- Save/load the book database from a file
- Use OOP with a `Book` class

---

## ✅ Submission Checklist

For each challenge you complete:
- [ ] Code compiles without errors (`g++ -Wall -Wextra`)
- [ ] Code produces the correct output
- [ ] Code is commented and readable
- [ ] Edge cases are handled (invalid input, division by zero, etc.)

---

## 🔗 Navigation

⬅️ [Module 15](../15-Debugging-and-Common-Errors/README.md) | 🏠 [Back to Main README](../README.md)
