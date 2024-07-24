bool solveBoolean(string expression) {
    if (expression.length() == 1) {
        return tolower(expression[0]) == 't';
    }
    
    int pos = expression.find('|');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (!left.empty()) 
            return solveBoolean(left) || solveBoolean(right);
        
        pos = expression.find('|', pos);
    }

    pos = expression.find('&');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (!left.empty()) 
            return solveBoolean(left) && solveBoolean(right);
        
        pos = expression.find('&', pos);
    }

    return !expression.empty() && tolower(expression[0]) == 't';
}