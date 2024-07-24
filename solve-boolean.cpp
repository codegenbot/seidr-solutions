```bool solveBoolean(std::string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            result &= expression[i + 1] != 'T';
        } else if (expression[i] == '|') {
            result |= expression[i + 1] != 'F';
        }
    }
    return result;
}```