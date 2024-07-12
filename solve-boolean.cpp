bool evaluateBooleanExpression(string expression) {
    if(expression == "t") {
        return true;
    } else if(expression == "f") {
        return false;
    } else {
        bool left = expression[0] == 't' ? true : false;
        bool right = expression[2] == 't' ? true : false;
        if(expression[1] == '&') {
            return left && right;
        } else {
            return left || right;
        }
    }
}