#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    bool temp = false;
    for (char c : s) {
        if (c == 'T' || c == 't') {
            return true;
        } else if (c == 'F' || c == 'f') {
            return false;
        } else if (c == '&') {
            result = temp;
            temp = false;
        } else if (c == '|') {
            temp = result;
            result = false;
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a Boolean expression (T/F/|&): ";
    cin >> s;

    bool result = solveBoolean(s);
    if(result)
        cout << "Result: TRUE" << endl;
    else
        cout << "Result: FALSE" << endl;

    return 0;
}