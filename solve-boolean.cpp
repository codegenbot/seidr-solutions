#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = false;
    for (char c : expression) {
        if (c == 'T') result = true;
        else if (c == 'F') return false;
        else if (c == '&') {
            bool temp = result;
            result = false;
        }
        else if (c == '|') {
            bool temp = result;
            result = true;
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    cout << "Result: " << (evaluateBooleanExpression(expression) ? "True" : "False") << endl;
    return 0;
}