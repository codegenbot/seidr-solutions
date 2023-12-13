```cpp
#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    if (expression == "t") {
        return true;
    } else if (expression == "f") {
        return false;
    } else if (expression.find('&') != string::npos) {
        bool left = evaluateBoolean(expression.substr(0, expression.find('&')));
        bool right = evaluateBoolean(expression.substr(expression.find('&') + 1));
        return left && right;
    } else if (expression.find('|') != string::npos) {
        bool left = evaluateBoolean(expression.substr(0, expression.find('|')));
        bool right = evaluateBoolean(expression.substr(expression.find('|') + 1));
        return left || right;
    } else {
        throw runtime_error("Invalid expression format.");
    }
}

int main() {
    string expression;
    getline(cin, expression);
    try {
        bool result = evaluateBoolean(expression);
        cout << (result ? "True" : "False") << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
```