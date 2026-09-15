# Exercises – Module 10: Pointers

---

## Exercise 1: Address Explorer

Write a program that declares three variables of different types (`int`, `double`, `char`). For each, print the variable's value and its memory address using `&`. Observe how addresses differ.

---

## Exercise 2: Swap Using Pointers

Write a function `void swapByPointer(int* a, int* b)` that swaps two integers using pointers. Test it in `main()` and verify the swap worked.

---

## Exercise 3: Pointer Arithmetic

Declare an array `int arr[] = {10, 20, 30, 40, 50}`. Use only pointer arithmetic (no `arr[i]` syntax) to print all elements.

---

## Exercise 4: Dynamic Array

Write a program that:
1. Asks the user how many temperature readings to enter (`n`)
2. Dynamically allocates an array of `n` doubles
3. Reads the values
4. Finds and prints the min, max, and average
5. Frees the memory

---

## Exercise 5: Null Pointer Safety

Write a program that demonstrates the danger of using an uninitialized pointer (show the concept), then show the safe version that initializes to `nullptr` and checks before dereferencing.

---

## Exercise 6: Pointer to Function Result

Write a function `int* findMax(int arr[], int size)` that returns a **pointer** to the largest element in the array. In `main()`, use the returned pointer to print and modify the maximum value.

---

## Submission

Save as `exercise1.cpp` through `exercise6.cpp`.
