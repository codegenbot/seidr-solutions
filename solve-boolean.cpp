```cpp
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    std::stack<bool> stack;
    bool andOp = false;
    
    for (char c : s) {
        if (c == '(') 
            stack.push(c);
        else if (c == ')') {
            while(!stack.empty() && stack.top() != '(') { 
                if (!andOp) stack.push(stack.top());
                else stack.pop();
                stack.pop();   
            }
            stack.pop();    
            andOp = false;
        } 
        else if (c == '|') 
            andOp = false;  
        else if (c == '&') 
            andOp = true; 
        else if (c == 'T' || c == 'F') {   
            bool b = c == 'T';
            if (!andOp) stack.push(b);
            else {
                while(!stack.empty() && stack.top() != '(') { 
                    if (b) stack.push(stack.top());
                    else stack.pop();
                    stack.pop();   
                }
            }
        }    
    }
    return stack.top();
}

int main() { return solveBoolean("T|F&F"); }