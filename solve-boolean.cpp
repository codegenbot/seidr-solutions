#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolExpression(string expr) {
    if (expr == "T") {
        return true;
    } else if (expr == "F") {
        return false;
    }

    bool result = false;
    bool operand1, operand2;
    char op = ' ';
    
    for (char c : expr) {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|' || c == '&') {
            op = c;
        } else if (op == '|') {
            result = (result || (c == 'T'));
            op = ' ';
        } else if (op == '&') {
            result = (result && (c == 'T'));
            op = ' ';
        }
    }
    
    return result;
}

int main() {
    string input;
    getline(cin, input);
    
    bool result = evaluateBoolExpression(input);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}