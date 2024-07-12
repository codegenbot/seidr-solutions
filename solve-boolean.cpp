bool result = true;
    int operation = 0; // Flag for AND (0), OR (1)
    char currentBit = ' ';
    if (expression[0] == '&' || expression[0] == '|') {
        if (expression[0] == '&') operation = 0;
        else operation = 1;
        currentBit = expression[0];
    }
    for (int i = 1; i < expression.size(); ++i) {
        if (currentBit != ' ') {
            if (operation) {
                result |= (expression[i] == 't');
            } else {
                result &= (expression[i] == 't');
            }
            currentBit = ' ';
        } else if (expression[i] == '&') {
            operation = 0;
            currentBit = '&';
        } else if (expression[i] == '|') {
            operation = 1;
            currentBit = '|';
        } else if (expression[i] != 't' && expression[i] != 'f') {
            if (operation) {
                result |= (expression[i] == 't');
            } else {
                result &= (expression[i] == 't');
            }
        }
    }
    return result;
}