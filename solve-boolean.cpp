bool solveBoolean(string expression) {
    stack<char> ops;
    stack<bool> values;

    for(int i=0; i<expression.length(); i++) {
        if(expression[i] == 't') {
            values.push(true);
        } else if(expression[i] == 'f') {
            values.push(false);
        } else if(expression[i] == '&') {
            while(values.size()>1&&values.top()) {
                values.pop();
            }
        } else if(expression[i] == '|') {
            while(values.size()>1) {
                values.pop();
            }
        }
    }

    return values.top();
}