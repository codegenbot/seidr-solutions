#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solveBoolean(string input) {
    stack<char> operationStack;
    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '|') {
            while (!operationStack.empty() && operationStack.top() == '|') {
                operationStack.pop();
            }
            if (operationStack.empty()) return false;
        } else if (input[i] == '&') {
            while (!operationStack.empty() && operationStack.top() == '&') {
                operationStack.pop();
            }
            if (operationStack.empty()) return true;
        } else if (input[i] == 'T' || input[i] == 'F') {
            operationStack.push(input[i]);
        }
    }
    
    while (!operationStack.empty()) {
        operationStack.pop();
    }
    
    return false;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}