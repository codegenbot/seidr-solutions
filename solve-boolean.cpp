bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 'f') {
            result = false;
            break;
        }
        else if (expression[i] == '&') {
            while (i + 1 < expression.size() && expression[i+1] != '&' && expression[i+1] != '|') {
                i++;
            }
        }
        else if (expression[i] == '|') {
            while (i + 1 < expression.size() && expression[i+1] != '|' && expression[i+1] != '&') {
                i++;
            }
        }
    }
    return result;
}