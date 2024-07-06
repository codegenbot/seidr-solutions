```cpp
bool solveBoolean(string s) {
    bool res = false;
    string op;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'T' || s[i] == 't') {
            res = (op == "|") ? true : res;
            op = "";
        } else if(s[i] == 'F' || s[i] == 'f') {
            res = (op == "&") ? false : res;
            op = "";
        } else if(s[i] == '&' || s[i] == '|') {
            op = (s[i] == '&') ? "&" : "|";
        }
    }

    return res;
}