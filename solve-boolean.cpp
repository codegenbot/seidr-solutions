#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    int pos = 0;
    while (pos < expression.size()) {
        if (expression[pos] == '(') {
            pos++;
            string nested = "";
            bool insideParentheses = true;
            while (insideParentheses) {
                if (expression[pos] == '(')
                    pos++;
                else if (expression[pos] == ')') {
                    pos++;
                    insideParentheses = false;
                }
                else
                    nested += expression[pos++];
            }
            if (solveBoolean(nested))
                return true;

        }
        else if (expression[pos] == '|') {
            int leftPos = 0, rightPos = 0;
            for (int i = pos; i < expression.size(); i++) {
                if (expression[i] == '|') {
                    rightPos = i;
                    break;
                }
                if (expression[i] == '(') {
                    leftPos = i + 1;
                    for (int j = i + 1; j < expression.size(); j++) {
                        if (expression[j] == ')') {
                            rightPos = j;
                            break;
                        }
                    }
                    break;
                }
            }
            string left = expression.substr(leftPos, rightPos - leftPos);
            string right = expression.substr(rightPos + 1);

            if (solveBoolean(left) || solveBoolean(right))
                return true;

        }
        else if (expression[pos] == '&') {
            int leftPos = 0, rightPos = 0;
            for (int i = pos; i < expression.size(); i++) {
                if (expression[i] == '&') {
                    rightPos = i;
                    break;
                }
                if (expression[i] == '(') {
                    leftPos = i + 1;
                    for (int j = i + 1; j < expression.size(); j++) {
                        if (expression[j] == ')') {
                            rightPos = j;
                            break;
                        }
                    }
                    break;
                }
            }
            string left = expression.substr(leftPos, rightPos - leftPos);
            string right = expression.substr(rightPos + 1);

            if (solveBoolean(left) && solveBoolean(right))
                return true;

        }
        else if (expression[pos] == 'F' || expression[pos] == 'T') {
            pos++;
            while (pos < expression.size() && (expression[pos] == '|' || expression[pos] == '&')) {
                pos++;
            }
        }
    }
    return !expression.empty() && tolower(expression[0]) == 't';
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}