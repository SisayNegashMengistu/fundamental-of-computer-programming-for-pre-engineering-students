# Module 05 — Operators and Expressions

## 🎯 Learning Objectives

- Use arithmetic, relational, logical, and assignment operators
- Understand operator precedence and associativity
- Use the ternary operator for concise conditionals
- Evaluate expressions with mixed data types

---

## 5.1 Arithmetic Operators

| Operator | Name | Example | Result |
|----------|------|---------|--------|
| `+` | Addition | `5 + 3` | `8` |
| `-` | Subtraction | `9 - 4` | `5` |
| `*` | Multiplication | `3 * 4` | `12` |
| `/` | Division | `10 / 3` | `3` (integer) |
| `%` | Modulus | `10 % 3` | `1` |

> ⚠️ **Integer division truncates**: `7 / 2 = 3`, not `3.5`.  
> Use `7.0 / 2` or cast to double: `(double)7 / 2 = 3.5`

---

## 5.2 Relational Operators

| Operator | Meaning | Example | Result |
|----------|---------|---------|--------|
| `==` | Equal to | `5 == 5` | `true` |
| `!=` | Not equal | `5 != 3` | `true` |
| `>` | Greater than | `7 > 4` | `true` |
| `<` | Less than | `2 < 1` | `false` |
| `>=` | Greater or equal | `5 >= 5` | `true` |
| `<=` | Less or equal | `3 <= 6` | `true` |

---

## 5.3 Logical Operators

| Operator | Name | Description |
|----------|------|-------------|
| `&&` | AND | `true` only if **both** operands are true |
| `\|\|` | OR | `true` if **at least one** operand is true |
| `!` | NOT | Reverses the boolean value |

**Truth Table:**

| p | q | p && q | p \|\| q | !p |
|---|---|--------|--------|----|
| T | T | T | T | F |
| T | F | F | T | F |
| F | T | F | T | T |
| F | F | F | F | T |

---

## 5.4 Assignment Operators

```cpp
int x = 10;
x += 5;   // x = x + 5 = 15
x -= 3;   // x = x - 3 = 12
x *= 2;   // x = x * 2 = 24
x /= 4;   // x = x / 4 = 6
x %= 4;   // x = x % 4 = 2
```

---

## 5.5 Increment and Decrement

```cpp
int n = 5;
n++;   // Post-increment: use n, then add 1 → n becomes 6
++n;   // Pre-increment: add 1 first, then use → n becomes 7
n--;   // Post-decrement: use n, then subtract 1
--n;   // Pre-decrement: subtract 1 first, then use
```

---

## 5.6 Ternary (Conditional) Operator

```cpp
condition ? value_if_true : value_if_false
```

```cpp
int age = 18;
string status = (age >= 18) ? "Adult" : "Minor";
```

---

## 5.7 Operator Precedence (High → Low)

| Priority | Operators |
|----------|-----------|
| 1 (highest) | `()` parentheses |
| 2 | `!`, `++`, `--`, unary `-` |
| 3 | `*`, `/`, `%` |
| 4 | `+`, `-` |
| 5 | `<`, `<=`, `>`, `>=` |
| 6 | `==`, `!=` |
| 7 | `&&` |
| 8 | `\|\|` |
| 9 (lowest) | `=`, `+=`, `-=`, ... |

> 💡 When in doubt, use **parentheses** to make precedence explicit.

---

## 📝 Quiz — Module 05

1. What is the result of `15 % 4`?
2. What is the difference between `=` and `==`?
3. What is the result of `!(true && false)`?
4. Evaluate: `3 + 4 * 2 - 1`
5. Write a ternary expression to check if a number is positive.
6. What does `x *= 3` mean?

---

## 🔗 Navigation

⬅️ [Module 04](../04-Variables-Constants-and-Data-Types/README.md) | ➡️ [Module 06](../06-Input-and-Output/README.md)
