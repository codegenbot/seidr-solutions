#include <iostream>
#include <string>

using namespace std;

int main() {
    string expression;
    cin >> expression;

    bool result = false;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 't') {
            result = true;
            break;
        }
    }

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}