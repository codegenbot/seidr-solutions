Here is the solution:

string solveBoolean(string expression) {
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            return "True";
        } else if (expression[i] == '&') {
            return "False";
        }
    }
    if (expression == "t") {
        return "True";
    } else if (expression == "f") {
        return "False";
    } else if (expression[0] == 'f' && expression[1] == '&') {
        for (int i = 2; i < expression.size(); i++) {
            if (expression[i] == 't') {
                return "False";
            }
        }
        return "True";
    } else if (expression[0] == 'f' && expression[1] == '&') {
        for (int i = 2; i < expression.size(); i++) {
            if (expression[i] == 'f') {
                return "False";
            }
        }
        return "True";
    } else if (expression[0] == 't' && expression[1] == '&') {
        for (int i = 2; i < expression.size(); i++) {
            if (expression[i] == 't') {
                return "False";
            }
        }
        return "True";
    } else if (expression[0] == 'f' && expression[1] == '&') {
        for (int i = 2; i < expression.size(); i++) {
            if (expression[i] == 't') {
                return "False";
            }
        }
        return "True";
    }
    return "Invalid input";
}