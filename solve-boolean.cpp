#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBooleanExpression(string expression) {
    string op;
    bool result = false, temp = false;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            op = "|";
        } else if (expression[i] == '&') {
            op = "&";
        } else if (expression[i] == 'T' || expression[i] == 't') {
            temp = true;
        } else if (expression[i] == 'F' || expression[i] == 'f') {
            temp = false;
        }

        if ((i == expression.size() - 1) || (expression[i + 1] == '|' || expression[i + 1] == '&')) {
            if (op == "|") {
                result = temp;
            } else if (op == "&") {
                result = temp && false; // initialize with false
                for (int j = i - 1; j >= 0; j--) {
                    if (expression[j] == '&' || expression[j] == '|') break;
                    if (expression[j] == 'T' || expression[j] == 't') result = true;
                    else if (expression[j] == 'F' || expression[j] == 'f') break;
                }
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a boolean expression: ";
    cin >> input;

    bool result = evaluateBooleanExpression(input);

    if (result) cout << "True" << endl;
    else cout << "False" << endl;

    return 0;
}