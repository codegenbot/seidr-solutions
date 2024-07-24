#include <iostream>
using namespace std;

bool evaluateBoolean(string expression) {
    if(expression[0] == 'T' || expression[0] == 't') return true;
    else if(expression[0] == 'F' || expression[0] == 'f') return false;
    else {
        int i = 1, j = 0;
        while(i < expression.size()) {
            if(expression[i] == '|') break;
            i++;
        }
        string left = expression.substr(1, i-1);
        string right = expression.substr(i+1);
        return evaluateBoolean(left) || evaluateBoolean(right);
    }
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    if(evaluateBoolean(expression))
        cout << "True";
    else
        cout << "False";
    return 0;
}