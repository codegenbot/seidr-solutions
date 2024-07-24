#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression.size() > 0) {
        if (expression[0] == 'T' || expression[0] == 't')
            return true;
        else if (expression[0] == 'F' || expression[0] == 'f')
            return false;
    }

    int pos = expression.find('|');
    string op;
    while (pos != string::npos) {
        op = (pos > 0 && expression[pos - 1] == '|') ? "|" : "&";
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if ((op == "|" && solveBoolean(left)) || (op == "&" && solveBoolean(left)))
            return true;

        expression = right;
        pos = expression.find(op);
    }

    if (!expression.empty() && (expression[0] == 'T' || expression[0] == 't'))
        return true;

    return false;
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