```
#include <string>
#include <cctype>
#include <iostream>
using namespace std;
bool evaluate(const string& expression) {
    bool result = false;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            result |= evaluate(expression.substr(i + 1));
            break;
        } else if (expression[i] == '&') {
            result &= evaluate(expression.substr(i + 1));
            break;
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            result = (expression[i] == 'T');
            break;
        }
    }
    return result;
}
int main() {
    string expression;
    cin >> expression;
    cout << evaluate(expression) << endl;
    return 0;
}
```