```cpp
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    if (expression.size() == 0)
        return false;
    
    for(int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if(c == 'T' || c == 't')
            return true;
        else if(c == 'F' || c == 'f')
            return false;
        
        if(c == '|') {
            int start = 0;
            for(int j = 0; j < i; j++) {
                if(expression[j] == '|')
                    start = j+1;
            }
            string left = expression.substr(start, i - start);
            int end = i + 1;
            for(; end < expression.size(); end++) {
                if(expression[end] == '|') {
                    break;
                }
            }
            string right = expression.substr(end, expression.size() - end);
            return solveBoolean(left) || solveBoolean(right);
        }
        else if(c == '&') {
            int start = 0;
            for(int j = 0; j < i; j++) {
                if(expression[j] == '&')
                    start = j+1;
            }
            string left = expression.substr(start, i - start);
            int end = i + 1;
            for(; end < expression.size(); end++) {
                if(expression[end] == '&' || expression[end] == '|') {
                    break;
                }
            }
            string right = expression.substr(end, expression.size() - end);
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    
    return false;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if(result)
        cout << "True";
    else
        cout << "False";
    return 0;
}