# Lesson 09 – Arrays & Strings

## 1. What is an Array?

An **array** stores a fixed-size collection of elements of the **same data type** in consecutive memory locations.

```cpp
// Syntax: type name[size];
int scores[5];             // declares an array of 5 ints
double temps[7] = {20.1, 18.5, 22.3, 25.0, 19.7, 21.1, 23.4};  // initialized
```

---

## 2. Accessing Array Elements

Elements are indexed from **0** to **size-1**.

```cpp
int grades[5] = {85, 92, 78, 95, 88};

cout << grades[0];  // 85 (first element)
cout << grades[4];  // 88 (last element)
// grades[5] would be out-of-bounds (undefined behavior)
```

---

## 3. Traversing Arrays with Loops

```cpp
int scores[5] = {70, 85, 90, 60, 75};
int sum = 0;

for (int i = 0; i < 5; i++) {
    sum += scores[i];
}
double avg = static_cast<double>(sum) / 5;
cout << "Average = " << avg << endl;
```

**Range-based `for` loop (C++11):**
```cpp
for (int score : scores) {
    cout << score << " ";
}
```

---

## 4. Passing Arrays to Functions

Arrays are passed by reference automatically (the function receives a pointer to the first element):

```cpp
double average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return static_cast<double>(sum) / size;
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    cout << "Average = " << average(data, 5) << endl;
}
```

---

## 5. 2D Arrays (Matrices)

```cpp
// Syntax: type name[rows][cols];
int matrix[3][4];  // 3 rows, 4 columns

// Initialize:
int m[2][3] = {{1, 2, 3}, {4, 5, 6}};

// Access element at row 1, col 2:
cout << m[1][2];  // 6
```

### Traversing a 2D array:
```cpp
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << m[i][j] << " ";
    }
    cout << endl;
}
```

---

## 6. C-Style Strings (char arrays)

A C-string is a `char` array terminated by a null character `'\0'`.

```cpp
char name[20] = "Engineer";  // automatically adds '\0'
cout << name << endl;

// String functions (from <cstring>):
#include <cstring>
strlen(name);         // length (excludes '\0')
strcpy(dest, src);    // copy
strcat(dest, src);    // concatenate
strcmp(s1, s2);       // compare (0 if equal)
```

---

## 7. `std::string` (Recommended)

More powerful and easier to use than C-strings:

```cpp
#include <string>
using namespace std;

string city = "Addis Ababa";
string greeting = "Hello, " + city + "!";  // concatenation with +

cout << greeting << endl;
cout << "Length: " << city.length() << endl;
cout << "Upper: ";
for (char c : city) cout << (char)toupper(c);
cout << endl;
```

### Common `std::string` methods:

| Method | Description |
|--------|-------------|
| `s.length()` / `s.size()` | Number of characters |
| `s.substr(pos, len)` | Substring |
| `s.find(sub)` | Find substring (returns `string::npos` if not found) |
| `s.replace(pos, len, str)` | Replace part of string |
| `s.empty()` | True if string is empty |
| `s[i]` | Access character at index i |
| `s.at(i)` | Access character (bounds-checked) |

---

## 8. Engineering Example: Sensor Readings

```cpp
#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main() {
    const int N = 6;
    double sensorData[N] = {23.4, 25.1, 22.8, 26.5, 21.9, 24.7};

    double sum = 0, maxVal = sensorData[0], minVal = sensorData[0];

    for (int i = 0; i < N; i++) {
        sum += sensorData[i];
        if (sensorData[i] > maxVal) maxVal = sensorData[i];
        if (sensorData[i] < minVal) minVal = sensorData[i];
    }

    cout << fixed << setprecision(2);
    cout << "Average : " << sum / N << " °C" << endl;
    cout << "Maximum : " << maxVal << " °C" << endl;
    cout << "Minimum : " << minVal << " °C" << endl;

    return 0;
}
```

---

## Summary

- Arrays store same-type elements with indices starting at 0
- Always use valid indices (0 to size-1) to avoid undefined behavior
- Pass arrays to functions without `[]` — they are passed by reference automatically
- 2D arrays represent matrices and tables
- Prefer `std::string` over C-style `char` arrays for strings
- `std::string` supports `+` for concatenation and many useful methods

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 10 – Pointers](../10-pointers/README.md)
