# Module 12 — Structures and User-Defined Types

## 🎯 Learning Objectives

- Define and use `struct` to group related data
- Access struct members using `.` and `->` operators
- Use nested structures and arrays of structures
- Pass structures to functions by value and by reference

---

## 12.1 Why Structures?

Variables can only hold a single value. But a student has a name, ID, GPA, and date of birth — all of these together describe one entity. A **structure** groups multiple, possibly different-typed, fields into one unit.

---

## 12.2 Declaring a Structure

```cpp
struct Student {
    int    id;
    string name;
    double gpa;
};
```

### Creating Variables

```cpp
Student s1;                             // uninitialized
Student s2 = {1001, "Sisay", 3.85};    // initialized
```

### Accessing Members

```cpp
s2.id   = 1002;
s2.name = "Amina";
cout << s2.gpa;
```

---

## 12.3 Nested Structures

```cpp
struct Date {
    int day, month, year;
};

struct Employee {
    string name;
    double salary;
    Date   hireDate;    // nested
};

Employee e = {"John", 55000.0, {15, 3, 2022}};
cout << e.hireDate.year;   // 2022
```

---

## 12.4 Arrays of Structures

```cpp
Student class1[30];          // array of 30 students

// Initialize
class1[0] = {1001, "Sisay",  3.85};
class1[1] = {1002, "Amina",  3.60};

// Access
cout << class1[0].name;
```

---

## 12.5 Pointers to Structures

```cpp
Student s = {1001, "Sisay", 3.85};
Student *ptr = &s;

// Two equivalent ways to access members:
cout << (*ptr).name;   // dereference + dot
cout << ptr->name;     // arrow operator (preferred)
```

---

## 12.6 Passing Structures to Functions

```cpp
// Pass by value (copy) — slow for large structs
void print(Student s) { ... }

// Pass by const reference — efficient, read-only
void print(const Student &s) { cout << s.name; }

// Pass by reference — can modify the struct
void updateGPA(Student &s, double newGPA) { s.gpa = newGPA; }
```

---

## 12.7 `typedef` for Cleaner Syntax

```cpp
typedef struct {
    int x, y;
} Point;

Point p1 = {3, 4};   // No need to write "struct Point"
```

> In C++, `typedef` for structs is usually unnecessary — you can use the struct name directly.

---

## 📝 Quiz — Module 12

1. What is the difference between a struct and an array?
2. What operator is used to access members of a struct **through a pointer**?
3. Declare a struct `Rectangle` with `width` and `height` fields, and write a function that returns its area.
4. What is a nested struct? Give an example.
5. Why should large structures be passed by reference to functions?

---

## 🔗 Navigation

⬅️ [Module 11](../11-Pointers-and-Memory/README.md) | ➡️ [Module 13](../13-File-Handling/README.md)
