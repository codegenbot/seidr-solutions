string solveBoolean(string booleanExpression) {
    stack<char> opStack;
    string result = "True";

    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
            }
            if (!opStack.empty()) {
                result = "False";
                break;
            }
        } else if (booleanExpression[i] == '|') {
            while (!opStack.empty()) {
                opStack.pop();
            }
            result = "True";
        } else {
            if (result == "False") {
                return "False";
            }
            if (booleanExpression[i] == 't') {
                result = "True";
            } else {
                result = "False";
            }
        }
    }

    return result;
}