# C++ Quick Reference Cheat Sheet

## Data Types

```cpp
int     i = 42;          // integer
long    l = 1234567890L; // large integer
float   f = 3.14f;       // single precision (7 digits)
double  d = 3.14159265;  // double precision (15 digits)
char    c = 'A';         // single character
bool    b = true;        // true / false
string  s = "Hello";     // text (needs #include <string>)
```

## Input / Output

```cpp
cout << "Value: " << x << endl;    // output
cin  >> x;                         // input single value
cin  >> x >> y;                    // input two values
cin.ignore();                      // discard newline
getline(cin, str);                 // read full line
```

## Formatted Output

```cpp
#include <iomanip>
cout << fixed << setprecision(2) << 3.14159;  // 3.14
cout << setw(10) << left  << "Name";          // left-align
cout << setw(10) << right << 42;              // right-align
```

## Conditionals

```cpp
if (x > 0) { ... }
else if (x == 0) { ... }
else { ... }

// ternary
string s = (x > 0) ? "positive" : "non-positive";

// switch
switch (ch) {
    case 'A': ...; break;
    default:  ...;
}
```

## Loops

```cpp
// for
for (int i = 0; i < n; i++) { ... }

// while
while (condition) { ... }

// do-while
do { ... } while (condition);

// range-based (C++11)
for (int val : array) { ... }

// break / continue
break;      // exit loop
continue;   // next iteration
```

## Functions

```cpp
// Declaration (prototype)
int add(int a, int b);

// Definition
int add(int a, int b) { return a + b; }

// void function
void printLine(int n) { ... }

// Pass by reference
void swap(int &a, int &b) { ... }

// Recursive
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

## Arrays

```cpp
int arr[5] = {1, 2, 3, 4, 5};
cout << arr[0];              // first element
int n = sizeof(arr) / sizeof(arr[0]);  // size

// 2D array
int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
```

## Strings (std::string)

```cpp
string s = "Hello";
s.length();          // 5
s.substr(1, 3);      // "ell"
s.find("ll");        // 2
s + " World";        // concatenation
s == "Hello";        // comparison
```

## Pointers

```cpp
int x = 10;
int *ptr = &x;    // address of x
cout << *ptr;     // dereference (prints 10)
*ptr = 99;        // modifies x

// Dynamic memory
int *p = new int(5);
delete p;
p = nullptr;

int *arr = new int[10];
delete[] arr;
```

## Structures

```cpp
struct Point { int x, y; };
Point p = {3, 4};
cout << p.x;

Point *pp = &p;
cout << pp->x;  // arrow operator
```

## File I/O

```cpp
#include <fstream>

// Write
ofstream out("file.txt");
out << "Hello" << endl;
out.close();

// Read
ifstream in("file.txt");
string line;
while (getline(in, line)) cout << line;
in.close();

// Append
ofstream app("file.txt", ios::app);
```

## Classes (OOP)

```cpp
class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}   // constructor
    double area() const {
        return 3.14159 * radius * radius;
    }
};

Circle c(5.0);
cout << c.area();
```

## Common Headers

| Header | Purpose |
|--------|---------|
| `<iostream>` | cin, cout |
| `<string>` | std::string |
| `<fstream>` | file I/O |
| `<cmath>` | sqrt, pow, abs |
| `<algorithm>` | sort, reverse, min, max |
| `<iomanip>` | setw, setprecision |
| `<cstdlib>` | rand, srand, exit |
| `<ctime>` | time() for seeding rand |

## Compile Commands

```bash
# Basic compile
g++ -o program program.cpp

# With warnings (recommended)
g++ -Wall -Wextra -o program program.cpp

# C++17 standard
g++ -std=c++17 -Wall -o program program.cpp

# With debug info
g++ -g -o program program.cpp
```
