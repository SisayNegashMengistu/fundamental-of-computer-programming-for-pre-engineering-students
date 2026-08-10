// Example 11-01: Student record using struct

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    int    id;
    string name;
    double gpa;
};

void printStudent(const Student& s) {
    cout << setw(6) << s.id
         << setw(20) << s.name
         << setw(8) << fixed << setprecision(2) << s.gpa << endl;
}

int main() {
    const int N = 4;
    Student students[N] = {
        {1001, "Abebe Girma",   3.75},
        {1002, "Tigist Haile",  3.90},
        {1003, "Dawit Bekele",  3.55},
        {1004, "Sara Tesfaye",  3.80}
    };

    cout << setw(6)  << "ID"
         << setw(20) << "Name"
         << setw(8)  << "GPA" << endl;
    cout << string(34, '-') << endl;

    for (int i = 0; i < N; i++) {
        printStudent(students[i]);
    }

    return 0;
}
