bool solveBoolean(std::string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;

    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') j++;
            std::string subexpr = expression.substr(i + 1, j - i - 1);
            result &= solveBoolean(subexpr);
            i = j;
        }
    }

    if (expression.find('|') != std::string::npos) {
        size_t pos1 = expression.find('&');
        size_t pos2 = expression.find('|', pos1 + 1);

        std::string subexpr1 = expression.substr(0, pos1);
        bool result1 = solveBoolean(subexpr1);
        std::string subexpr2 = expression.substr(pos2 + 1);
        bool result2 = solveBoolean(subexpr2);

        return !result1 && !result2;
    }

    if (expression.find('&') != std::string::npos) {
        size_t pos1 = expression.find('&');
        std::string subexpr1 = expression.substr(0, pos1 + 1);
        bool result1 = solveBoolean(subexpr1);

        return !result1;
    }
    
    return true;
}