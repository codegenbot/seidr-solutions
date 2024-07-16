bool solveBoolean(const std::string& input) {
    if (input.empty()) return false; 
    bool result = true;
    int operand = 1; // initialize to true (1)
    for (int i = 0; i < input.length(); ++i) {
        if ((char)input[i] == 'T') {
            result = result && true;
            operand = 1;
        } else if ((char)input[i] == 'F') {
            result = result && false;
            operand = 0;
        } else if ((char)input[i] == '|') {
            result = result || operand; 
            operand = 1; 
        } else if ((char)input[i] == '&') {
            bool tempOperand = operand;
            operand = 1;
            result = result && tempOperand;
        }
    }
    return result;
}