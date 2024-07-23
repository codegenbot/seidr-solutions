#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    if (expression == "t") return true;
    if (expression == "f") return false;
    
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            
            while (left.find('&') != string::npos) {
                int j = left.find('&');
                string a = left.substr(0, j);
                string b = left.substr(j + 1);
                if (!solveBoolean(a))
                    return false;
                left = b;
            }
            
            while (right.find('&') != string::npos) {
                int j = right.find('&');
                string a = right.substr(0, j);
                string b = right.substr(j + 1);
                if (!solveBoolean(a))
                    return false;
                right = b;
            }
            
            return solveBoolean(left) || solveBoolean(right);
        } else if (c == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i + 1);
            
            while (left.find('|') != string::npos) {
                int j = left.find('|');
                string a = left.substr(0, j);
                string b = left.substr(j + 1);
                if (!solveBoolean(a))
                    return false;
                left = b;
            }
            
            while (right.find('|') != string::npos) {
                int j = right.find('|');
                string a = right.substr(0, j);
                string b = right.substr(j + 1);
                if (!solveBoolean(a))
                    return false;
                right = b;
            }
            
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    
    return true; // default value
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