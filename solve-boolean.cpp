bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else {
        bool operand1 = expression[0] == 't' ? true : false;
        bool operand2 = expression[2] == 't' ? true : false;
        if (expression[1] == '&') {
            return operand1 && operand2;
        } else {
            return operand1 || operand2;
        }
    }
}