#include <iostream>
#include <string>

bool solveBoolean(std::string expression) {
    bool result = true;
    int i = 0;
    
    while (i < expression.length()) {
        if (expression[i] == 'T') {
            return true;
        }
        else if (expression[i] == 'F') {
            return false;
        }
        else if (expression[i] == '&') {
            i++; // skip &
            if (expression[i] == '&') {
                result &= true;
            } else {
                result = false; // & expects another &
                break;
            }
        }
        else if (expression[i] == '|') {
            i++; // skip |
            while(i < expression.length() && expression[i] != '&' && expression[i] != '|') i++;
            if(expression[i] == 'F' || i == expression.length()) {
                result = false; // | expects F or another |
                break;
            }
        }
        i++;
    }
    
    return result;
}