bool solveBoolean(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;

    bool a = expression[0] == 'T';
    for (int i = 1; ; i++) {
        if (i >= expression.size()) return a;
        char c = expression[i];
        if (c == '&') {
            a &= expression[i+1] == 'T';
            while (++i && (c = expression[i]) != '|'); // skip |
        } else if (c == '|') {
            a |= expression[i+1] == 'T';
            while (++i && (c = expression[i]) != '&'); // skip &
        }
    }
}