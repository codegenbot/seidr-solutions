#include <vector>
#include <iostream>
using namespace std;

bool evaluateBoolean(string s) {
    if(s.length() == 1) {
        return (s == "T");
    }
    int i;
    bool res = false;
    char op = s[1];
    for(i=0; i<s.length()-2; i++) {
        if(op == '&') {
            res = res && (s[i] == 'T');
        } else if(op == '|') {
            res = res || (s[i] == 'T');
        }
    }
    return res;
}

int main() {
    string s;
    cout << "Enter Boolean expression: ";
    cin >> s;
    cout << "Result: " << (evaluateBoolean(s) ? "True" : "False") << endl;
    return 0;
}