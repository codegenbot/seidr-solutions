string solveBoolean(string input) {
    stack<char> s;
    string result = "";
    
    for(int i=0; i<input.length(); i++) {
        if(input[i] == '&') {
            while(!s.empty() && s.top() == '&') {
                s.pop();
            }
            if(s.empty()) {
                result += 'T';
            } else {
                result += 'F';
            }
            s.push('&');
        } else if(input[i] == '|') {
            while(!s.empty() && s.top() == '|') {
                s.pop();
            }
            if(s.empty()) {
                result += 'F';
            } else {
                result += 'T';
            }
            s.push('|');
        } else {
            s.push(input[i]);
        }
    }
    
    while(!s.empty()) {
        s.pop();
    }
    
    return (result == "T") ? "True" : "False";
}