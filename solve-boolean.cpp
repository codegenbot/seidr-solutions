```
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
            t = (s[i+1] == 'T' || s[i+1] == 't'); 
            i++; //to avoid checking the same character again
        } else if (s[i] == 'F' || s[i] == 'f') {
            f = (s[i+1] == 'F' || s[i+1] == 'f'); 
            i++; //to avoid checking the same character again
        }
    }
    
    return t;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    getline(cin, s);
    s.erase(s.find_first_not_of("\n"), string::npos); // remove newline characters from the input string
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}