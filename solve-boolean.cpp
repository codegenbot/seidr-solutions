```cpp
#include <string>
#include <iostream>

using namespace std;

bool evaluateTerm(string term) {
    bool res = (term == "tt") ? true : false;
    return res;
}

bool solveBoolean(string s) {
    bool res = true;
    string term;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '|') {
            bool subRes = evaluateTerm(term);
            res = res || subRes;
            term = "";
        } 
        else if (c == 't' || c == 'f') {
            term += (c == 't') ? "t" : "f";
        }
    }
    bool subRes = evaluateTerm(term);
    res = res || subRes;

    return res;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    getline(cin, s);
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}