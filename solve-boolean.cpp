bool evaluateBooleanExpression(const std::string& expression) {
    bool result = true;
    int operation = 0; 
    for (char c : expression) {
        if (c == 't' || c == 'f') { 
            if (operation) {
                result |= (c == 't'); 
            } else {
                result &= (c == 't');
            }
        } else if (c == '&') {
            operation = 0;
        } else if (c == '|') {
            operation = 1;
        }
    }
    return result;
}