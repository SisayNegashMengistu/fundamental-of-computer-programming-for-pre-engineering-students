/*
 * Module 12 — Structures and User-Defined Types
 * File: structures_demo.cpp
 * Description: Demonstrates struct declaration, initialization,
 *              nested structs, array of structs, and typedef.
 *
 * Compile:  g++ -o structs structures_demo.cpp
 * Run:      ./structs
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ─── Struct Definitions ────────────────────────────────────────────────────

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int    id;
    string name;
    double gpa;
    Date   enrollment;   // nested struct
};

// ─── Function Prototypes ───────────────────────────────────────────────────
void printStudent(const Student &s);
void printDate(const Date &d);

// ─── main ──────────────────────────────────────────────────────────────────
int main() {
    // 1. Single struct
    cout << "=== Single Struct ===" << endl;
    Student s1 = {1001, "Sisay Negash", 3.85, {10, 9, 2023}};
    printStudent(s1);

    // 2. Modifying a struct member
    s1.gpa = 3.90;
    cout << "Updated GPA: " << s1.gpa << endl;

    // 3. Array of structs
    cout << "\n=== Array of Students ===" << endl;
    Student roster[3] = {
        {1001, "Sisay",  3.85, {1,  9, 2023}},
        {1002, "Amina",  3.60, {1,  9, 2023}},
        {1003, "Daniel", 3.45, {15, 9, 2023}}
    };

    cout << left << setw(6)  << "ID"
         << left << setw(12) << "Name"
         << right << setw(8) << "GPA" << endl;
    cout << string(28, '-') << endl;
    for (int i = 0; i < 3; i++) {
        cout << left  << setw(6)  << roster[i].id
             << left  << setw(12) << roster[i].name
             << right << setw(8)  << fixed << setprecision(2) << roster[i].gpa
             << endl;
    }

    // 4. Pointer to struct
    cout << "\n=== Pointer to Struct ===" << endl;
    Student *ptr = &s1;
    cout << "Name via pointer: " << ptr->name << endl;   // arrow operator
    cout << "GPA via pointer : " << ptr->gpa  << endl;

    return 0;
}

// ─── Function Definitions ──────────────────────────────────────────────────

void printDate(const Date &d) {
    cout << d.day << "/" << d.month << "/" << d.year;
}

void printStudent(const Student &s) {
    cout << "ID      : " << s.id   << endl;
    cout << "Name    : " << s.name << endl;
    cout << "GPA     : " << fixed << setprecision(2) << s.gpa << endl;
    cout << "Enrolled: ";
    printDate(s.enrollment);
    cout << endl;
}
