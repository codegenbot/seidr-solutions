#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    bool result = true;
    char operation = '|'; // default operation

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'T') {
            if (operation == '&') {
                result = result && true;
            } else { // '|'
                result = result || true;
            }
        } else if (input[i] == 'F') {
            if (operation == '&') {
                result = result && false;
            } else { // '|'
                result = result || false;
            }
        } else if (input[i] == '|') {
            operation = '|';
        } else if (input[i] == '&') {
            operation = '&';
        }
    }

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}