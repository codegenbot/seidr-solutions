Here is the solution:

bool solveBoolean(string expression) {
    bool result = true;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == 't') {
            return true;
        } else if (expression[i] == 'f') {
            return false;
        } else if (expression[i] == '&') {
            result &= (i + 1 < expression.length() ? solveBoolean(expression.substr(i + 1)) : false);
            i = expression.find('&', i) + 1;
        } else if (expression[i] == '|') {
            bool temp = solveBoolean(string(1, expression[i]));
            for (; i < expression.length() && expression[i] != '&' && expression[i] != '|'; i++);
            result |= temp;
        }
    }

    return result;
}