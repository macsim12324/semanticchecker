#include <iostream>
#include <cctype>
using namespace std;

bool isValidIdentifier(const string& s) {
    if (s.empty())
        return false;

    // First character must be a letter or underscore
    if (!isalpha(s[0]) && s[0] != '_')
        return false;

    // Remaining characters
    for (char c : s) {
        if (!isalnum(c) && c != '_')
            return false;
    }

    return true;
}

int main() {
    string s;
    cout << "Enter identifier: ";
    cin >> s;

    if (isValidIdentifier(s))
        cout << "Valid identifier" << endl;
    else
        cout << "Invalid identifier" << endl;

    return 0;
}
