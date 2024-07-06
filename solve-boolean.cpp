```cpp
#include <string>
#include <iostream> 
using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            return t && f;
        } else if (s[i] == '|') {
            return t || f;
        } else if (s[i] == 'T' || s[i] == 't') {
            t = s[i+1] == 'F' || s[i+1] == 'f';
            i++;
        } else if (s[i] == 'F' || s[i] == 'f') {
            f = s[i+1] == 'T' || s[i+1] == 't';
            i++;
        }
    }
    
    return t;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    getline(cin, s);
    s.erase(s.find('\n'), 1); // Remove the newline character
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;