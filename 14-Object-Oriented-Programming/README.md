# Module 14 — Object-Oriented Programming Fundamentals

## 🎯 Learning Objectives

- Understand the OOP paradigm and its four pillars
- Define classes and create objects
- Use constructors and destructors
- Apply encapsulation with access specifiers
- Understand basic inheritance and polymorphism

---

## 14.1 The OOP Paradigm

**Object-Oriented Programming (OOP)** models the world as a collection of interacting **objects**, each with **data** (attributes) and **behavior** (methods).

### Four Pillars of OOP

| Pillar | Meaning |
|--------|---------|
| **Encapsulation** | Bundle data and methods; hide internal details |
| **Inheritance** | A class can inherit properties from another class |
| **Polymorphism** | Same interface, different behavior |
| **Abstraction** | Expose only essential features |

---

## 14.2 Classes and Objects

A **class** is a blueprint; an **object** is an instance of that blueprint.

```cpp
class Car {
public:
    string brand;   // attribute
    int    speed;

    void accelerate() {    // method
        speed += 10;
        cout << "Speed: " << speed << endl;
    }
};

// Create object
Car myCar;
myCar.brand = "Toyota";
myCar.speed = 0;
myCar.accelerate();    // Speed: 10
```

---

## 14.3 Access Specifiers

| Specifier | Accessible from |
|-----------|----------------|
| `public` | Anywhere |
| `private` | Only inside the class |
| `protected` | Class and derived classes |

---

## 14.4 Constructors

A **constructor** automatically runs when an object is created:

```cpp
class Student {
private:
    string name;
    int    age;
public:
    // Constructor
    Student(string n, int a) : name(n), age(a) {}

    void display() {
        cout << name << ", Age: " << age << endl;
    }
};

Student s("Sisay", 20);   // constructor called here
s.display();
```

---

## 14.5 Encapsulation

Keep data `private`, expose it through `public` getter/setter methods:

```cpp
class Temperature {
private:
    double celsius;
public:
    void set(double c) {
        if (c >= -273.15) celsius = c;
    }
    double get()            const { return celsius; }
    double toFahrenheit()   const { return celsius * 9/5 + 32; }
};
```

---

## 14.6 Inheritance

```cpp
class Animal {
public:
    string name;
    void breathe() { cout << name << " is breathing." << endl; }
};

class Dog : public Animal {   // Dog inherits from Animal
public:
    void bark() { cout << name << " says: Woof!" << endl; }
};

Dog d;
d.name = "Rex";
d.breathe();   // inherited from Animal
d.bark();      // Dog's own method
```

---

## 14.7 Polymorphism

```cpp
class Shape {
public:
    virtual double area() = 0;   // pure virtual
};

class Circle : public Shape {
    double r;
public:
    Circle(double r) : r(r) {}
    double area() override { return 3.14159 * r * r; }
};

Shape *s = new Circle(5.0);
cout << s->area();   // calls Circle's area()
delete s;
```

---

## 📝 Quiz — Module 14

1. What is the difference between a class and an object?
2. What is encapsulation and why is it useful?
3. What does a constructor do?
4. What is the difference between `public` and `private` members?
5. Write a class `Rectangle` with `width` and `height` attributes and an `area()` method.
6. What is the difference between a regular method and a `virtual` method?

---

## 🔗 Navigation

⬅️ [Module 13](../13-File-Handling/README.md) | ➡️ [Module 15](../15-Debugging-and-Common-Errors/README.md)
