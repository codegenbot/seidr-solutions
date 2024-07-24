```cpp
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

    int pos = 0;
    while (pos < expression.size()) {
        size_t start = pos;
        if (expression[pos] == '|') {
            pos++;
            continue;
        } else if (expression[pos] == '&') {
            pos += 2;
            continue;
        }
        size_t end = pos + 1;
        while (end < expression.size() && (expression[end] == 'T' || expression[end] == 't' ||
                                            expression[end] == 'F' || expression[end] == 'f' ||
                                            expression[end] == '|' || expression[end] == '&')) {
            end++;
        }
        string part = expression.substr(start, end - start);
        if (expression[start] == 'T' || expression[start] == 't')
            return true;
        else if (expression[start] == 'F' || expression[start] == 'f')
            return false;

        pos = end;
    }
    return true;
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