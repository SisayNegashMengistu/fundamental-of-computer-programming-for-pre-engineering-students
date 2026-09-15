// Example 12-01: Write and read a file

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // --- Write ---
    ofstream outFile("measurements.txt");
    if (!outFile) {
        cerr << "Failed to open file for writing." << endl;
        return 1;
    }
    outFile << "Time(s)  Force(N)  Displacement(mm)" << endl;
    outFile << "0.0      0.0       0.0" << endl;
    outFile << "1.0      500.0     2.5" << endl;
    outFile << "2.0      1000.0    5.0" << endl;
    outFile << "3.0      1500.0    7.5" << endl;
    outFile.close();
    cout << "Written to measurements.txt" << endl;

    // --- Read back ---
    ifstream inFile("measurements.txt");
    if (!inFile) {
        cerr << "Failed to open file for reading." << endl;
        return 1;
    }
    string line;
    cout << "\n--- File contents ---" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
