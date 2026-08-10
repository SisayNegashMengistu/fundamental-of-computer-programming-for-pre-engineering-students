# Module 13 — File Handling

## 🎯 Learning Objectives

- Open, write to, and close files using `ofstream`
- Read from files using `ifstream`
- Append to existing files
- Handle file errors gracefully
- Parse structured data (CSV format) from files

---

## 13.1 Why File Handling?

Programs that only use `cin`/`cout` lose all data when they close. **File handling** lets programs:
- **Save** results permanently
- **Read** configuration or input data
- **Share** data between programs

---

## 13.2 File Stream Classes

| Class | Purpose |
|-------|---------|
| `ofstream` | Write to a file (output) |
| `ifstream` | Read from a file (input) |
| `fstream` | Both read and write |

```cpp
#include <fstream>
```

---

## 13.3 Writing to a File

```cpp
ofstream outFile("data.txt");      // opens/creates file

if (!outFile.is_open()) {
    cerr << "Cannot open file!" << endl;
    return 1;
}

outFile << "Hello, File!" << endl;
outFile << 42 << endl;

outFile.close();    // always close when done
```

> ⚠️ If the file already exists, `ofstream` **overwrites** it by default.

---

## 13.4 Reading from a File

```cpp
ifstream inFile("data.txt");

if (!inFile.is_open()) { ... }

string line;
while (getline(inFile, line)) {
    cout << line << endl;
}
inFile.close();
```

### Reading Word by Word

```cpp
string word;
while (inFile >> word) {
    cout << word << " ";
}
```

---

## 13.5 Appending to a File

```cpp
ofstream appFile("data.txt", ios::app);   // open in append mode
appFile << "New line added!" << endl;
appFile.close();
```

---

## 13.6 File Open Modes

| Mode Flag | Effect |
|-----------|--------|
| `ios::in` | Open for reading |
| `ios::out` | Open for writing (default for ofstream) |
| `ios::app` | Append to end |
| `ios::trunc` | Truncate (erase) existing content |
| `ios::binary` | Open in binary mode |

```cpp
fstream file("data.txt", ios::in | ios::out);
```

---

## 13.7 Error Handling

```cpp
ifstream f("missing.txt");
if (!f) {
    cerr << "File not found!" << endl;
}
// Or check specific state:
if (f.fail()) { ... }
if (f.eof())  { ... }   // end of file reached
```

---

## 📝 Quiz — Module 13

1. What is the difference between `ofstream` and `ifstream`?
2. What happens if you open an existing file with `ofstream` without `ios::app`?
3. Write code to create a file called `grades.txt` and write 5 scores to it.
4. How do you check if a file opened successfully?
5. What does `ios::app` do?
6. Write a loop to read and print every line from a file called `notes.txt`.

---

## 🔗 Navigation

⬅️ [Module 12](../12-Structures-and-User-Defined-Types/README.md) | ➡️ [Module 14](../14-Object-Oriented-Programming/README.md)
