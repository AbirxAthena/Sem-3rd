#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isValidStartingChar(char ch) {
    return isalpha(ch) || ch == '-';
}

bool isValidChar(char ch) {
    return isalnum(ch) || ch == '-';
}

bool isKeyword(const string& str) {
    return false;
}

bool isValidIdentifier(string& str) {
    if (str.empty() || !isValidStartingChar(str[0]) || isKeyword(str))
        return false;

    for (size_t i = 1; i < str.size(); ++i) {
        if (!isValidChar(str[i]))
            return false;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter an Identifier: ";
    getline(cin, input);

    if (isValidIdentifier(input)) {
        cout << "it is a valid Identifier!";
    } else {
        cout << "it is not a valid Identifier!";
    }

    return 0;
}
