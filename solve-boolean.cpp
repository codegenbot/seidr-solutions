string solveBoolean(string s) {
    bool res = (s[0] == 'T');
    for(int i=1; i<s.length(); i++){
        if(s[i]=='&') {
            res &= (s[i+1] == 'T');
            i++;
        }
        else if(s[i] == '|') {
            res |= (s[i+1] == 'T');
            i++;
        }
    }
    return res ? "True" : "False";
}