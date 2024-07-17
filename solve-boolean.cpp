bool evaluateBooleanExpression(string expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.length() && expression[j] != '&') {
                j++;
            }
            if (j <= expression.length()) { 
                string subExpression = expression.substr(i + 1, j - i - 1);
                bool left = (subExpression == "t") ? true : false;
                int k = j + 1;
            while (k < expression.length() && expression[k] != '&') {
                k++;
            }
            if (k <= expression.length()) { 
                string rightSubExpression = expression.substr(j + 1, k - j - 1);
                bool right = (rightSubExpression == "t") ? true : false;
                result &= (left && right);
            } else {
                int end = expression.find('&', j);
                if (end == -1) {
                    end = expression.length();
                }
                string rightSubExpression = expression.substr(j + 1, end - j - 1);
                bool right = (rightSubExpression == "t") ? true : false;
                result &= (left && right);
            }
        } else if (expression[i] == '|') {
            int j = i + 1;
            while (j < expression.length() && expression[j] != '|') {
                j++;
            }
            if (j <= expression.length()) { 
                string subExpression = expression.substr(i + 1, j - i - 1);
                bool left = (subExpression == "t") ? true : false;
                int k = j + 1;
            while (k < expression.length() && expression[k] != '|') {
                k++;
            }
            if (k <= expression.length()) { 
                string rightSubExpression = expression.substr(j + 1, k - j - 1);
                bool right = (rightSubExpression == "t") ? true : false;
                result |= (left || right);
            } else {
                int end = expression.find('|', j);
                if (end == -1) {
                    end = expression.length();
                }
                string rightSubExpression = expression.substr(j + 1, end - j - 1);
                bool right = (rightSubExpression == "t") ? true : false;
                result |= (left || right);
            }
        } else if (expression[i] == 'T' || expression[i] == 't') {
            result = true;
            break;
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            result = false;
            break;
        }
        i++;
    }
    return result;
}