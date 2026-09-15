# Lesson 05 – Input & Output

## 1. Standard Input and Output Streams

C++ uses **streams** for I/O:

| Stream | Object | Direction |
|--------|--------|-----------|
| Standard output | `cout` | Program → Screen |
| Standard input | `cin` | Keyboard → Program |
| Standard error | `cerr` | Program → Screen (errors, unbuffered) |

---

## 2. Output with `cout`

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << "Value: " << 42 << endl;
    cout << "Pi is approximately " << 3.14159 << "\n";
    return 0;
}
```

### Escape Sequences

| Sequence | Meaning |
|----------|---------|
| `\n` | Newline |
| `\t` | Tab |
| `\\` | Backslash |
| `\"` | Double quote |
| `\0` | Null character |

---

## 3. Input with `cin`

```cpp
int age;
double salary;
cout << "Enter your age: ";
cin >> age;
cout << "Enter your salary: ";
cin >> salary;
```

`cin` uses whitespace (space, tab, newline) as a delimiter. To read an entire line:

```cpp
string fullName;
cout << "Enter your full name: ";
getline(cin, fullName);
```

---

## 4. Formatted Output with `<iomanip>`

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double voltage = 3.14159265;

    cout << fixed << setprecision(2) << voltage << endl;  // 3.14
    cout << setw(10) << "Value" << setw(10) << "Units" << endl;
    cout << setw(10) << 9.81  << setw(10) << "m/s^2"  << endl;
    return 0;
}
```

| Manipulator | Effect |
|-------------|--------|
| `fixed` | Use fixed-point notation |
| `scientific` | Use scientific notation |
| `setprecision(n)` | Set decimal places |
| `setw(n)` | Set field width |
| `left` / `right` | Text alignment |
| `endl` | Flush buffer + newline |

---

## 5. `printf` and `scanf` (C-style)

C++ also supports C-style I/O:

```cpp
#include <cstdio>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("You entered: %d\n", n);
    return 0;
}
```

| Format specifier | Type |
|-----------------|------|
| `%d` | int |
| `%f` | float |
| `%lf` | double |
| `%c` | char |
| `%s` | C-string |

---

## 6. Engineering Example: Formatted Output Table

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(20) << "Material"
         << right << setw(15) << "Density (kg/m^3)" << endl;
    cout << string(35, '-') << endl;
    cout << left << setw(20) << "Steel"
         << right << setw(15) << 7850 << endl;
    cout << left << setw(20) << "Aluminum"
         << right << setw(15) << 2700 << endl;
    cout << left << setw(20) << "Concrete"
         << right << setw(15) << 2400 << endl;
    return 0;
}
```

---

## Summary

- `cout <<` sends output to the screen
- `cin >>` reads input from the keyboard
- `getline()` reads a full line including spaces
- `<iomanip>` provides formatting tools: `setw`, `setprecision`, `fixed`
- Escape sequences control formatting within strings

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 06 – Conditional Statements](../06-conditional-statements/README.md)
