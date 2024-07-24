#include <vector>
#include <iostream>
#include <string>

bool solveBoolean(string expression) {
    stack<char> operations;
    string temp = "";
    
    for (char c : expression) {
        if (c == '&' || c == '|') {
            while (!operations.empty() && operations.top() != '(')
                temp += operations.top(), operations.pop();
            
            if (!operations.empty() && operations.top() == '(')
                operations.pop();
            
            temp += c;
        } else if (c == '(') 
            operations.push(c);
        else if (c == 'T' || c == 'F') {
            temp += c;
            while (!operations.empty() && operations.top() != ')')
                temp += operations.top(), operations.pop();
            
            if (!operations.empty() && operations.top() == ')')
                operations.pop();
        }
    }
    
    while (!operations.empty()) {
        temp += operations.top(), operations.pop();
    }
    
    int T = 0, F = 0;
    
    for (char c : temp) {
        if (c == 'T') 
            T++;
        else if (c == 'F')
            F++;
    }
    
    return T > F;
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) 
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}