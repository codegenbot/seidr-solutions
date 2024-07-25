#include <string>
using namespace std;

bool solveBoolean(string expr) {
    bool res = true;
    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == 'f') return false;
        else if (expr[i] == '&') {
            res &= solveBoolean(expr.substr(i + 1));
            i = expr.find('&', i + 1) - 1;
        }
        else if (expr[i] == '|') {
            res |= solveBoolean(expr.substr(i + 1));
            i = expr.find('|', i + 1) - 1;
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}