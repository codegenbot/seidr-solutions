bool solveBoolean(std::string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;

    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') j++;
            std::string subexpr = expression.substr(i, j - i);
            result &= solveBoolean(subexpr);
            i = j;
        }
    }
    if (expression[i] == '|') {
        int j = i + 1;
        while (j < expression.size() && expression[j] != ' ') j++;
        std::string subexpr2 = expression.substr(i, j - i);
        result |= solveBoolean(subexpr2);
    }

    return !result;
}