# Lesson 12 – File Handling

## 1. Why File Handling?

Without file handling:
- All data is lost when the program ends
- You cannot share data between program runs

Files allow **permanent** data storage. C++ uses stream objects from `<fstream>`.

---

## 2. File Stream Classes

| Class | Purpose |
|-------|---------|
| `ofstream` | Write to file (output file stream) |
| `ifstream` | Read from file (input file stream) |
| `fstream` | Read and write (bidirectional) |

---

## 3. Writing to a File

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outFile("data.txt");  // creates/overwrites file

    if (!outFile) {
        cerr << "Error: Cannot open file!" << endl;
        return 1;
    }

    outFile << "Temperature,Pressure" << endl;
    outFile << "23.5,101.3" << endl;
    outFile << "24.1,100.8" << endl;

    outFile.close();
    cout << "Data written to data.txt" << endl;
    return 0;
}
```

---

## 4. Reading from a File

```cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("data.txt");

    if (!inFile) {
        cerr << "Error: File not found!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
```

---

## 5. Appending to a File

Use `ios::app` flag to add data without overwriting:

```cpp
ofstream outFile("log.txt", ios::app);
outFile << "New log entry" << endl;
outFile.close();
```

---

## 6. Reading Formatted Data

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream inFile("numbers.txt");
    double val, sum = 0;
    int count = 0;

    while (inFile >> val) {  // reads until EOF
        sum += val;
        count++;
    }

    if (count > 0)
        cout << "Average = " << sum / count << endl;

    inFile.close();
    return 0;
}
```

---

## 7. File Open Modes

| Mode | Meaning |
|------|---------|
| `ios::in` | Open for reading |
| `ios::out` | Open for writing (default for `ofstream`) |
| `ios::app` | Append to end of file |
| `ios::trunc` | Truncate file on open (default with `ios::out`) |
| `ios::binary` | Open in binary mode |

Combine with `|`: `ios::out | ios::app`

---

## 8. Checking File State

```cpp
if (file.is_open()) { /* file is open */ }
if (file.eof())     { /* reached end of file */ }
if (file.fail())    { /* read/write operation failed */ }
if (!file)          { /* file is in error state */ }
```

---

## 9. Engineering Example: Save Sensor Log

```cpp
#include <fstream>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {
    ofstream logFile("sensor_log.txt", ios::app);
    if (!logFile) {
        cerr << "Cannot open log file!" << endl;
        return 1;
    }

    int n;
    cout << "How many readings to log? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double temp;
        cout << "Reading " << i + 1 << " (°C): ";
        cin >> temp;
        logFile << "Reading " << i + 1 << ": " << temp << " °C" << endl;
    }

    logFile.close();
    cout << "Logged to sensor_log.txt" << endl;
    return 0;
}
```

---

## 10. Reading a Structured File

Suppose `students.txt` contains:
```
1001 Abebe 3.75
1002 Tigist 3.90
```

```cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

struct Student { int id; string name; double gpa; };

int main() {
    ifstream fin("students.txt");
    Student s;
    while (fin >> s.id >> s.name >> s.gpa) {
        cout << s.id << " " << s.name << " " << s.gpa << endl;
    }
    fin.close();
    return 0;
}
```

---

## Summary

- `ofstream` writes; `ifstream` reads; `fstream` does both
- Always check if a file opened successfully with `if (!file)`
- Close files with `.close()` when done
- Use `ios::app` to append without overwriting
- Read line-by-line with `getline()` or token-by-token with `>>`

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 13 – OOP Fundamentals](../13-oop-fundamentals/README.md)
