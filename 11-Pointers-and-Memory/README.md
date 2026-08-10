# Module 11 — Pointers and Basic Memory Concepts

## 🎯 Learning Objectives

- Understand what a pointer is and why it is useful
- Use the address-of `&` and dereference `*` operators
- Perform pointer arithmetic
- Allocate and free dynamic memory using `new` and `delete`
- Avoid common pointer mistakes (dangling pointers, memory leaks)

---

## 11.1 Memory and Addresses

Every variable is stored at a unique **memory address**. Think of memory as a street where each house has a unique address.

```
Variable:    int x = 42;
Memory:      Address 0x7ffd1234  →  value 42
```

---

## 11.2 Pointers

A **pointer** is a variable that stores the **memory address** of another variable.

```cpp
int x = 42;
int *ptr = &x;    // ptr stores the address of x
```

| Operator | Name | Meaning |
|----------|------|---------|
| `&x` | Address-of | Returns the memory address of `x` |
| `*ptr` | Dereference | Returns the value stored at the address in `ptr` |

```cpp
cout << x;      // 42     (the value)
cout << &x;     // 0x...  (the address)
cout << ptr;    // 0x...  (same address — that's what ptr holds)
cout << *ptr;   // 42     (dereference — value at that address)
```

---

## 11.3 Modifying Through Pointers

```cpp
int y = 10;
int *p = &y;
*p = 99;         // modifies y through the pointer
cout << y;       // 99
```

---

## 11.4 Pointers and Arrays

Arrays and pointers are closely related — an array name decays to a pointer to its first element:

```cpp
int arr[3] = {10, 20, 30};
int *p = arr;          // points to arr[0]

cout << *p;            // 10
cout << *(p + 1);      // 20
cout << *(p + 2);      // 30
```

---

## 11.5 Dynamic Memory Allocation

Use `new` to allocate memory **at runtime** (on the heap):

```cpp
int *p = new int;         // single integer
*p = 55;
cout << *p;               // 55
delete p;                 // free memory
p = nullptr;              // avoid dangling pointer

int *arr = new int[10];   // array of 10 integers
// ... use arr ...
delete[] arr;             // free array
arr = nullptr;
```

> ⚠️ Every `new` must be paired with `delete`. Failing to do so causes a **memory leak**.

---

## 11.6 Common Pointer Pitfalls

| Problem | Description | Fix |
|---------|-------------|-----|
| **Dangling pointer** | Pointer to freed memory | Set to `nullptr` after `delete` |
| **Memory leak** | Forgot `delete` | Always pair `new` with `delete` |
| **Null dereference** | Dereferencing `nullptr` | Check `if (ptr != nullptr)` first |
| **Wild pointer** | Uninitialized pointer | Always initialize: `int *p = nullptr;` |

---

## 📝 Quiz — Module 11

1. What is a pointer?
2. What is the difference between `&x` and `*p`?
3. If `int x = 7; int *p = &x;` what does `*p + 1` equal?
4. What is a memory leak and how do you prevent it?
5. Write code to dynamically allocate an array of 5 doubles and then free it.
6. What does `nullptr` represent?

---

## 🔗 Navigation

⬅️ [Module 10](../10-Arrays-and-Strings/README.md) | ➡️ [Module 12](../12-Structures-and-User-Defined-Types/README.md)
