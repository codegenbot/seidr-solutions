#include <string>
#include <iostream>

using namespace std;

bool evaluate(const string &expression) {
    // Implement the logic to evaluate the expression here
}

int main() {
    string expression;
    cin >> expression;
    bool result = evaluate(expression);
    cout << (result ? "True" : "False") << endl;
    return 0;
}