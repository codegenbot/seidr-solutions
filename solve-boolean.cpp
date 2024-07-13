bool evaluateBooleanExpression(const string& expr) {
    if (expr == "t") return true;
    if (expr == "f") return false;

    vector<int> stack;
    for (char c : expr) {
        if (c == 't') stack.push_back(1);
        else if (c == 'f') stack.push_back(0);
        else if (c == '&') {
            int operand1 = stack.back();
            stack.pop_back();
            int operand2 = stack.back();
            stack.pop_back();
            stack.push_back(operand1 && operand2);
        } else if (c == '|') {
            int operand1 = stack.back();
            stack.pop_back();
            int operand2 = stack.back();
            stack.pop_back();
            stack.push_back(operand1 || operand2);
        }
    }
    return stack.back();
}
int main() {
    string expr;
    cin >> expr;
    cout << (evaluateBooleanExpression(expr) ? "True" : "False") << endl;
    return 0;
}