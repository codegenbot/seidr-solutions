```bool solveBoolean(std::string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (i + 1 < expression.length() && expression[i+1] == '&') {
                i++;
            }
            if (i + 1 < expression.length() && expression[i+1] == '|') {
                return false;
            }
        } else if (expression[i] == '|') {
            while (i + 1 < expression.length()) {
                i++;
            }
        } else {
            result = (result && (expression[i] == 'T'));
        }
    }
    return result;
}``