```cpp
bool solveBoolean(std::string s) {
    std::stack<bool> stack;
    int parentheses = 0; 
    for (char c : s) {
        if (c == '(') parentheses++;
        else if (c == ')') parentheses--;
        else if (c == '|') {
            bool a = stack.top(); stack.pop();
            bool b = stack.top(); stack.pop();
            stack.push(a || b);
        }
        else if (c == '&') {
            bool a = stack.top(); stack.pop();
            bool b = stack.top(); stack.pop();
            stack.push(a && b);
        }
        else if (c == 'T' || c == 'F') stack.push(c == 'T');
    }
    return stack.top();
}