bool solveBoolean(string expression) {
    if (expression.size() == 0) return false;
    for (int i = 0; i < expression.size(); ++i) {
        if (expression[i] == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            if ((left == "t" && right == "t") || 
                (left == "f" && right == "t") || 
                (left == "t" && right == "f") || 
                (left == "f" && right == "f"))
                return true;
            else
                return false;
        }
        else if (expression[i] == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            if ((left == "t" && right == "t") || 
                (left == "f" && right == "f"))
                return true;
            else
                return false;
        }
    }
    if (expression.size() > 0) {
        if (expression[0] == 't') return true;
        else return false;
    }
    return false;
}