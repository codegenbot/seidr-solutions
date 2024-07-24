#include <string>
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true; 
    int T_count = 0, F_count = 0;
    
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '|') {
            if (T_count > F_count)
                result = false;
            else
                result = true;
            T_count = 0; 
            F_count = 0;
        } else if (expression[i] == '&') {
            T_count++;
            F_count = 0;
        } else if (expression[i] == 'T')
            T_count++;
        else 
            F_count++;
    }
    
    if (T_count > F_count)
        result = true; 
    else
        result = false; 
    return result;
}

int main() {
    string expression;
    cin >> expression;
    cout << (solveBoolean(expression) ? "True" : "False");
    return 0;
}