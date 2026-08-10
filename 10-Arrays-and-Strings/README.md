# Module 10 — Arrays and Strings

## 🎯 Learning Objectives

- Declare, initialize, and access 1D and 2D arrays
- Perform common array operations (search, sort, statistics)
- Use `std::string` methods for text manipulation
- Understand the relationship between arrays and memory

---

## 10.1 Introduction to Arrays

An **array** is a collection of elements of the **same type**, stored in **contiguous memory**, accessed by an **index**.

```cpp
int scores[5];                     // uninitialized
int grades[4] = {85, 90, 78, 95}; // initialized
```

- Index starts at **0**
- Last element index = **size - 1**

```cpp
cout << grades[0];   // 85 (first)
cout << grades[3];   // 95 (last)
```

---

## 10.2 Array Traversal

```cpp
int arr[5] = {10, 20, 30, 40, 50};

// Traditional for loop
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

// Range-based for loop (C++11)
for (int val : arr) {
    cout << val << " ";
}
```

---

## 10.3 2D Arrays (Matrices)

```cpp
int matrix[3][4];                 // 3 rows, 4 columns

int grid[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

cout << grid[1][2];  // 6  (row 1, col 2)
```

---

## 10.4 Passing Arrays to Functions

```cpp
// Array decays to pointer — size must be passed separately
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
}

int data[3] = {1, 2, 3};
printArray(data, 3);
```

---

## 10.5 `std::string`

```cpp
#include <string>
string name = "Sisay";
```

| Method | Description | Example |
|--------|-------------|---------|
| `length()` / `size()` | Number of characters | `name.length()` → 5 |
| `substr(pos, len)` | Extract substring | `name.substr(0,3)` → `"Sis"` |
| `find(str)` | Find position | `name.find("ay")` → 3 |
| `at(i)` | Character at index | `name.at(0)` → `'S'` |
| `+` | Concatenation | `"Hi " + name` |
| `==`, `!=` | Comparison | `name == "Sisay"` |
| `empty()` | Check if empty | `name.empty()` → false |
| `toupper(c)` | Uppercase character | `toupper('a')` → `'A'` |

---

## 10.6 Common Array Algorithms

### Bubble Sort (simplified)

```cpp
for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-1-i; j++) {
        if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
        }
    }
}
```

### Linear Search

```cpp
int search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}
```

---

## 📝 Quiz — Module 10

1. What is the index of the **first** element of an array?
2. What happens if you access `arr[10]` in an array of size 5?
3. Declare a 2D array to represent a 4×4 chess board (integers).
4. Write a function to find the sum of all elements in an integer array.
5. What does `str.substr(2, 4)` return if `str = "Engineering"`?
6. What is the difference between a C-style string and `std::string`?

---

## 🔗 Navigation

⬅️ [Module 09](../09-Functions-and-Modular-Programming/README.md) | ➡️ [Module 11](../11-Pointers-and-Memory/README.md)
