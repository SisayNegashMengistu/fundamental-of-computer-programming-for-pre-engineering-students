# Module 02 — Problem Solving and Computational Thinking

## 🎯 Learning Objectives

- Define computational thinking and its four pillars
- Apply decomposition to break problems into smaller parts
- Use pattern recognition to find similarities in problems
- Develop algorithms using abstraction and step-by-step logic

---

## 2.1 What Is Computational Thinking?

**Computational thinking** is a problem-solving approach that involves thinking like a computer scientist. It does **not** mean thinking like a robot — it means breaking down complex problems into manageable steps.

### The Four Pillars

| Pillar | Definition | Example |
|--------|-----------|---------|
| **Decomposition** | Break a big problem into smaller sub-problems | A car engine = fuel system + cooling + electrical + ... |
| **Pattern Recognition** | Find similarities or repeating elements | All circles need radius to compute area |
| **Abstraction** | Focus on relevant details; hide complexity | Use `sqrt()` without knowing its internal math |
| **Algorithm Design** | Create a step-by-step solution | Recipe for baking bread |

---

## 2.2 Decomposition Example

**Problem:** Write a program to calculate a student's GPA.

**Decomposed sub-problems:**
1. Get the list of courses and grades
2. Convert letter grades to grade points
3. Multiply grade points by credit hours
4. Sum all (grade points × credits)
5. Divide by total credit hours
6. Display the result

Each sub-problem becomes a small, solvable task.

---

## 2.3 Pattern Recognition

When you notice the same logic repeating, you can generalize it.

**Example:** Computing the area of different shapes
- Square: `side × side`
- Rectangle: `length × width`
- Triangle: `0.5 × base × height`

**Pattern:** All use multiplication of dimensions — each can be a separate function with similar structure.

---

## 2.4 Abstraction

Abstraction means hiding unnecessary details so you can focus on the big picture.

**Example:** When you use `cout << "Hello";`, you don't need to know how the characters are encoded and sent to the screen — that complexity is **abstracted away**.

In programming, functions are a form of abstraction:
```cpp
double circleArea(double r) {
    return 3.14159 * r * r;  // details hidden inside
}
// Caller just does: circleArea(5.0)
```

---

## 2.5 Algorithms

An **algorithm** is a finite, ordered sequence of well-defined instructions that solves a problem.

### Properties of a Good Algorithm
- **Finite**: Must eventually stop
- **Definite**: Each step is clearly defined
- **Input**: Has zero or more inputs
- **Output**: Produces at least one output
- **Effective**: Each step can be carried out

### Example Algorithm: Find the Largest of Three Numbers

```
Algorithm FindMax:
  Input: Three numbers A, B, C
  1. Set max = A
  2. If B > max, set max = B
  3. If C > max, set max = C
  4. Output max
  End
```

---

## 2.6 Pseudocode

**Pseudocode** is an informal, English-like description of an algorithm — it's not real code, but it helps plan logic before writing actual code.

**Example:** Calculate average of N numbers

```
BEGIN
  SET total = 0
  INPUT N
  FOR i = 1 TO N:
      INPUT number
      SET total = total + number
  END FOR
  SET average = total / N
  PRINT average
END
```

---

## 2.7 From Problem to Program

The typical software development cycle:

```
1. Understand the problem
       ↓
2. Plan the algorithm (pseudocode / flowchart)
       ↓
3. Write the code (C++)
       ↓
4. Compile and test
       ↓
5. Debug if needed
       ↓
6. Deploy / submit
```

---

## 📝 Quiz — Module 02

1. What are the four pillars of computational thinking?
2. What is the difference between an **algorithm** and a **program**?
3. What does **abstraction** mean in programming?
4. Write a pseudocode algorithm that checks if a number is even or odd.
5. Apply decomposition to the problem: "Build a simple student grade system."

---

## 🔗 Navigation

⬅️ [Module 01](../01-Introduction-to-Programming/README.md) | ➡️ [Module 03](../03-Algorithms-and-Flowcharts/README.md)
