bool solveBoolean(string expression) {
    stack<char> s;
    
    for (char c : expression) {
        if (c == '&') {
            char left = s.top();
            s.pop();
            char right = s.top();
            s.pop();
            
            if (left == 'F' && right == 'F')
                s.push('F');
            else
                s.push('T');
        } 
        else if (c == '|') {
            char left = s.top();
            s.pop();
            char right = s.top();
            s.pop();
            
            if (left == 'T' || right == 'T')
                s.push('T');
            else
                s.push('F');
        } 
        else {
            s.push(c);
        }
    }
    
    return s.top() == 'T';
}