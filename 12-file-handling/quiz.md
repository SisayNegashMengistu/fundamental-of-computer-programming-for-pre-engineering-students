# Quiz – Module 12: File Handling

---

**Q1.** Which class is used to write data to a file in C++?

a) `ifstream`  
b) `fstream`  
c) `ofstream`  
d) `filestream`  

---

**Q2.** What does the `ios::app` flag do?

a) Opens the file for reading  
b) Clears the file before writing  
c) Appends data to the end of the file  
d) Creates a binary file  

---

**Q3.** How do you check if a file was successfully opened?

a) `file.open()`  
b) `if (!file)` or `if (file.fail())`  
c) `file.check()`  
d) `file.valid()`  

---

**Q4.** Which statement reads an entire line (including spaces) from a file?

a) `file >> line;`  
b) `getline(file, line);`  
c) `file.read(line);`  
d) `readline(file, line);`  

---

**Q5.** What does `file.eof()` return?

a) True when the file has been opened  
b) True when the end of file has been reached  
c) True when a write error occurs  
d) The size of the file  

---

**Q6.** Which header must be included for file operations?

a) `<iostream>`  
b) `<cstdio>`  
c) `<fstream>`  
d) `<string>`  

---

**Q7.** What is the correct way to open a file named `data.txt` for reading?

a) `ofstream f("data.txt");`  
b) `ifstream f("data.txt");`  
c) `fstream f("data.txt", ios::write);`  
d) `file.open("data.txt", read);`  

---

**Q8.** Which method closes an open file stream?

a) `file.end()`  
b) `file.stop()`  
c) `file.close()`  
d) `file.finish()`  

---

**Q9.** After reading from a file, what happens to the file on disk?

a) The file is deleted  
b) The file is unchanged  
c) The file is cleared  
d) The file is copied  

---

**Q10.** What is a potential consequence of NOT closing a file?

a) A compile error  
b) The program crashes immediately  
c) Data may not be fully written (buffer not flushed)  
d) The file is automatically deleted  

---

## Answers

| Q | Answer |
|---|--------|
| 1 | c |
| 2 | c |
| 3 | b |
| 4 | b |
| 5 | b |
| 6 | c |
| 7 | b |
| 8 | c |
| 9 | b |
| 10 | c |
