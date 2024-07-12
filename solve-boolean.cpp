int solve(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    string operand1 = expression.substr(0, 1);
    char op = expression[1];
    string operand2 = expression.substr(2);

    bool result1 = solve(operand1);
    bool result2 = solve(operand2);

    if (op == '&') return result1 && result2;
    if (op == '|') return result1 || result2;

    return false; // handle invalid input
}