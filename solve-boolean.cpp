string solveBoolean(string s) {
    stack<char> op;
    string res = "T";
    
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '&') {
            while(op.size() && op.top() == '|') {
                op.pop();
                res = (res == "F") ? "F" : "T";
            }
            op.push('&');
        } else if(s[i] == '|') {
            while(op.size()) {
                op.pop();
                res = (res == "F") ? "F" : "T";
            }
            op.push('|');
        } else if(s[i] == 'f' || s[i] == 't') {
            while(op.size() && op.top() != '&') {
                op.pop();
                res = (res == "F") ? "F" : "T";
            }
            if(res == "T" && s[i] == 'f') res = "F";
            else if(res == "F" && s[i] == 't') res = "F";
        }
    }
    
    return res;
}