#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (char c : expression) {
        if (c == 't') {
            return true;
        } else if (c == 'f') {
            return false;
        } else if (c == '&') {
            result = false;
        } else if (c == '|') {
            bool temp = result;
            result = !result;
            result = result || temp;
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    cout << "Result: " << (solveBoolean(expression) ? "True" : "False") << endl;
    return 0;
}