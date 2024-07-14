#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            return (expression[i-1] == 'T' || expression[i+1] == 'T');
        } else if (expression[i] == '&') {
            return (expression[i-1] == 'T' && expression[i+1] == 'T');
        }
    }
    return expression[0] == 'T';
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool output = solveBoolean(input);
    if (output) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}