```c
bool solveBoolean(std::string expression) {
    stack<char> s;
    bool prev = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'F') {
            prev = false;
        } else if (expression[i] == 'T') {
            prev = true;
        } else if (expression[i] == '|') {
            s.push((prev) ? 1 : 0);
            prev = -1;
        } else if (expression[i] == '&') {
            if (prev != -1) {
                s.push(prev);
                prev = -1;
            }
        }
    }
    s.push(prev);
    while (!s.empty()) {
        prev = s.top();
        s.pop();
        if (prev == 0) return false;
    }
    return true;
}