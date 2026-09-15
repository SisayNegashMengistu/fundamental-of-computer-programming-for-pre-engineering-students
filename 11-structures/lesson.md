# Lesson 11 – Structures

## 1. What is a Structure?

A `struct` groups **related variables** of **different types** under a single user-defined type.

```cpp
struct Student {
    int    id;
    string name;
    double gpa;
};
```

---

## 2. Declaring and Using Struct Variables

```cpp
// Declare a variable of type Student
Student s1;

// Assign values using dot operator
s1.id   = 1001;
s1.name = "Abebe Girma";
s1.gpa  = 3.75;

cout << s1.name << " – GPA: " << s1.gpa << endl;

// Initialize at declaration
Student s2 = {1002, "Tigist Haile", 3.90};
```

---

## 3. Arrays of Structures

```cpp
const int N = 3;
Student students[N] = {
    {1001, "Abebe",  3.75},
    {1002, "Tigist", 3.90},
    {1003, "Dawit",  3.55}
};

for (int i = 0; i < N; i++) {
    cout << students[i].id << " "
         << students[i].name << " "
         << students[i].gpa  << endl;
}
```

---

## 4. Passing Structures to Functions

### By Value (copy):
```cpp
void display(Student s) {
    cout << s.name << " – " << s.gpa << endl;
}
display(s1);
```

### By Reference (efficient for large structs):
```cpp
void updateGPA(Student& s, double newGPA) {
    s.gpa = newGPA;
}
updateGPA(s1, 3.85);
```

### By Const Reference (read-only):
```cpp
void printStudent(const Student& s) {
    cout << s.name << " " << s.gpa << endl;
}
```

---

## 5. Pointers to Structures

Use `->` to access members through a pointer:

```cpp
Student* ptr = &s1;
cout << ptr->name << endl;   // equivalent to (*ptr).name
cout << ptr->gpa  << endl;
```

---

## 6. Nested Structures

```cpp
struct Address {
    string street;
    string city;
    string country;
};

struct Engineer {
    int     id;
    string  name;
    Address address;  // nested
};

Engineer eng;
eng.id              = 101;
eng.name            = "Mulugeta";
eng.address.city    = "Addis Ababa";
eng.address.country = "Ethiopia";
```

---

## 7. Returning Structures from Functions

```cpp
Student createStudent(int id, string name, double gpa) {
    Student s;
    s.id   = id;
    s.name = name;
    s.gpa  = gpa;
    return s;
}

Student s = createStudent(1005, "Sara", 3.80);
```

---

## 8. Engineering Example: Beam Structure

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Beam {
    string material;
    double length;   // m
    double width;    // m
    double height;   // m
    double load;     // kN
};

double crossSectionArea(const Beam& b) {
    return b.width * b.height;  // m^2
}

double stress(const Beam& b) {
    return (b.load * 1000) / crossSectionArea(b);  // Pa
}

int main() {
    Beam b = {"Steel", 5.0, 0.2, 0.3, 50.0};
    cout << "Material  : " << b.material << endl;
    cout << "Area      : " << crossSectionArea(b) << " m^2" << endl;
    cout << "Stress    : " << stress(b) << " Pa" << endl;
    return 0;
}
```

---

## Summary

- `struct` groups related variables of different types
- Access members with `.` (direct) or `->` (through pointer)
- Arrays of structs store collections of records
- Pass by reference for efficiency; `const&` for read-only access
- Nested structs model complex real-world entities

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 12 – File Handling](../12-file-handling/README.md)
