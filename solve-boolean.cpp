#include <vector>
#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    int i = 0;
    bool result = false;

    while (i < expression.length()) {
        if (expression[i] == 'T') {
            return true;
        } else if (expression[i] == 'F') {
            return false;
        } else if (expression[i] == '|') {
            i++;
            if (expression[i] == '&') {
                i++;
            }
        } else if (expression[i] == '&') {
            i++;
            if (i < expression.length() && expression[i] == '|') {
                i++;
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a Boolean expression (e.g., t, f, f&f, etc.): ";
    cin >> input;

    bool output = evaluateBooleanExpression(input);

    if (output) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}