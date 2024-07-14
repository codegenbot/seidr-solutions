#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    std::stack<bool> stack;
    int parentheses = 0; 
    for (char c : s) {
        if (c == '(') parentheses++;
        else if (c == ')') {
            while(parentheses > 0) { 
                if (s.back() != '&') stack.push(s.back() == 'T');
                s.pop_back();
            } parentheses--;
        }
        else if (c == '|') {
            bool right = stack.top(); stack.pop();
            bool left = stack.top(); stack.pop();
            stack.push(left || right);
        } 
        else if (c == '&') {
            bool right = stack.top(); stack.pop();
            bool left = stack.top(); stack.pop();
            stack.push(left && right);
        }
        else if (c == 'T' || c == 'F') stack.push(c == 'T');
    }
    return stack.top();
}

int main() { return solveBoolean("T|F&F"); }