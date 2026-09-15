// Project P5 – Student Record Database (File-Backed)
// Concepts: file I/O, structs, arrays, search, sort, menus
//
// Features:
//   - Add, view, search, and delete student records
//   - Persist data to students_db.txt between runs

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

const string DB_FILE = "students_db.txt";

struct Student {
    int    id;
    string name;
    double gpa;
};

// Load records from file
vector<Student> loadDatabase() {
    vector<Student> db;
    ifstream fin(DB_FILE);
    if (!fin) return db;  // empty if file doesn't exist yet

    Student s;
    while (fin >> s.id >> s.gpa) {
        fin.ignore();
        getline(fin, s.name);
        db.push_back(s);
    }
    return db;
}

// Save records to file
void saveDatabase(const vector<Student>& db) {
    ofstream fout(DB_FILE);
    for (const auto& s : db)
        fout << s.id << " " << s.gpa << " " << s.name << "\n";
}

// Display all records
void listAll(const vector<Student>& db) {
    if (db.empty()) { cout << "No records found." << endl; return; }
    cout << left << setw(8) << "ID"
         << setw(25) << "Name"
         << setw(6)  << "GPA" << endl;
    cout << string(39, '-') << endl;
    for (const auto& s : db) {
        cout << left  << setw(8) << s.id
             << setw(25) << s.name
             << right << setw(5) << fixed << setprecision(2) << s.gpa << endl;
    }
}

// Add a record
void addStudent(vector<Student>& db) {
    Student s;
    cout << "Enter ID  : ";   cin >> s.id;
    cout << "Enter GPA : ";   cin >> s.gpa;
    cin.ignore();
    cout << "Enter Name: ";   getline(cin, s.name);
    db.push_back(s);
    cout << "Student added." << endl;
}

// Search by ID
void searchById(const vector<Student>& db) {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (const auto& s : db) {
        if (s.id == id) {
            cout << "Found: " << s.id << " " << s.name << " GPA=" << s.gpa << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

// Delete by ID
void deleteById(vector<Student>& db) {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;
    auto it = remove_if(db.begin(), db.end(),
                        [id](const Student& s){ return s.id == id; });
    if (it != db.end()) {
        db.erase(it, db.end());
        cout << "Record deleted." << endl;
    } else {
        cout << "ID not found." << endl;
    }
}

int main() {
    vector<Student> db = loadDatabase();
    int choice;

    do {
        cout << "\n=== Student Record Database ===" << endl;
        cout << "1. Add student" << endl;
        cout << "2. List all"   << endl;
        cout << "3. Search by ID" << endl;
        cout << "4. Delete by ID" << endl;
        cout << "5. Save and exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(db);   break;
            case 2: listAll(db);      break;
            case 3: searchById(db);   break;
            case 4: deleteById(db);   break;
            case 5: saveDatabase(db); cout << "Saved. Goodbye!" << endl; break;
            default: cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
