bool solveBoolean(string booleanExpression) {
    stack<char> s;
    for(int i = 0; i < booleanExpression.size(); i++) {
        if(booleanExpression[i] == '&') {
            while(s.size() && s.top() == '&') 
                s.pop();
            if(s.size() && s.top() == '|')
                return false;
            s.push('&');
        } else if(booleanExpression[i] == '|') {
            while(s.size() && (s.top() == '&' || s.top() == '|')) 
                s.pop();
            s.push('|');
        } else if(booleanExpression[i] != 'T' && booleanExpression[i] != 'F' && 
                 booleanExpression[i] != '&' && booleanExpression[i] != '|') {
            return false;
        }
    }
    while(s.size()) 
        s.pop();
    return s.size() ? true : false;
}