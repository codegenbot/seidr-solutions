#include <iostream>
using namespace std;

int main() {
    string expression;
    cin >> expression;

    bool result = true;
    if (expression == "f" || expression == "F") {
        result = false;
    } else if (expression == "f&f" || expression == "F&F" || expression == "f|f" || expression == "F|F") {
        result = false;
    } else {
        for (int i = 0; i < expression.size(); ++i) {
            char c = expression[i];
            if (c == '&') {
                result = result && true;
            } else if (c == '|') {
                result = result || true;
            }
        }
    }

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}