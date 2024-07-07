```cpp
#include <string>
#include <iostream>

using namespace std;

bool evaluateTerm(string term);
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
            if (c == 't') term += 't';
            else term += 'f';
            if (i < s.length() - 1 && s[i + 1] == '&') i++; 
        }
    }
    bool subRes = evaluateTerm(term);
    res = res || subRes;

    return res;
}

bool evaluateTerm(string term) {
    bool res = true;
    string subTerm;
    for (int i = 0; i < term.length(); i++) {
        char c = term[i];
        if (c == '&') {
            bool subRes = (subTerm == "t") ? true : false;
            res = res && subRes;
            subTerm = "";
        } 
        else if (c == 't' || c == 'f') {
            if (c == 't') subTerm += 't';
            else subTerm += 'f';
            if (i < term.length() - 1 && term[i + 1] == '&') i++; 
        }
    }
    bool subRes = (subTerm == "t") ? true : false;
    res = res && subRes;

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