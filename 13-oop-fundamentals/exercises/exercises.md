# Exercises – Module 13: OOP Fundamentals

---

## Exercise 1: BankAccount Class

Design a `BankAccount` class with:
- Private fields: `owner` (string), `balance` (double), `accountNumber` (int)
- Constructor to initialize all fields
- Methods: `deposit(double)`, `withdraw(double)` (reject if insufficient funds), `displayInfo()`
- Getter for `balance`

Test by creating two accounts, making deposits and withdrawals.

---

## Exercise 2: Student Class

Create a `Student` class with:
- `name`, `id`, grades array (5 subjects)
- Constructor
- Method to compute average
- Method to determine pass/fail (average ≥ 60)
- `display()` method printing full report

---

## Exercise 3: Inheritance – Vehicle Hierarchy

Create a base class `Vehicle` with attributes `make`, `model`, `year`, `speed` and a method `accelerate(double)`.

Derive:
- `Car` (adds `numDoors`)
- `Motorcycle` (adds `hasSidecar`)

Each derived class should override a `display()` method.

---

## Exercise 4: Temperature Class (Encapsulation)

Create a `Temperature` class that stores a value in Celsius and provides:
- Validation (no values below -273.15°C)
- Getters for Celsius, Fahrenheit, Kelvin
- A `display()` method

---

## Exercise 5: Resistor Class (Engineering)

Create a `Resistor` class:
- Fields: `name`, `resistance` (Ω), `voltage` (V)
- Methods: `current()` = V/R, `power()` = V²/R
- Constructor and `display()` method

Create an array of 5 resistors and display their properties.

---

## Submission

Save as `exercise1.cpp` through `exercise5.cpp`.
