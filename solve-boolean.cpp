#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    bool result = true;
    char op = '|';

    for (char c : input) {
        if (c == 't') {
            if (op == '&') {
                result = result && true;
            } else {
                result = result || true;
            }
        } else if (c == 'f') {
            if (op == '&') {
                result = result && false;
            } else {
                result = result || false;
            }
        } else {
            op = c;
        }
    }

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}