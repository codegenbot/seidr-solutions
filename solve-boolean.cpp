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
            else if (c == 'f') term += 'f';
        }
    }
    bool subRes = evaluateTerm(term);
    res = res || subRes;

    return res;
}

bool evaluateTerm(string term) {
    if (term.length() == 0 || term[0] != '&') 
        return term == "tt" || term == "t";

    string subTerm = "";
    for (int i = 0; i < term.length(); i++) {
        char c = term[i];
        if (c == '&') {
            bool res = evaluateTerm(subTerm) && evaluateTerm(term.substr(i+1));
            return res;
        } 
        else if (c == 't' || c == 'f') {
            subTerm += c;
        }
    }

    bool res = evaluateTerm(subTerm) && true; // Replace true with the correct result
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