int evaluateBoolean(const string& expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    bool operand1 = (expression[0] == 't') ? true : false;
    bool operand2 = (expression[2] == 't') ? true : false;
    
    if (expression[1] == '&') {
        return operand1 && operand2;
    } else if (expression[1] == '|') {
        return operand1 || operand2;
    }
    
    return false;
}