bool solveBoolean(std::string expression) {
    bool result = true;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == '|') {
            i++;
            if (expression[i] == 'T')
                result = true;
            else
                result = false;
        } else if (expression[i] == '&') {
            if (expression[i + 1] == 'F')
                return false;
            i++;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == 'T') {
            i++;
        }
    }

    return result;
}