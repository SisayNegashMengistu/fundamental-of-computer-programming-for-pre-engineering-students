// Example 13-01: Class – Rectangle with encapsulation

#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // Parameterized constructor
    Rectangle(double w, double h) : width(w), height(h) {}

    // Getters
    double getWidth()  const { return width;  }
    double getHeight() const { return height; }

    // Setters with validation
    void setWidth(double w)  { if (w > 0) width  = w; }
    void setHeight(double h) { if (h > 0) height = h; }

    // Methods
    double area()      const { return width * height; }
    double perimeter() const { return 2 * (width + height); }

    void display() const {
        cout << "Rectangle " << width << " x " << height << endl;
        cout << "  Area      = " << area()      << " m^2" << endl;
        cout << "  Perimeter = " << perimeter() << " m"   << endl;
    }
};

int main() {
    Rectangle r1(4.0, 6.0);
    Rectangle r2(10.5, 3.2);

    r1.display();
    r2.display();

    r1.setWidth(8.0);
    cout << "\nAfter updating width:" << endl;
    r1.display();

    return 0;
}
