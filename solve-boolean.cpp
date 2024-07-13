bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    }
    
    char operand = expression[1];
    bool left = expression[0] == 't' ? true : false;
    bool right = expression[2] == 't' ? true : false;
    
    if (operand == '&') {
        return left && right;
    } else if (operand == '|') {
        return left || right;
    }
    
    return false;
}