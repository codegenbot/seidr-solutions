#include <string>
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (char c : expression) {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            return false;
        } else if (c == '|') {
            int a = 0, b = 0;
            bool temp = false;
            for (char d : expression) {
                if (d == '&') {
                    break;
                }
                else if (d == 'T')
                    a++;
                else
                    b++;
            }
            while (expression.back() != '|') {
                expression.pop_back();
            }
            expression.pop_back();
            if (a > 0)
                temp = true;
            for (char d : expression) {
                if (d == '&') {
                    break;
                }
                else if (d == 'T')
                    a++;
                else
                    b++;
            }
            while (expression.back() != '|') {
                expression.pop_back();
            }
            expression.pop_back();
            if (b > 0)
                temp = false;
            result = temp;
        } else if (c == '&') {
            int a = 0, b = 0;
            for (char d : expression) {
                if (d == '|') {
                    break;
                }
                else if (d == 'T')
                    a++;
                else
                    b++;
            }
            result = (a > 0 && b > 0);
        }
    }
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;