#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    int i = 0;
    
    while (i < expression.size()) {
        if (expression[i] == '|') {
            string left = expression.substr(0, ++i);
            int j = i + 1;
            
            for (; j < expression.size(); j++) {
                if (expression[j] == '&') {
                    string rightAnd = expression.substr(i, j - i) + "&";
                    expression.replace(i, j - i + 1, "(solveBoolean(");
                    expression.insert(j++, ") &&");
                    expression.insert(++j, ")");
                    break;
                }
                else if (expression[j] == '|') {
                    string rightOr = expression.substr(i, j - i) + "|";
                    expression.replace(i, j - i + 1, "(solveBoolean(");
                    expression.insert(j, ")) || ");
                    i = j + 2;
                    break;
                }
            }
        }
    }
    
    if (expression.find("t") != string::npos)
        return true;
    else
        return false;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}