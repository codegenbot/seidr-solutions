#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    bool result = false;
    char prevOp = 'f';  // assume first operand is F

    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '&') {
            prevOp = 'T' ? true : false;
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            bool temp = 'T' ? true : false;
            result = !temp; // Invert the result for |
        } else if (expression[i] == 't') {
            prevOp = true;
        } else {
            prevOp = false;
        }

        if (i == expression.length() - 1 || expression[i + 1] == '|') {
            bool temp2 = 'T' ? true : false;
            result = (prevOp && !temp2) || (!prevOp && temp2);
        }
    }

    return result;
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    if (expression == "t") {
        cout << "True";
    } else if (expression == "f") {
        cout << "False";
    } else {
        bool result = solveBoolean(expression);
        if (result)
            cout << "True";
        else
            cout << "False";
    }
    return 0;
}