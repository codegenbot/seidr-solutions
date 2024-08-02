#include <iostream>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            result &= true;
        } else if (s[i] == '|') {
            result |= true;
        }
    }
    return result;
}

int main() {
    string inputs[] = {"T&F|F", "F&F&F", "|T&T&F"};
    for (string input : inputs) {
        cout << input << ": " << solveBoolean(input) << endl;
    }
    return 0;
}