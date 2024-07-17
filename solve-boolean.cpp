int i = -1; // declare and initialize
    bool result = true;

    while (++i < expression.size()) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') j++;
            std::string subexpr = expression.substr(i, j - i);
            result &= solveBoolean(subexpr);
            i = j;
        } else if (expression[i] == '|') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != ' ') j++;
            std::string subexpr2 = expression.substr(i, j - i);
            result |= solveBoolean(subexpr2);
        }
    }

    if (expression[i] == 'F' || expression[i] == 'f') {
        return false;
    } else {
        return true;
    }
}