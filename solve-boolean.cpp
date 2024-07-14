string solveBoolean(string expression) {
    stack<char> s;
    string result = "True";
    
    for(int i=expression.length()-1; i>=0; i--) {
        if(expression[i] == '|') {
            if(s.top() == '&') {
                s.pop();
                result = (result == "True") ? "True" : "False";
            }
        } else if(expression[i] == '&') {
            if(result == "False")
                return "False";
        } else if(expression[i] != 'T' && expression[i] != 'F') {
            s.push(expression[i]);
        } else {
            result = expression[i];
        }
    }
    
    while(!s.empty()) {
        s.pop();
    }
    
    return result;
}