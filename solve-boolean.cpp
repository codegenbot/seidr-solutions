#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    int i = 0;
    while (i < expression.length()) {
        if (expression[i] == 't') {
            if (expression[i+1] == '|') {
                if (expression[i+2] == 'f') return false; 
                else i += 3;
            }
            else if (expression[i+1] == '&') {
                if (expression[i+2] == 'f') return false; 
                else i += 3;
            }
            else result = false;
            break;
        }
        else if (expression[i] == 'f') {
            if (expression[i+1] == '|') {
                if (expression[i+2] == 't') return true; 
                else i += 3;
            }
            else if (expression[i+1] == '&') {
                result = false;
                break;
            }
            else result = false;
            break;
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
}