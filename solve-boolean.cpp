#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    if (s == "t") return true;
    if (s == "f") return false;
    
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '&') {
            i++;
            bool left = (s[i] == 't');
            i++;
            bool right = (s[i] == 't');
            i++;
            return left && right;
        } else if (s[i] == '|') {
            i++;
            bool left = (s[i] == 't');
            i++;
            bool right = (i < s.length()) ? (s[i] == 't') : false;
            i++;
            return left || right;
        }
    }
    
    return true; // default to True if no operator found
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool result = solveBoolean(input);
    cout << (result ? "True" : "False") << endl;
    return 0;
}