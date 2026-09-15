# Exercises – Module 11: Structures

---

## Exercise 1: Book Record

Define a `struct Book` with fields: `title` (string), `author` (string), `year` (int), `price` (double).

Write a program that creates an array of 5 books, fills them with input or hardcoded values, and prints them in a formatted table.

---

## Exercise 2: Student Grade Report

Define a `struct Student` with: `id`, `name`, and `grades[5]` (array of 5 doubles).

Write functions to:
- Calculate the average grade
- Determine the letter grade (A/B/C/D/F)
- Print a full report for the student

---

## Exercise 3: Nested Structures – Employee Directory

Define:
```cpp
struct Address { string street, city, country; };
struct Employee { int id; string name; double salary; Address address; };
```

Create 3 employee records and print a directory table.

---

## Exercise 4: Pointer to Struct

Create a `struct Point { double x, y; }`. Dynamically allocate a `Point` using `new`, set its coordinates, calculate the distance from the origin (`sqrt(x² + y²)`), then `delete` it.

---

## Exercise 5: Sorting Array of Structs

Create an array of 5 `Student` structs. Sort them by GPA in descending order using bubble sort. Print the sorted list.

---

## Submission

Save as `exercise1.cpp` through `exercise5.cpp`.
