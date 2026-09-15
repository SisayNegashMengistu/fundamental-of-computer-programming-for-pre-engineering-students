# Lesson 10 – Pointers

## 1. What is a Pointer?

A **pointer** is a variable that stores the **memory address** of another variable.

```
Variable x:     [ 42 ]   ← stored at address 0x1A2B
Pointer p:  [ 0x1A2B ]   ← stores the address of x
```

---

## 2. Declaring and Using Pointers

```cpp
int x = 42;
int* p = &x;   // p holds the address of x

cout << x;      // 42         – value of x
cout << &x;     // 0x1A2B     – address of x
cout << p;      // 0x1A2B     – value of p (same address)
cout << *p;     // 42         – dereference: value at address p points to
```

| Operator | Name | Meaning |
|----------|------|---------|
| `&` | Address-of | Returns the memory address of a variable |
| `*` | Dereference | Returns the value stored at the address |

---

## 3. Modifying Values Through Pointers

```cpp
int x = 10;
int* p = &x;

*p = 99;  // changes x through the pointer
cout << x; // 99
```

---

## 4. Null Pointers

Always initialize pointers. Use `nullptr` (C++11) to indicate a pointer that points nowhere:

```cpp
int* p = nullptr;  // safe – doesn't point to random memory

if (p != nullptr) {
    *p = 5;  // only dereference if not null
}
```

---

## 5. Pointer Arithmetic

Incrementing/decrementing a pointer moves it to the next/previous element of its type:

```cpp
int arr[] = {10, 20, 30, 40, 50};
int* p = arr;  // p points to arr[0]

cout << *p;      // 10
cout << *(p+1);  // 20
cout << *(p+2);  // 30

p++;             // now p points to arr[1]
```

---

## 6. Pointers and Arrays

An array name is essentially a pointer to its first element:

```cpp
int arr[5] = {1, 2, 3, 4, 5};

// These are equivalent:
cout << arr[2];     // 3
cout << *(arr + 2); // 3
```

---

## 7. Pointers as Function Parameters

Used to modify variables in the calling function (alternative to reference parameters):

```cpp
void increment(int* p) {
    (*p)++;
}

int main() {
    int x = 5;
    increment(&x);
    cout << x;  // 6
}
```

---

## 8. Dynamic Memory Allocation

Allocate memory at runtime using `new`; free it with `delete`:

```cpp
// Single variable
int* p = new int;
*p = 42;
cout << *p;
delete p;
p = nullptr;

// Array
int n = 5;
int* arr = new int[n];
for (int i = 0; i < n; i++) arr[i] = i * 10;
delete[] arr;  // note: delete[] for arrays
arr = nullptr;
```

**Memory leak:** Forgetting to `delete` causes memory that is no longer needed to remain allocated.

---

## 9. Common Pointer Errors

| Error | Description | Prevention |
|-------|-------------|-----------|
| **Null pointer dereference** | Dereferencing a `nullptr` | Always check before dereferencing |
| **Dangling pointer** | Pointer to deleted/out-of-scope memory | Set to `nullptr` after `delete` |
| **Memory leak** | Forgetting to call `delete` | Match every `new` with `delete` |
| **Buffer overflow** | Writing past allocated bounds | Use correct sizes |

---

## 10. Engineering Example: Dynamic Array of Measurements

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many sensor readings? ";
    cin >> n;

    double* readings = new double[n];

    for (int i = 0; i < n; i++) {
        cout << "Reading " << i + 1 << ": ";
        cin >> readings[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) sum += readings[i];

    cout << "Average = " << sum / n << endl;

    delete[] readings;
    readings = nullptr;
    return 0;
}
```

---

## Summary

- A pointer stores a memory address; declared with `*`
- `&var` gets the address; `*ptr` dereferences to get the value
- Always initialize pointers; use `nullptr` for safety
- Pointer arithmetic moves through memory by element size
- Dynamic memory: `new` to allocate, `delete`/`delete[]` to free
- Match every `new` with a `delete` to prevent memory leaks

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 11 – Structures](../11-structures/README.md)
