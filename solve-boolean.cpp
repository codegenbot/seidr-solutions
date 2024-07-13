Here is the solution:

string solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') res = false;
        else if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] != '|') i++;
        }
    }
    return res ? "True" : "False";
}