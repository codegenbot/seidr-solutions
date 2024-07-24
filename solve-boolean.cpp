#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 't') return true;
        else if (s[i] == 'f') return false;
        else if (s[i] == '|') {
            i++;
            bool first = solveBoolean(s.substr(i));
            i += s.find('&', i) - 1;
            bool second = solveBoolean(s.substr(i));
            return first || second;
        }
        else if (s[i] == '&') {
            i++;
            bool first = solveBoolean(s.substr(i));
            i += s.find('|', i) - 1;
            bool second = solveBoolean(s.substr(i));
            return first && second;
        }
        i++;
    }
    return false; // default to False if no T or F found
}

int main() {
    string input;
    cout << "Enter a Boolean expression (T/F/|/&): ";
    cin >> input;
    bool output = solveBoolean(input);
    cout << (output ? "True" : "False") << endl;
    return 0;
}