// Example 06-01: if-else if-else – Grade Classification

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter exam score (0-100): ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A – Excellent" << endl;
    } else if (score >= 80) {
        cout << "Grade: B – Very Good" << endl;
    } else if (score >= 70) {
        cout << "Grade: C – Good" << endl;
    } else if (score >= 60) {
        cout << "Grade: D – Satisfactory" << endl;
    } else {
        cout << "Grade: F – Fail" << endl;
    }

    return 0;
}
