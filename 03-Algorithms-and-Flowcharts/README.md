# Module 03 — Algorithms and Flowcharts

## 🎯 Learning Objectives

- Define what an algorithm is and list its key properties
- Write algorithms using pseudocode
- Understand and use standard flowchart symbols
- Implement basic algorithms in C++

---

## 3.1 What Is an Algorithm?

An **algorithm** is a well-defined, step-by-step procedure that solves a problem in a finite number of steps.

**Properties of a valid algorithm:**
1. **Finiteness** — It terminates after a finite number of steps
2. **Definiteness** — Each step is precisely defined (no ambiguity)
3. **Input** — Has zero or more inputs
4. **Output** — Produces at least one output
5. **Effectiveness** — Each step is simple enough to be executed

---

## 3.2 Pseudocode

**Pseudocode** describes an algorithm in plain English-like syntax. It is not tied to any language but is easy to convert to C++.

**Conventions used in this course:**

```
INPUT x          ← read a value
OUTPUT / PRINT   ← display a value
SET x = 5        ← assign value
IF ... THEN ...  ← condition
FOR i = 1 TO n   ← counted loop
WHILE condition  ← conditional loop
```

### Example: Swap Two Variables

```
Algorithm Swap(A, B):
  SET temp = A
  SET A = B
  SET B = temp
  PRINT A, B
```

---

## 3.3 Flowchart Symbols

| Symbol | Shape | Meaning |
|--------|-------|---------|
| Terminal | Oval / Rounded rectangle | Start / End |
| Process | Rectangle | Computation or action |
| Decision | Diamond | Yes/No question |
| Input/Output | Parallelogram | Read or write data |
| Arrow | Line with arrowhead | Flow direction |

### Example Flowchart: Check Even or Odd

```
    ┌─────────┐
    │  START  │
    └────┬────┘
         │
    ┌────▼─────────┐
    │  INPUT n     │
    └────┬─────────┘
         │
    ┌────▼────────────────┐
    │  Is n % 2 == 0?     │
    └────┬──────────┬─────┘
        YES         NO
         │           │
   ┌─────▼──────┐  ┌─▼───────────┐
   │ PRINT Even │  │ PRINT Odd   │
   └─────┬──────┘  └─────┬───────┘
         └────────┬───────┘
              ┌───▼───┐
              │  END  │
              └───────┘
```

---

## 3.4 Common Algorithm Patterns

### Accumulator Pattern (Sum)

```
SET total = 0
FOR each value:
    SET total = total + value
PRINT total
```

### Counter Pattern

```
SET count = 0
FOR each item that matches condition:
    SET count = count + 1
PRINT count
```

### Search Pattern (Linear Search)

```
FOR i = 0 TO size-1:
    IF array[i] == target:
        PRINT "Found at index i"
        STOP
PRINT "Not found"
```

---

## 3.5 Example Algorithms in C++

See `algorithm_examples.cpp` in this folder for implementations of:
- Maximum of three numbers
- Prime number check
- Linear search

---

## 📝 Quiz — Module 03

1. List the five properties of a valid algorithm.
2. What does a **diamond** shape represent in a flowchart?
3. Write a pseudocode algorithm to find the **minimum** of an array.
4. What is the difference between pseudocode and actual code?
5. Draw (or describe in text) a flowchart for the algorithm: "Read 5 numbers and print their sum."

---

## 🔗 Navigation

⬅️ [Module 02](../02-Problem-Solving-and-Computational-Thinking/README.md) | ➡️ [Module 04](../04-Variables-Constants-and-Data-Types/README.md)
