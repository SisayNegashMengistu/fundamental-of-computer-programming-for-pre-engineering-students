# Quiz – Module 07: Loops

---

**Q1.** Which loop type should you use when the number of iterations is known in advance?

a) `while`  
b) `do-while`  
c) `for`  
d) `switch`  

---

**Q2.** What is the output of this code?

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    cout << i << " ";
}
```

a) `1 2 3 4 5`  
b) `1 2 4 5`  
c) `1 2`  
d) `3 4 5`  

---

**Q3.** A `do-while` loop differs from a `while` loop because:

a) It uses a different condition  
b) It always executes the body at least once  
c) It runs faster  
d) It cannot use `break`  

---

**Q4.** What does `break` do inside a loop?

a) Skips the current iteration  
b) Restarts the loop from the beginning  
c) Exits the loop immediately  
d) Pauses the loop for 1 second  

---

**Q5.** What is the output of this code?

```cpp
int sum = 0;
for (int i = 1; i <= 4; i++) {
    sum += i;
}
cout << sum;
```

a) 4  
b) 10  
c) 16  
d) 5  

---

**Q6.** In a nested loop with an outer loop running 5 times and an inner loop running 3 times, how many total iterations does the inner loop execute?

a) 5  
b) 3  
c) 8  
d) 15  

---

**Q7.** What is an infinite loop?

a) A loop that runs exactly 1000 times  
b) A loop that never terminates  
c) A loop inside another loop  
d) A loop using `do-while`  

---

**Q8.** Which statement best describes the `continue` keyword?

a) Ends the loop entirely  
b) Jumps to the next iteration, skipping remaining body statements  
c) Returns to the start of the program  
d) Increments the loop counter  

---

**Q9.** How many times will the following loop execute?

```cpp
int i = 10;
while (i > 0) {
    i -= 3;
}
```

a) 4  
b) 3  
c) 5  
d) Infinite  

---

**Q10.** Which loop guarantees execution of the body at least once, even if the condition is false from the start?

a) `for`  
b) `while`  
c) `do-while`  
d) `if`  

---

## Answers

| Q | Answer |
|---|--------|
| 1 | c |
| 2 | b |
| 3 | b |
| 4 | c |
| 5 | b |
| 6 | d |
| 7 | b |
| 8 | b |
| 9 | a |
| 10 | c |
