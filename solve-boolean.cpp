#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    int i = 0;
    while(i < expression.length()) {
        if(expression[i] == 'F' || expression[i] == 'f') {
            result = false;
            break;
        }
        else if(expression[i] == '|') {
            result = !result;
        }
        else if(expression[i] == '&') {
            return result;
        }
        i++;
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;