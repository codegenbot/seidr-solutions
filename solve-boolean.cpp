#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if(expression.length() == 1) {
        if(tolower(expression[0]) == 't')
            return true;
        else
            return false;
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