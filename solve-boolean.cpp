string solveBoolean(string expression) {
    stack<char> ops;
    string result = "T";
    
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            result = (result == "F") ? "F" : "T";
        } else if (expression[i] == '|') {
            result = (result == "F") ? "T" : "F";
        }
    }
    
    return result;
}