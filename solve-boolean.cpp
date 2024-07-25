#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = true;
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == 'T') {
            return true;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '|') {
            result ^= true; // toggle the result
            i++;  // skip |
            continue;
        } else if (expression[i] == '&') {
            if (!result) {
                return false;
            }
            i++;  // skip &
            continue;
        }
        i++;
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = evaluateBooleanExpression(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}