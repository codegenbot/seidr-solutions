#include <iostream>
#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    bool res = false;
    std::stack<bool> s;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T') {
            res = true;
        } else if (expression[i] == 'F') {
            res = false;
        } else if (expression[i] == '|') {
            if (s.empty() || s.top()) {
                res = true;
                s.pop();
            }
        } else if (expression[i] == '&') {
            s.push(res);
        }
    }

    return res;
}

int main() {
    std::cout << solveBoolean("TF&|F") << std::endl;
    return 0;
}