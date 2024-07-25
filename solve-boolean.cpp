string solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            char left = s.top();
            s.pop();
            char right = s.top();
            s.pop();
            if (left == 'T' && right == 'T')
                s.push('T');
            else
                s.push('F');
        } 
        else if (expression[i] == '&') {
            char left = s.top();
            s.pop();
            char right = s.top();
            s.pop();
            if (left == 'T' && right == 'T')
                s.push('T');
            else
                s.push('F');
        } 
        else {
            s.push(expression[i]);
        }
    }
    return s.top() == 'T' ? "True" : "False";
}