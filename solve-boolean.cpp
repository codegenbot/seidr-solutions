bool solveBoolean(std::string expression) {
    bool result = true;
    int i = 0;

    while(i < expression.length()) {
        if(expression[i] == 'T' || expression[i] == 'F') {
            char op1 = (expression[i-1] == '&' ? '&' : '|');
            char op2 = (i+1 < expression.length() && (expression[i+1] == '&' ? '&' : '|'));
            result = (op1 == '&') ? (expression[i] == 'T' && !op2) : (expression[i] == 'F' || op2);
            i += 2;
        } else {
            i++;
        }
    }

    return result;
}