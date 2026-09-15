# Quiz – Module 10: Pointers

---

**Q1.** A pointer variable stores:

a) A value of type `int`  
b) A memory address  
c) A string  
d) A function  

---

**Q2.** Which operator is used to get the address of a variable?

a) `*`  
b) `->`  
c) `&`  
d) `@`  

---

**Q3.** What does `*ptr` do?

a) Gets the address of ptr  
b) Multiplies ptr by something  
c) Dereferences ptr (gets the value at the address ptr holds)  
d) Declares a pointer  

---

**Q4.** What is a null pointer?

a) A pointer pointing to address 0 / `nullptr`  
b) A pointer that has been deleted  
c) A pointer with no name  
d) A pointer to a function  

---

**Q5.** After `int arr[] = {5,10,15}; int* p = arr;`, what is `*(p+2)`?

a) 5  
b) 10  
c) 15  
d) Undefined  

---

**Q6.** Which is the correct way to free a dynamically allocated array?

a) `delete ptr;`  
b) `free[] ptr;`  
c) `delete[] ptr;`  
d) `remove ptr;`  

---

**Q7.** A **memory leak** occurs when:

a) The program writes outside array bounds  
b) Dynamically allocated memory is never freed  
c) A pointer is set to `nullptr`  
d) A function returns a local pointer  

---

**Q8.** How do you declare a pointer to an `int`?

a) `int p;`  
b) `int& p;`  
c) `int* p;`  
d) `pointer<int> p;`  

---

**Q9.** After `delete p; p = nullptr;`, what happens if you dereference `p`?

a) It returns 0  
b) It works normally  
c) Undefined behavior (dereferencing null pointer)  
d) The program prints an error automatically  

---

**Q10.** Which statement best describes the relationship between an array name and a pointer?

a) They are completely unrelated  
b) An array name is a constant pointer to the first element  
c) A pointer is an array  
d) Array names cannot be used as pointers  

---

## Answers

| Q | Answer |
|---|--------|
| 1 | b |
| 2 | c |
| 3 | c |
| 4 | a |
| 5 | c |
| 6 | c |
| 7 | b |
| 8 | c |
| 9 | c |
| 10 | b |
