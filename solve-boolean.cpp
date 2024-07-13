```
bool evaluateBooleanExpression(string expression) {
    bool result = true;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == '&') {
            i++;
            bool b1 = (expression[i] == 'T' || expression[i] == 't');
            i++;
            bool b2 = (expression[i] == 'T' || expression[i] == 't');
            i++;
            result = result && (b1 || b2);
        } else if (expression[i] == '|') {
            i++;
            bool b1 = (expression[i] == 'T' || expression[i] == 't');
            i++;
            bool b2 = (expression[i] == 'T' || expression[i] == 't');
            i++;
            result = result && !(b1 ^ b2);
        } else if (expression[i] == 'T' || expression[i] == 't') {
            i++;
            result = true;
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            i++;
            result = false;
        }
    }

    return result;
}