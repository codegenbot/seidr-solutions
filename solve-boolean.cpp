bool solveBoolean(std::string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') j++;
            std::string subexpr = expression.substr(i + 1, j - i - 1);
            result &= solveBoolean(subexpr);
            i = j;
        } else if (expression[i] == 't') {
            result = true;
        } else if (expression[i] == 'f') {
            result = false;
        }
    }
    return result;