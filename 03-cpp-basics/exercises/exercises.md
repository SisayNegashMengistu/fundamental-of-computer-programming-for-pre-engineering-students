# Exercises – Module 03: C++ Basics & Program Structure

---

## Exercise 1: Add Proper Comments

Add clear, meaningful comments to the following program:

```cpp
#include <iostream>
using namespace std;

#define G 9.81

int main() {
    double mass, force;
    cout << "Enter mass (kg): ";
    cin >> mass;
    force = mass * G;
    cout << "Weight = " << force << " N" << endl;
    return 0;
}
```

---

## Exercise 2: Identify Missing Parts

The following program has structural problems. List what is wrong and write the corrected version:

```cpp
include <iostream>

int main()
    cout >> "Hello!" >> endl;
    return 0
```

---

## Exercise 3: Use `#define` for Constants

Write a program that uses `#define` to define the following constants, then calculates and displays the gravitational potential energy of an object:

- `G = 9.81` (gravitational acceleration, m/s²)
- Use the formula: `PE = m * G * h`
  - `m` = mass in kg (input from user)
  - `h` = height in meters (input from user)

---

## Exercise 4: Multiple Headers

Write a program that:
1. Includes `<iostream>` and `<cmath>`
2. Asks the user for two sides of a right triangle (`a` and `b`)
3. Calculates and displays the hypotenuse using `sqrt()`

---

## Exercise 5: Style Practice

Rewrite the following poorly formatted program with good style (proper indentation, meaningful names, comments):

```cpp
#include<iostream>
using namespace std;
int main(){double x=100;double y=x*0.2;double z=x-y;cout<<"Result: "<<z<<endl;return 0;}
```

---

## Submission

Save solutions as `exercise1.cpp`, `exercise2.cpp`, `exercise3.cpp`, `exercise4.cpp`, `exercise5.cpp`.
