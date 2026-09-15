// Project P1 – Student Grade Management System
// Concepts: arrays, structs, functions, file I/O, sorting
//
// Features:
//   - Add student records (name, ID, 5 subject grades)
//   - Calculate each student's average and letter grade
//   - Sort students by average (descending)
//   - Display a formatted report
//   - Save report to a file

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_STUDENTS   = 50;
const int NUM_SUBJECTS   = 5;

struct Student {
    int    id;
    string name;
    double grades[NUM_SUBJECTS];
    double average;
    char   letterGrade;
};

// Calculate average of grades
double calcAverage(const double grades[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) sum += grades[i];
    return sum / n;
}

// Determine letter grade
char letterGrade(double avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

// Input a student record
Student inputStudent() {
    Student s;
    cout << "Enter student ID  : ";
    cin >> s.id;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter " << NUM_SUBJECTS << " grades (0-100):" << endl;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        cout << "  Subject " << i + 1 << ": ";
        do { cin >> s.grades[i]; }
        while (s.grades[i] < 0 || s.grades[i] > 100);
    }
    s.average     = calcAverage(s.grades, NUM_SUBJECTS);
    s.letterGrade = letterGrade(s.average);
    return s;
}

// Print header
void printHeader() {
    cout << string(70, '=') << endl;
    cout << left << setw(6)  << "ID"
         << setw(22) << "Name"
         << setw(10) << "Average"
         << setw(8)  << "Grade" << endl;
    cout << string(70, '-') << endl;
}

// Print one student row
void printStudent(const Student& s) {
    cout << left  << setw(6)  << s.id
         << setw(22) << s.name
         << right << setw(8) << fixed << setprecision(2) << s.average
         << setw(8) << s.letterGrade << endl;
}

// Save report to file
void saveReport(const Student students[], int n, const string& filename) {
    ofstream fout(filename);
    if (!fout) { cerr << "Cannot save to " << filename << endl; return; }

    fout << "Student Grade Report" << endl;
    fout << string(50, '=') << endl;
    fout << left << setw(6) << "ID"
         << setw(22) << "Name"
         << setw(10) << "Average"
         << setw(6)  << "Grade" << endl;
    fout << string(50, '-') << endl;

    for (int i = 0; i < n; i++) {
        fout << left  << setw(6)  << students[i].id
             << setw(22) << students[i].name
             << right << setw(8) << fixed << setprecision(2)
             << students[i].average
             << setw(6) << students[i].letterGrade << endl;
    }
    fout.close();
    cout << "Report saved to " << filename << endl;
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    char choice;

    cout << "=== Student Grade Management System ===" << endl;

    do {
        if (count < MAX_STUDENTS) {
            students[count++] = inputStudent();
        } else {
            cout << "Maximum students reached." << endl;
        }
        cout << "Add another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Sort by average descending (simple bubble sort)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                swap(students[j], students[j + 1]);
            }
        }
    }

    // Display report
    cout << "\n=== Grade Report (sorted by average) ===" << endl;
    printHeader();
    for (int i = 0; i < count; i++) printStudent(students[i]);
    cout << string(70, '=') << endl;

    saveReport(students, count, "grade_report.txt");

    return 0;
}
