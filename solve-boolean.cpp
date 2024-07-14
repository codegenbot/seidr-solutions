```cpp
bool solveBoolean(std::string s) {
    std::stack<bool> stack;
    int parentheses = 0; 
    bool result = false;
    for (char c : s) {
        if (c == '(') {
            stack.push(false);
            parentheses++;
        }
        else if (c == ')') {
            while(parentheses > 0) {
                bool top = stack.top();
                stack.pop();
                if (c == ')') stack.push(top);
                else stack.push(!top);
                parentheses--;
            }
        }
        else if (c == '|') {
            bool left = stack.top(); 
            stack.pop();
            result = left || (stack.size() > 0 ? stack.top() : false); 
            stack.pop();
        }
        else if (c == '&') {
            bool left = stack.top(); 
            stack.pop();
            if (!left) return false; 
            else result = left && (stack.size() > 0 ? stack.top() : true); 
            stack.pop();
        }
        else if (c == 'T' || c == 'F') stack.push(c == 'T');
    }
    return result;
}