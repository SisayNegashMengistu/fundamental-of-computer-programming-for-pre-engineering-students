# Lesson 13 – OOP Fundamentals

## 1. From Structs to Classes

A `class` is like a `struct` but with:
- **Access control** (`public`, `private`, `protected`)
- **Member functions** (methods) defined inside
- **Constructors** and **destructors**

The four pillars of OOP:

| Pillar | Description |
|--------|-------------|
| **Encapsulation** | Bundling data + functions; hiding internal details |
| **Inheritance** | Deriving new classes from existing ones |
| **Polymorphism** | One interface, many implementations |
| **Abstraction** | Exposing only what is necessary |

---

## 2. Defining a Class

```cpp
class Circle {
private:
    double radius;   // private: only accessible inside the class

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Member functions
    double area() {
        return 3.14159 * radius * radius;
    }

    double circumference() {
        return 2 * 3.14159 * radius;
    }

    // Getter
    double getRadius() { return radius; }

    // Setter
    void setRadius(double r) {
        if (r > 0) radius = r;
    }
};
```

---

## 3. Creating Objects

```cpp
Circle c1(5.0);     // calls constructor with r = 5
Circle c2(10.0);

cout << "c1 area = " << c1.area() << endl;
cout << "c2 circumference = " << c2.circumference() << endl;

c1.setRadius(7.5);  // update via setter
```

---

## 4. Access Modifiers

| Modifier | Accessible from |
|----------|----------------|
| `private` | Only inside the class |
| `public` | Anywhere (inside and outside) |
| `protected` | Inside the class and derived classes |

By default, class members are **private** (unlike `struct`, where they are public).

---

## 5. Constructors and Destructors

### Constructor

Called automatically when an object is created. Initializes member variables.

```cpp
class Rectangle {
private:
    double width, height;
public:
    // Default constructor
    Rectangle() : width(1.0), height(1.0) {}

    // Parameterized constructor
    Rectangle(double w, double h) : width(w), height(h) {}

    double area()      { return width * height; }
    double perimeter() { return 2 * (width + height); }
};
```

### Destructor

Called automatically when an object goes out of scope. Used to free resources.

```cpp
class MyClass {
public:
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }
};
```

---

## 6. Encapsulation

Encapsulation protects data by making it `private` and providing `public` getters/setters:

```cpp
class Temperature {
private:
    double celsius;

public:
    Temperature(double c) : celsius(c) {}

    double getCelsius()    { return celsius; }
    double getFahrenheit() { return celsius * 9.0 / 5.0 + 32; }
    double getKelvin()     { return celsius + 273.15; }

    void setCelsius(double c) {
        if (c > -273.15) celsius = c;  // cannot go below absolute zero
    }
};
```

---

## 7. Inheritance

A **derived class** inherits members from a **base class**:

```cpp
// Base class
class Shape {
protected:
    string color;
public:
    Shape(string c) : color(c) {}
    void displayColor() { cout << "Color: " << color << endl; }
    virtual double area() = 0;  // pure virtual function
};

// Derived class
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r, string c) : Shape(c), radius(r) {}
    double area() override {
        return 3.14159 * radius * radius;
    }
};

// Another derived class
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h, string c) : Shape(c), width(w), height(h) {}
    double area() override { return width * height; }
};
```

---

## 8. Polymorphism (Introductory)

```cpp
Shape* shapes[2];
shapes[0] = new Circle(5.0, "Red");
shapes[1] = new Rectangle(4.0, 6.0, "Blue");

for (int i = 0; i < 2; i++) {
    shapes[i]->displayColor();
    cout << "Area = " << shapes[i]->area() << endl;
}

// Clean up
delete shapes[0];
delete shapes[1];
```

The same call `shapes[i]->area()` calls different implementations depending on the actual object type — this is **runtime polymorphism**.

---

## 9. Engineering Example: Circuit Component Class

```cpp
#include <iostream>
#include <string>
using namespace std;

class Resistor {
private:
    string name;
    double resistance;  // Ohms
    double voltage;     // Volts

public:
    Resistor(string n, double r, double v)
        : name(n), resistance(r), voltage(v) {}

    double current()  { return voltage / resistance; }       // I = V/R
    double power()    { return voltage * current(); }        // P = VI

    void display() {
        cout << "Resistor : " << name << endl;
        cout << "  R = " << resistance << " Ω" << endl;
        cout << "  V = " << voltage    << " V" << endl;
        cout << "  I = " << current()  << " A" << endl;
        cout << "  P = " << power()    << " W" << endl;
    }
};

int main() {
    Resistor r1("R1", 100.0, 5.0);
    Resistor r2("R2", 470.0, 12.0);
    r1.display();
    r2.display();
    return 0;
}
```

---

## Summary

- A `class` bundles data (fields) and behavior (methods)
- `private` members are hidden; `public` members form the interface
- Constructors initialize objects; destructors clean up resources
- Encapsulation protects data through getters/setters
- Inheritance lets derived classes reuse base class code
- Polymorphism lets one function call behave differently based on object type

---

## Next Steps

- Complete the [exercises](exercises/exercises.md)
- Take the [quiz](quiz.md)
- Move to [Module 14 – Debugging & Error Handling](../14-debugging-error-handling/README.md)
