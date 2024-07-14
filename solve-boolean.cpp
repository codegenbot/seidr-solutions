#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    std::stack<bool> stack;
    int parentheses = 0; 
    for (char c : s) {
        if (c == '(') parentheses++;
        else if (c == ')') {
            while(parentheses > 0) {
                bool top = stack.top();
                stack.pop();
                if (c == ')') break;
                stack.push(top && stack.top());
                stack.pop();
            }
        } 
        else if (c == '|') stack.push(stack.top() || stack.pop());
        else if (c == '&') stack.push(stack.top() && stack.pop());
        else if (c == 'T' || c == 'F') stack.push(c == 'T');
    }
    return stack.top();
}