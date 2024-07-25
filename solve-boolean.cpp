#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = true;
    int i = 0;
    
    while (i < expression.length()) {
        if (expression[i] == 't') {
            return true;
        } else if (expression[i] == 'f') {
            return false;
        } else if (expression[i] == '&') {
            i++;
            result &= evaluateBooleanExpression(substring(expression, i));
        } else if (expression[i] == '|') {
            i++;
            result = result || evaluateBooleanExpression(substring(expression, i));
        }
    }
    
    return result;
}

string substring(string s, int start) {
    string result = "";
    for (int i = start; i < s.length(); i++) {
        result += s[i];
    }
    return result;
}