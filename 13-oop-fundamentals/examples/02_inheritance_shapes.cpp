// Example 13-02: Inheritance – Shapes hierarchy

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Base class
class Shape {
protected:
    string color;
public:
    Shape(const string& c) : color(c) {}
    virtual double area() const = 0;  // pure virtual
    virtual void display() const {
        cout << "Color: " << color << ", Area = " << area() << endl;
    }
    virtual ~Shape() {}
};

// Derived: Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r, const string& c) : Shape(c), radius(r) {}
    double area() const override { return M_PI * radius * radius; }
};

// Derived: Triangle
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h, const string& c)
        : Shape(c), base(b), height(h) {}
    double area() const override { return 0.5 * base * height; }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(5.0, "Red");
    shapes[1] = new Triangle(6.0, 4.0, "Blue");
    shapes[2] = new Circle(3.0, "Green");

    for (int i = 0; i < 3; i++) {
        shapes[i]->display();
        delete shapes[i];
    }

    return 0;
}
