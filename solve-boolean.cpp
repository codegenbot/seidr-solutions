#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 'f') {
            result = false;
            break;
        } else if (expression[i] == '&') {
            while (i + 1 < expression.size() && expression[i + 1] != '&') {
                i++;
            }
        } else if (expression[i] == '|') {
            while (i + 1 < expression.size() && expression[i + 1] != '|') {
                i++;
            }
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;
}