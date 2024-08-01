bool solveBoolean(string s) {
    if (s == "t") return true;
    if (s == "f") return false;

    int i = 0, j = 0;
    while(j<s.length()) {
        if(s[j] == '|') break;
        j++;
    }
    string left = s.substr(i, j-i);
    i = j+1; j=0;
    while(j<s.length()) {
        if(s[j] == '&') break;
        j++;
    }
    string right = (j<s.length()) ? s.substr(i, j-i) : "";
    
    return solveBoolean(left) || solveBoolean(right);
}