#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    int pos = expression.find('|');
    while (pos != string::npos) {
        if (pos == 0 || expression[pos - 1] != '|') {
            string left = "";
        } else {
            string left = expression.substr(0, pos);
        }
        
        if (pos + 1 >= expression.size()) {
            string right = "";
        } else {
            string right = expression.substr(pos + 1);
        }

        if (solveBoolean(left) || solveBoolean(right))
            return true;
        
        pos = expression.find('|', pos);
    }

    pos = expression.find('&');
    while (pos != string::npos) {
        if (pos == 0 || expression[pos - 1] != '&') {
            string left = "";
        } else {
            string left = expression.substr(0, pos);
        }
        
        if (pos + 1 >= expression.size()) {
            string right = "";
        } else {
            string right = expression.substr(pos + 1);
        }

        if (solveBoolean(left) && solveBoolean(right))
            return true;
        
        pos = expression.find('&', pos);
    }

    return !expression.empty() && tolower(expression[0]) == 't';
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    getline(cin, expression);
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}