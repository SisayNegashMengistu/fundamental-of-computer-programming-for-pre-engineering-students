// Example 09-01: 1D array – Student grade statistics

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 8;
    double grades[N];

    cout << "Enter " << N << " student grades:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "  Grade " << i + 1 << ": ";
        cin >> grades[i];
    }

    double sum = 0, highest = grades[0], lowest = grades[0];
    for (int i = 0; i < N; i++) {
        sum += grades[i];
        if (grades[i] > highest) highest = grades[i];
        if (grades[i] < lowest)  lowest  = grades[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage : " << sum / N << endl;
    cout << "Highest : " << highest  << endl;
    cout << "Lowest  : " << lowest   << endl;

    return 0;
}
