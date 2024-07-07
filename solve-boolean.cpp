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
            if (!subRes) return false;
            term = "";
        } 
        else if (c == '&') {
            if (term != "t") res = false;
            term = "";
        }
        else if (c == 't' || c == 'f') {
            if (c == 't') term += 't';
            else if (c == 'f') term += 'f';
        }
    }
    bool subRes = evaluateTerm(term);
    if (!subRes) return false;
    return true;
}

bool evaluateTerm(string term) {
    if (term == "t") return true;
    if (term == "f") return false;

    for (int i = 0; i < term.length(); i++) {
        char c = term[i];
        if (c == '&') {
            if (i % 2 == 0) return (term.substr(0, i) == "tt");
            else return (term.substr(i + 1) == "ff");
        }
    }
    return true;
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