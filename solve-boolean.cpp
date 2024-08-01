bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') {
                j++;
            }
            string subExpression = expression.substr(i+1, j-i-1);
            if (subExpression.find('T') == string::npos) {
                result = false;
                break;
            }
            i = j - 1;
        } else if (expression[i] == 'F') {
            return false;
        }
    }
    return result;
}