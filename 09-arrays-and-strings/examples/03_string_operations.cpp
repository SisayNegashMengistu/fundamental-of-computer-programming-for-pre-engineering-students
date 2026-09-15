// Example 09-03: std::string operations

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Length     : " << fullName.length() << " characters" << endl;
    cout << "First char : " << fullName[0] << endl;
    cout << "Uppercase  : ";
    for (char c : fullName) cout << (char)toupper(c);
    cout << endl;

    // Find a substring
    size_t pos = fullName.find(" ");
    if (pos != string::npos) {
        string firstName = fullName.substr(0, pos);
        string lastName  = fullName.substr(pos + 1);
        cout << "First name : " << firstName << endl;
        cout << "Last name  : " << lastName  << endl;
    }

    return 0;
}
