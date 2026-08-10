# Exercises – Module 04: Variables, Data Types & Operators

---

## Exercise 1: Variable Declarations

Declare and initialize variables of each of the following types, then print them:
- `int` (number of floors in a building)
- `double` (floor height in meters)
- `char` (a building classification label, e.g., 'A')
- `bool` (whether the building has an elevator)

---

## Exercise 2: Arithmetic Practice

Write a program that asks the user for two numbers and displays:
- Their sum
- Their difference
- Their product
- Their quotient (as a decimal, not integer division)
- The remainder when the first is divided by the second

---

## Exercise 3: Constants – Speed of Sound

Write a program using `const` to define the speed of sound in air (343 m/s). Then:
1. Ask the user for a distance in meters
2. Calculate how many seconds it takes for sound to travel that distance
3. Display the result

**Formula:** `time = distance / speed`

---

## Exercise 4: Ohm's Law Extended

Write a program that calculates power consumed in an electrical circuit.

**Formulas:**
- `P = V * I` (Power in Watts)
- `R = V / I` (Resistance in Ohms)

Ask the user for Voltage (V) and Current (I), then display the resistance and power.

---

## Exercise 5: Operator Precedence

Without running the code, predict the output, then verify by running:

```cpp
int a = 4, b = 2, c = 3;
cout << a + b * c << endl;      // ?
cout << (a + b) * c << endl;   // ?
cout << a * b + c * a << endl; // ?
```

---

## Exercise 6: Temperature Conversion

Write a program that:
1. Reads a temperature in Celsius
2. Converts to Fahrenheit: `F = (C * 9.0 / 5.0) + 32`
3. Converts to Kelvin: `K = C + 273.15`
4. Prints all three values

---

## Submission

Save as `exercise1.cpp` through `exercise6.cpp`.
