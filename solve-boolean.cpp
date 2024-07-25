#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    string op = "";
    bool result = false;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            op = (op == "") ? "" : " and ";
            if (!result) {
                result = true;
            }
        } else if (expression[i] == 'T' && op == "") {
            result = true;
        } else if (expression[i] == 'F' && op == "") {
            return false;
        } else if (op != "" && (expression[i] == 'T' || expression[i] == 'F')) {
            if (expression[i] == 'T') {
                if (!result) {
                    result = true;
                }
            } else {
                if (result) {
                    result = false;
                }
            }
            op = "";
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter the boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}