```cpp
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string s) {
    bool result = true; // assume the expression is true initially
    for (char c : s) {
        if (c == 'T' || c == 't') {
            return true;
        } else if (c == 'F' || c == 'f') {
            return false;
        } else if (c == '&') {
            result = false; // when we encounter &, the result becomes false
        } else if (c == '|') {
            bool temp = result; // store the current value of result
            result = false; // reset the result to false for |
            result |= temp; // then, or the stored value with the new result
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