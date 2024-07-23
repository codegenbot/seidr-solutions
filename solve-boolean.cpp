std::string solveBoolean(std::string expression) {
    bool result = (expression == "T") || (expression == "true");
    for(int i = 0; i < expression.length(); i++) {
        if(expression[i] == '&') {
            std::string left = expression.substr(0, i);
            std::string right = expression.substr(i + 1);
            result &= (solveBoolean(left) && solveBoolean(right));
        } else if(expression[i] == '|') {
            std::string left = expression.substr(0, i);
            std::string right = expression.substr(i + 1);
            result |= (solveBoolean(left) || solveBoolean(right));
        }
    }
    return (result) ? "True" : "False";
}