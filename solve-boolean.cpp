#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else {
        char op = input[1];
        bool operand1 = (input[0] == 't') ? true : false;
        bool operand2 = (input[2] == 't') ? true : false;
        
        if (op == '&') {
            cout << (operand1 && operand2 ? "True" : "False") << endl;
        } else if (op == '|') {
            cout << (operand1 || operand2 ? "True" : "False") << endl;
        }
    }

    return 0;
}