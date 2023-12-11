#include <string>
#include <cstring>
#include <iostream>
using namespace std;

bool solve(string expr) {
    bool result = false;
    int len = expr.length();
    for (int i = 0; i < len; ++i) {
        if (expr[i] == 't') {
            result = true;
        } else if (expr[i] == 'f') {
            result = false;
        } else if (expr[i] == '|') {
            result = result || solve(expr.substr(i + 1));
        } else if (expr[i] == '&') {
            result = result && solve(expr.substr(i + 1));
        }
    }
    return result;
}

int main() {
    string expr;
    getline(cin, expr);
    cout << solve(expr) << endl;
    return 0;
}