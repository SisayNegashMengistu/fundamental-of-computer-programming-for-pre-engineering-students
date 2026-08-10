/*
 * Module 14 — Object-Oriented Programming Fundamentals
 * File: oop_demo.cpp
 * Description: Demonstrates classes, objects, constructors, encapsulation,
 *              and basic inheritance in C++.
 *
 * Compile:  g++ -o oop oop_demo.cpp
 * Run:      ./oop
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ─── Class 1: BankAccount (Encapsulation) ─────────────────────────────────
class BankAccount {
private:
    string owner;
    double balance;

public:
    // Constructor
    BankAccount(string ownerName, double initialBalance) {
        owner   = ownerName;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    // Deposit — validates amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw — validates sufficient funds
    bool withdraw(double amount) {
        if (amount <= 0) { cout << "Invalid amount." << endl; return false; }
        if (amount > balance) { cout << "Insufficient funds." << endl; return false; }
        balance -= amount;
        cout << "Withdrawn: $" << amount << endl;
        return true;
    }

    // Getter (accessor)
    double getBalance() const { return balance; }
    string getOwner()   const { return owner;   }

    // Display
    void display() const {
        cout << fixed << setprecision(2);
        cout << "Account Owner: " << owner   << endl;
        cout << "Balance      : $" << balance << endl;
    }
};

// ─── Class 2: Shape hierarchy (Inheritance) ───────────────────────────────
class Shape {
protected:
    string color;
public:
    Shape(string c) : color(c) {}
    virtual double area() const = 0;    // pure virtual — must be overridden
    virtual void describe() const {
        cout << "Shape color: " << color << ", Area: " << area() << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(string c, double r) : Shape(c), radius(r) {}
    double area() const override {
        return 3.14159265 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(string c, double w, double h) : Shape(c), width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

// ─── main ──────────────────────────────────────────────────────────────────
int main() {
    // Using BankAccount class
    cout << "=== Bank Account ===" << endl;
    BankAccount account("Sisay Negash", 1000.0);
    account.display();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);   // should fail
    cout << "Final balance: $" << account.getBalance() << endl;

    // Using Shape hierarchy (polymorphism)
    cout << "\n=== Shapes (Inheritance + Polymorphism) ===" << endl;
    Circle    c("Red",  5.0);
    Rectangle r("Blue", 4.0, 6.0);

    Shape *shapes[2] = {&c, &r};
    for (int i = 0; i < 2; i++) {
        shapes[i]->describe();
    }

    return 0;
}
