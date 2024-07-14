#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool evaluateBoolean(string expression) {
    stack<char> operatorStack;
    string currentTerm = "";
    bool isCurrentTermTrue = false;

    for (char c : expression) {
        if (c == 'T' || c == 't') {
            isCurrentTermTrue = true;
        } else if (c == 'F' || c == 'f') {
            if (!isCurrentTermTrue) return false;
        } else if (c == '&') {
            if (!operatorStack.empty() && operatorStack.top() == '|') {
                operatorStack.pop();
                bool left = isCurrentTermTrue;
                isCurrentTermTrue = currentTerm.back() == 'F' ? false : true;
                currentTerm.pop_back();
                if (!evaluateBoolean(to_string(left) + "&" + to_string(isCurrentTermTrue))) return false;
            }
            operatorStack.push(c);
        } else if (c == '|') {
            if (!operatorStack.empty() && operatorStack.top() == '&') {
                operatorStack.pop();
                bool left = isCurrentTermTrue;
                isCurrentTermTrue = currentTerm.back() == 'F' ? false : true;
                currentTerm.pop_back();
                if (!evaluateBoolean(to_string(left) + "|" + to_string(isCurrentTermTrue))) return false;
            }
            operatorStack.push(c);
        } else {
            currentTerm += c;
        }
    }

    while (!operatorStack.empty()) {
        char op = operatorStack.top(); operatorStack.pop();
        bool left = isCurrentTermTrue;
        isCurrentTermTrue = currentTerm.back() == 'F' ? false : true;
        currentTerm.pop_back();
        if (op == '&') isCurrentTermTrue &= isCurrentTermTrue;
        else isCurrentTermTrue |= isCurrentTermTrue;
    }

    return isCurrentTermTrue;
}

int main() {
    string expression;
    cout << "Enter Boolean expression: ";
    cin >> expression;
    bool result = evaluateBoolean(expression);
    if (result) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}