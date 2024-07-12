bool evaluateBooleanExpression(const std::string& expression) {
    bool result = true;
    int operation = 0; // Flag for AND (0), OR (1)
    char currentBit = ' ';
    for (char c : expression) {
        if (c == '&') {
            operation = 0;
            currentBit = ' ';
        } else if (c == '|') {
            result = !result; 
            operation = 1;
            currentBit = ' ';
        } else if (c != 't' && c != 'f') {
            if (operation) {
                result &= (c == 't');
            } else {
                result |= (c == 't');
            }
        }
    }
    return !result; 
}