# Module 03 — Exercises

## Exercise 1: Flowchart Drawing

Draw a flowchart for each of the following algorithms:
1. Find the absolute value of a number
2. Check if a number is divisible by both 3 and 5
3. Print all even numbers from 1 to N

---

## Exercise 2: Pseudocode to C++

Convert this pseudocode to C++:

```
BEGIN
  INPUT n
  SET sum = 0
  SET i = 1
  WHILE i <= n:
      SET sum = sum + i * i
      SET i = i + 1
  END WHILE
  PRINT "Sum of squares:", sum
END
```

---

## Exercise 3: Trace the Algorithm

Trace through the following algorithm step by step when `arr = [5, 2, 8, 1, 9, 3]` and `target = 8`:

```
SET found = false
FOR i = 0 TO length(arr) - 1:
    IF arr[i] == target:
        PRINT "Found at index", i
        SET found = true
        STOP
IF NOT found:
    PRINT "Not found"
```

Write out the value of `i` at each step.

---

## Exercise 4: Write Your Own Algorithm

Write an algorithm (pseudocode or flowchart) for:
1. Converting seconds to hours, minutes, and seconds
2. Finding the GCD of two numbers using subtraction
3. Checking if a string is a palindrome

---

## Challenge: Bubble Sort

Write a pseudocode algorithm for **Bubble Sort** and then implement it in C++. Test it with the array `[64, 34, 25, 12, 22, 11, 90]`.

Expected sorted output: `[11, 12, 22, 25, 34, 64, 90]`
