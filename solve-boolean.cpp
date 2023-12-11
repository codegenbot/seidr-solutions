#include <string>
using namespace std;

bool solveBoolean(string expression) {
    // Initialize result to False
    bool result = false;

    // Loop through each character in the expression
    for (int i = 0; i < expression.length(); i++) {
        // If the current character is 't' or 'T', set result to True
        if (expression[i] == 't' || expression[i] == 'T') {
            result = true;
        }
        // If the current character is 'f' or 'F', set result to False
        else if (expression[i] == 'f' || expression[i] == 'F') {
            result = false;
        }
        // If the current character is a logical operator ('|' or '&'), apply it to result and the next character
        else if (expression[i] == '|' || expression[i] == '&') {
            bool nextCharValue = solveBoolean(expression.substr(i + 1));
            if (expression[i] == '|') {
                result |= nextCharValue;
            } else {
                result &= nextCharValue;
            }
        }
    }

    return result;
}