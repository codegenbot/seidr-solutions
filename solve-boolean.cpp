#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression[0] == '(') {
        int pos = expression.find(')');
        return solveBoolean(expression.substr(1, pos - 1));
    }

    int pos = expression.find('|');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (solveBoolean(left) || solveBoolean(right))
            return true;
        
        pos = expression.find('|', pos);
    }

    pos = expression.find('&');
    while (pos != string::npos) {
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);

        if (solveBoolean(left) && solveBoolean(right))
            return true;
        
        pos = expression.find('&', pos);
    }

    if (tolower(expression[0]) == 't')
        return true;

    return false;
}

int main() {
    char c;
    string expression = "";
    cout << "Enter a Boolean expression: ";
    while ((c = cin.get()) != '\n') {
        expression += c;
    }
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}