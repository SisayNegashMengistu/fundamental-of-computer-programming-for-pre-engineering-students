// Example 07-02: while loop – Input validation

#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Enter a valid temperature (-50 to 60 °C): ";
    cin >> temperature;

    while (temperature < -50 || temperature > 60) {
        cout << "Invalid! Enter a temperature between -50 and 60: ";
        cin >> temperature;
    }

    cout << "Recorded temperature: " << temperature << " °C" << endl;
    return 0;
}
