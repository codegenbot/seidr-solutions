bool solveBoolean(string expression) {
    if (expression.size() == 1)
        return tolower(expression[0]) == 't';
    
    int pos = expression.find('|');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (!left.empty()) {
            if (solveBoolean(left))
                return true;
            else
                solveBoolean(right);
        }
        
        pos = expression.find('|', pos);
    }

    pos = expression.find('&');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (!left.empty()) {
            if (solveBoolean(left))
                return solveBoolean(right);
            else
                return false;
        }
        
        pos = expression.find('&', pos);
    }

    return !expression.empty() && tolower(expression[0]) == 't';
}