bool solveBoolean(string expression) {
    if (expression.size() > 0) {
        if (expression[0] == 'T' || expression[0] == 't')
            return true;
        else if (expression[0] == 'F' || expression[0] == 'f')
            return false;
    }

    int pos = expression.find('|');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (solveBoolean(left) && solveBoolean(right))
            return true;

        pos = expression.find('|', pos);
    }

    int pos2 = expression.find('&');
    while (pos2 != string::npos) {
        string left = expression.substr(0, pos2);
        string right = expression.substr(pos2 + 1);

        if (!solveBoolean(left) || !solveBoolean(right))
            return false;

        pos2 = expression.find('&', pos2);
    }

    if (expression.size() > 0 && (expression[0] == 'T' || expression[0] == 't'))
        return true;

    return false;
}