# Module 06 — Input and Output

## 🎯 Learning Objectives

- Use `cout` to display output with formatting
- Use `cin` to read user input
- Use `getline()` to read strings with spaces
- Format output using `iomanip` manipulators

---

## 6.1 Standard Output with `cout`

```cpp
#include <iostream>
using namespace std;

cout << "Hello, World!" << endl;   // endl = new line + flush buffer
cout << "PI = " << 3.14159 << "\n";  // \n = newline only (faster)
```

### Chaining Output

```cpp
cout << "Name: " << name << ", Age: " << age << endl;
```

---

## 6.2 Standard Input with `cin`

```cpp
int age;
cout << "Enter age: ";
cin >> age;             // reads until whitespace
```

### Reading Multiple Values

```cpp
int a, b;
cin >> a >> b;          // user types: 5 10
```

---

## 6.3 Reading Strings

```cpp
string firstName;
cin >> firstName;        // reads ONE word only (stops at space)

string fullName;
cin.ignore();            // skip leftover newline
getline(cin, fullName);  // reads entire line including spaces
```

> ⚠️ Always call `cin.ignore()` before `getline()` if you previously used `cin >>`.

---

## 6.4 Escape Sequences

| Sequence | Meaning |
|----------|---------|
| `\n` | Newline |
| `\t` | Tab |
| `\\` | Backslash |
| `\"` | Double quote |
| `\'` | Single quote |
| `\0` | Null character |

```cpp
cout << "Name:\tSisay\n";
cout << "She said: \"Hello!\"" << endl;
```

---

## 6.5 Formatted Output (`iomanip`)

```cpp
#include <iomanip>

// Fixed decimal places
cout << fixed << setprecision(2) << 3.14159;  // outputs: 3.14

// Column width
cout << setw(10) << "Name" << setw(8) << "Score" << endl;
cout << left << setw(10) << "Alice" << right << setw(8) << 95 << endl;

// Fill character
cout << setfill('*') << setw(20) << "" << endl;  // ****...****
```

---

## 6.6 Common Output Formatting

| Manipulator | Effect |
|-------------|--------|
| `endl` | New line + flush |
| `setw(n)` | Set field width |
| `setprecision(n)` | Set decimal places (with `fixed`) |
| `fixed` | Fixed notation for floats |
| `scientific` | Scientific notation |
| `left` | Left-align in field |
| `right` | Right-align in field |
| `setfill(c)` | Fill empty field space with character `c` |

---

## 📝 Quiz — Module 06

1. What is the difference between `endl` and `\n`?
2. Why do we use `cin.ignore()` before `getline()`?
3. What does `cin >> x >> y` do?
4. Write code to print a table with two columns: "Item" (left-aligned, width 15) and "Price" (right-aligned, width 10, 2 decimal places).
5. What escape sequence creates a tab character?

---

## 🔗 Navigation

⬅️ [Module 05](../05-Operators-and-Expressions/README.md) | ➡️ [Module 07](../07-Conditional-Statements/README.md)
