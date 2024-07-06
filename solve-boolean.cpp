#include <iostream>
#include <string>
using namespace std;

bool evaluate(const string &expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            result |= expression[i + 1];
        } else if (expression[i] == '&') {
            result &= expression[i + 1];
        } else if (expression[i] == '^') {
            result ^= expression[i + 1];
        } else if (expression[i] == '~') {
            result = !result;
        }
    }
    return result && expression != "false";
}