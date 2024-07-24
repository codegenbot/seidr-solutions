#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << '\n';
    } else if (input == "f") {
        cout << "False" << '\n';
    } else {
        char op = input[1];
        bool operand1 = (input[0] == 't');
        bool operand2 = (input[2] == 't');
        
        if (op == '&') {
            cout << (operand1 && operand2 ? "True" : "False") << '\n';
        } else if (op == '|') {
            cout << (operand1 || operand2 ? "True" : "False") << '\n';
        }
    }

    return 0;
}