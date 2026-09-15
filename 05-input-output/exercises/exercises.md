# Exercises – Module 05: Input & Output

---

## Exercise 1: Student Info Form

Write a program that asks for:
- Student's full name (use `getline`)
- Student ID (integer)
- GPA (double, 2 decimal places)

Display the information in a neat, aligned format.

---

## Exercise 2: Unit Converter

Write a program that:
1. Asks the user to enter a length in meters
2. Displays the equivalent in:
   - Centimeters (`× 100`)
   - Kilometers (`÷ 1000`)
   - Inches (`× 39.3701`)
   - Feet (`× 3.28084`)

Use `fixed` and `setprecision(4)` for consistent formatting.

---

## Exercise 3: Formatted Receipt

Write a program that simulates a receipt. Ask the user for:
- Item name (string)
- Unit price (double)
- Quantity (int)

Calculate the total and display:

```
========================
       STORE RECEIPT
========================
Item        : [name]
Unit Price  : $[price]
Quantity    : [qty]
------------------------
Total       : $[total]
========================
```

---

## Exercise 4: Engineering Data Table

Write a program that displays the following table about gravitational acceleration on different planets (hardcoded values — no user input needed):

| Planet | Gravity (m/s²) |
|--------|---------------|
| Earth  | 9.81 |
| Moon   | 1.62 |
| Mars   | 3.72 |
| Jupiter| 24.79 |

Use `setw` and `left`/`right` to align the columns.

---

## Submission

Save as `exercise1.cpp` through `exercise4.cpp`.
