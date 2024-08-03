#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 'T' || c == 't')
            return true;
        else if (c == 'F' || c == 'f')
            return false;
        else if (c == '&') {
            if (result)
                result = true;
            else
                result = false;
        } 
        else if (c == '|') {
            if (result)
                result = true;
            else
                result = false;
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}