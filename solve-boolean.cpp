bool solveBoolean(std::string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            if (i > 0 && expression[i - 1] == '|') 
                return false; 
            else if (i < expression.length() - 1 && expression[i + 1] == '|') 
                return true;
        } 
        else if (expression[i] != 'T' && expression[i] != 'F')
            continue;
        else {
            result = expression[i] == 'T';
        }
    }
    return result;
}