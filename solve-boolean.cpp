```cpp
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
            term += (c == 't') ? "t" : "f";
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
            if (subTerm == "tt") res = true;
            else if (subTerm == "tf" || subTerm == "ft" || subTerm == "ff") res = false;
            subTerm = "";
        } 
        else if (c == 't' || c == 'f') {
            subTerm += (c == 't') ? "t" : "f";
        }
    }
    if (subTerm == "tt") res = true;
    else if (subTerm == "tf" || subTerm == "ft" || subTerm == "ff") res = false;

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