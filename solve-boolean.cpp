bool solveBoolean(string s) {
    bool result = true;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'f') return false;
        if(s[i] == '|') {
            result = !result;
            continue;
        }
        if(s[i] == '&') {
            result &= (s[i+1] == 't');
            i++;
            continue;
        }
    }
    return result;
}