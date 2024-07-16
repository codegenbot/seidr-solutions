bool solveBoolean(const std::string& s) {
    if (s.empty()) return false; 
    bool result = true;
    int operand = 1; // initialize to true (1)
    for (int i = 0; i < s.size(); ++i) {
        if ((char)s[i] == 'T') {
            result = result && true;
            operand = 1;
        } else if ((char)s[i] == 'F') {
            result = result && false;
            operand = 0;
        } else if ((char)s[i] == '|') {
            result = result || operand; 
            operand = 1; 
        } else if ((char)s[i] == '&') {
            bool tempOperand = operand;
            operand = 1;
            result = result && tempOperand;
        }
    }
    return result;
}