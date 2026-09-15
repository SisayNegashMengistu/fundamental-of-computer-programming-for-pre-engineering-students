# Lesson 02 – Problem Solving & Algorithms

## 1. What is an Algorithm?

An **algorithm** is a step-by-step set of instructions to solve a problem or accomplish a task. Every program you write is an implementation of one or more algorithms.

**Properties of a good algorithm:**
- **Finite** – it must terminate after a finite number of steps
- **Definite** – each step must be clear and unambiguous
- **Input** – it takes zero or more inputs
- **Output** – it produces at least one output
- **Effective** – each step must be feasible and achievable

**Real-world example (brewing tea):**
1. Boil water
2. Put a tea bag in a cup
3. Pour boiling water into the cup
4. Wait 3 minutes
5. Remove the tea bag
6. Add sugar/milk as desired
7. Serve

---

## 2. Computational Thinking

**Computational thinking** is a problem-solving approach with four pillars:

| Pillar | Meaning | Example |
|--------|---------|---------|
| **Decomposition** | Break the problem into smaller sub-problems | Calculating a bridge load = sum of individual member loads |
| **Pattern recognition** | Identify similarities and patterns | All loops repeat a block of code |
| **Abstraction** | Focus on essential details; ignore irrelevant ones | Model a car as mass + velocity, ignoring its color |
| **Algorithmic thinking** | Design a step-by-step solution | Write exact instructions a computer can follow |

---

## 3. Pseudocode

**Pseudocode** is an informal, language-independent description of an algorithm. It uses English-like statements and common programming constructs without strict syntax rules.

### Common Pseudocode Conventions

```
START
  INPUT value
  IF condition THEN
    statements
  ELSE
    statements
  END IF
  FOR counter FROM 1 TO n DO
    statements
  END FOR
  OUTPUT result
END
```

### Example: Find the larger of two numbers

```
START
  INPUT a, b
  IF a > b THEN
    OUTPUT "a is larger"
  ELSE IF b > a THEN
    OUTPUT "b is larger"
  ELSE
    OUTPUT "they are equal"
  END IF
END
```

### Example: Calculate the average of n grades

```
START
  INPUT n
  SET sum = 0
  FOR i FROM 1 TO n DO
    INPUT grade
    SET sum = sum + grade
  END FOR
  SET average = sum / n
  OUTPUT average
END
```

---

## 4. Flowcharts

A **flowchart** is a visual diagram representing an algorithm using standardized symbols.

### Standard Flowchart Symbols

| Symbol | Shape | Purpose |
|--------|-------|---------|
| Terminal | Oval / Rounded Rectangle | Start / End |
| Process | Rectangle | Computation or action |
| Decision | Diamond | Yes/No question (branch) |
| Input/Output | Parallelogram | Read input / display output |
| Arrow | Line with arrowhead | Flow of control |

### Example Flowchart: Check if a number is even or odd

```
         ┌─────────┐
         │  START  │
         └────┬────┘
              │
         ┌────▼──────────┐
         │  INPUT number │
         └────┬──────────┘
              │
         ┌────▼──────────────────┐
         │  number % 2 == 0 ?    │
         └────┬──────────────────┘
           Yes│              │No
         ┌────▼─────┐   ┌────▼──────┐
         │ Print    │   │ Print     │
         │ "Even"   │   │ "Odd"     │
         └────┬─────┘   └────┬──────┘
              └──────┬───────┘
                ┌────▼────┐
                │   END   │
                └─────────┘
```

---

## 5. From Algorithm to C++ Code

Once you have pseudocode or a flowchart, translating to C++ becomes straightforward.

**Pseudocode:**
```
INPUT a, b
SET sum = a + b
OUTPUT sum
```

**C++ Code:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    cout << "Sum = " << sum << endl;
    return 0;
}
```

---

## 6. Engineering Problem Example

**Problem:** Calculate the force on a structural member using Hooke's Law:
`F = k × x`  
where `k` is the spring constant (N/m) and `x` is the displacement (m).

**Pseudocode:**
```
START
  INPUT k (spring constant in N/m)
  INPUT x (displacement in m)
  SET F = k * x
  OUTPUT F (force in Newtons)
END
```

**C++ Code:**
```cpp
#include <iostream>
using namespace std;

int main() {
    double k, x, F;
    cout << "Enter spring constant (N/m): ";
    cin >> k;
    cout << "Enter displacement (m): ";
    cin >> x;
    F = k * x;
    cout << "Force = " << F << " N" << endl;
    return 0;
}
```

---

## Summary

- An algorithm is a finite, clear, step-by-step solution to a problem
- Computational thinking: decompose → recognize patterns → abstract → design algorithm
- Pseudocode describes logic informally in English-like statements
- Flowcharts represent algorithms visually using standard symbols
- Pseudocode/flowcharts translate directly to C++ programs

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 03 – C++ Basics & Program Structure](../03-cpp-basics/README.md)
