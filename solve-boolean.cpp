#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (char c : expression) {
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            return false;
        } else if (c == '|') {
            bool temp = !result;
            result = true;
        } else if (c == '&') {
            if (!result) {
                return false;
            }
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False") << endl;
    return 0;
}