#include <string>
#include <stack>
#include <iostream>
using namespace std;

bool solveBoolean(const string& s, size_t& i) {
    stack<char> ops;
    bool result = false;
    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                i++;  
                return true;
            case 'F':
                i++;  
                return false;
            case '&': 
                i++;
                ops.push('&');
                break;
            case '|': 
                i++;
                ops.push('|');
                break;
        }
    }

    while (!ops.empty()) {
        char op = ops.top();
        ops.pop();
        if (op == '|') {
            bool left = solveBoolean(s, i);
            bool right = !solveBoolean(s, i);
            return left || right;
        } else {
            bool left = solveBoolean(s, i);
            bool right = solveBoolean(s, i);
            return left && right;
        }
    }

    return result;
}

int main() {
    const string input = "TF|";  
    size_t i = 0;
    bool result = solveBoolean(input, i);
    cout << (result ? "True" : "False");  
    return 0;
}