```cpp
#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "T") {
        return true;
    } else if (expression == "F") {
        return false;
    } else if (expression.find('|') != string::npos) {
        size_t pos = expression.find('|');
        return evaluateBoolean(expression.substr(0, pos)) || evaluateBoolean(expression.substr(pos + 1));
    } else if (expression.find('&') != string::npos) {
        size_t pos = expression.find('&');
        return evaluateBoolean(expression.substr(0, pos)) && evaluateBoolean(expression.substr(pos + 1));
    } else {
        return false;
    }
}

int main() {
    string expression;
    getline(cin, expression);
    cout << (evaluateBoolean(expression) ? "True" : "False") << endl;
    return 0;
}
```