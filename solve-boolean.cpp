bool solveBoolean(std::string expression) {
    if (expression.size() == 0)
        return false; // default value
    
    if (expression[0] == 'T' || expression[0] == 't')
        return true;
    else if (expression[0] == 'F' || expression[0] == 'f')
        return false;

    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '|') {
            std::string left = expression.substr(0, i);
            std::string right = expression.substr(i + 1);
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            std::string left = expression.substr(0, i);
            std::string right = expression.substr(i + 1);
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    
    if (expression.size() > 0)
        return solveBoolean(expression.substr(1)); // recursive call for the rest of the expression
}