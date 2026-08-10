/*
 * Module 13 — File Handling
 * File: file_handling_demo.cpp
 * Description: Demonstrates writing to files, reading from files,
 *              appending, and checking file open status.
 *
 * Compile:  g++ -o files file_handling_demo.cpp
 * Run:      ./files
 *
 * Files created: students.txt
 */

#include <iostream>
#include <fstream>   // ifstream, ofstream, fstream
#include <string>
#include <sstream>
using namespace std;

int main() {
    // ── 1. Writing to a File ──────────────────────────────────────────────
    cout << "=== Writing to students.txt ===" << endl;
    ofstream outFile("students.txt");   // creates / overwrites

    if (!outFile.is_open()) {
        cerr << "Error: Could not open file for writing!" << endl;
        return 1;
    }

    // Write header and data rows
    outFile << "ID,Name,GPA\n";
    outFile << "1001,Sisay Negash,3.85\n";
    outFile << "1002,Amina Kebede,3.60\n";
    outFile << "1003,Daniel Bekele,3.45\n";

    outFile.close();
    cout << "File written successfully." << endl;

    // ── 2. Reading from a File ────────────────────────────────────────────
    cout << "\n=== Reading from students.txt ===" << endl;
    ifstream inFile("students.txt");

    if (!inFile.is_open()) {
        cerr << "Error: Could not open file for reading!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    // ── 3. Appending to a File ────────────────────────────────────────────
    cout << "\n=== Appending to students.txt ===" << endl;
    ofstream appendFile("students.txt", ios::app);   // append mode

    if (appendFile.is_open()) {
        appendFile << "1004,Yonas Hailu,3.72\n";
        appendFile.close();
        cout << "Record appended." << endl;
    }

    // ── 4. Parsing CSV Data from File ─────────────────────────────────────
    cout << "\n=== Parsed Student Records ===" << endl;
    ifstream parseFile("students.txt");

    if (parseFile.is_open()) {
        string header;
        getline(parseFile, header);  // skip header line

        int id;
        string name;
        double gpa;
        char comma;

        while (parseFile >> id >> comma >> ws) {
            getline(parseFile, name, ',');
            parseFile >> gpa;
            parseFile.ignore();
            cout << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << endl;
        }
        parseFile.close();
    }

    return 0;
}
