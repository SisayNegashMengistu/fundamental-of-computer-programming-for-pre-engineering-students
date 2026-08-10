# Exercises – Module 08: Functions

---

## Exercise 1: Max of Three

Write a function `int maxOfThree(int a, int b, int c)` that returns the largest of three integers. Test it in `main()`.

---

## Exercise 2: Power Function (Recursive)

Write a recursive function `double power(double base, int exp)` that calculates `base^exp`. Do not use `pow()` from `<cmath>`.

---

## Exercise 3: Is Prime?

Write a function `bool isPrime(int n)` that returns `true` if `n` is prime, `false` otherwise. Use it in `main()` to print all prime numbers between 1 and 100.

---

## Exercise 4: Swap via Reference

Write two versions of a swap function:
1. Pass by value – show that it does NOT swap the originals
2. Pass by reference – show that it DOES swap the originals

---

## Exercise 5: Overloaded `volume()`

Write three overloaded functions named `volume`:
- `volume(double r)` → sphere: `(4/3)πr³`
- `volume(double r, double h)` → cylinder: `πr²h`
- `volume(double l, double w, double h)` → rectangular prism: `l × w × h`

---

## Exercise 6: Engineering – Quadratic Roots

Write a function `void solveQuadratic(double a, double b, double c)` that computes and displays the roots of `ax² + bx + c = 0` using the quadratic formula. Handle all three cases (two real roots, one real root, complex roots).

**Formula:** `x = (-b ± sqrt(b² - 4ac)) / 2a`

---

## Submission

Save as `exercise1.cpp` through `exercise6.cpp`.
