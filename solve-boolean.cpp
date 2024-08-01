Here is the solution:

bool solveBoolean(string expression) {
    stack<char> ops;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!ops.empty() && ops.top() == '|')
                ops.pop();
            if (!ops.empty() && ops.top() == '&') 
                ops.pop();
        }
        else if (expression[i] == '|') 
            ops.push(expression[i]);
    }
    return expression[0] == 't';
}