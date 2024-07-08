bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t") return true;
    if (expression == "F" || expression == "f") return false;

    int i = 0, j = 1;
    while (j < expression.size()) {
        if (expression[j] == '|') {
            bool left = solveBoolean(expression.substr(i, j - i));
            bool right = solveBoolean(expression.substr(j + 1));
            return left || right;
        } else if (expression[j] == '&') {
            int k = j;
            while (k < expression.size() && expression[k] != '|') k++;
            string leftStr = expression.substr(i, k - i);
            string rightStr = expression.substr(k + 1);
            
            bool left = solveBoolean(leftStr);
            bool right = solveBoolean(rightStr);
            return left && right;
        }
        j++;
    }

    if (expression == "t") return true;
    if (expression == "f") return false;

    return false; 
}