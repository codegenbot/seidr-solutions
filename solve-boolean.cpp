#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (char c : expression) {
        if (c == 't') {
            result = true;
        } else if (c == 'f') {
            return false;
        } else if (c == '|') {
            result = true; // | has higher precedence than &
        } else if (c == '&') {
            continue; // & has lower precedence than |
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