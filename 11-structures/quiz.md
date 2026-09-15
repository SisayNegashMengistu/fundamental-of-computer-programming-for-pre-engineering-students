# Quiz – Module 11: Structures

---

**Q1.** A `struct` in C++ allows you to:

a) Define a class with methods only  
b) Group related variables of the same type  
c) Group related variables of different types under one name  
d) Create a dynamic array  

---

**Q2.** Given `struct Point { int x, y; }; Point p;`, how do you set `x` to 10?

a) `p->x = 10;`  
b) `p.x = 10;`  
c) `x.p = 10;`  
d) `Point.x = 10;`  

---

**Q3.** Which operator accesses a struct member through a pointer?

a) `.`  
b) `*`  
c) `&`  
d) `->`  

---

**Q4.** What is the advantage of passing a struct by `const` reference?

a) It allows the function to modify the struct  
b) It copies all fields for safety  
c) It avoids copying while preventing modification  
d) It is required by the compiler  

---

**Q5.** How do you declare an array of 10 `Student` structures?

a) `Student[10] students;`  
b) `Student students(10);`  
c) `Student students[10];`  
d) `array<Student> students[10];`  

---

**Q6.** Nested structures mean:

a) A struct inside a loop  
b) A struct having a member that is also a struct  
c) Two structs with the same name  
d) A struct defined inside `main()`  

---

**Q7.** What does the following do? `Student* p = new Student;`

a) Creates a local `Student` variable  
b) Dynamically allocates memory for one `Student`  
c) Deletes a Student  
d) Declares an array of Students  

---

**Q8.** After `Student* p = new Student;`, you access the `name` field using:

a) `p.name`  
b) `Student.name`  
c) `p->name`  
d) `*name`  

---

**Q9.** What keyword marks the end of a struct declaration (before the semicolon)?

a) `end`  
b) `}`  
c) `};`  
d) `done`  

---

**Q10.** A function that returns a `struct` by value:

a) Is not allowed in C++  
b) Returns a copy of the struct  
c) Returns a pointer  
d) Must use `void`  

---

## Answers

| Q | Answer |
|---|--------|
| 1 | c |
| 2 | b |
| 3 | d |
| 4 | c |
| 5 | c |
| 6 | b |
| 7 | b |
| 8 | c |
| 9 | c |
| 10 | b |
