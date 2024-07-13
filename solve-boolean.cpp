#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string s) {
    stack<char> st;
    bool lastOp = false; // flag to keep track of the last operation
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T' || s[i] == 'F') {
            if (!lastOp) {
                return s[i] == 'T';
            } else {
                char op = st.top();
                st.pop();
                lastOp = false;
                
                // Evaluate the operator with the new value
                if (op == '&') {
                    return (bool)s[i];
                } else {
                    return !s[i];
                }
            }
        } else {
            st.push(s[i]);
            lastOp = true; // update flag for next iteration
        }
    }
    
    return false;
}

int main() {
    std::cout << solveBoolean("T&T") << '\n'; // prints 1 (true)
    std::cout << solveBoolean("F&F&F") << '\n'; // prints 0 (false)
    std::cout << solveBoolean("T|F&F") << '\n'; // prints 1 (true)
    std::cout << solveBoolean("T&T&F") << '\n'; // prints 0 (false)
    return 0;
}