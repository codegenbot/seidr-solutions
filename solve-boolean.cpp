#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == 't') {
            result = true;
            break;
        } else if (expression[i] == 'f') {
            return false;
        }
        else if (i < expression.length() - 1 && expression[i+1] == '&') {
            i++;
            if (expression[i] == 'f') {
                return false;
            }
        }
        else if (i < expression.length() - 1 && expression[i+1] == '|') {
            i++;
            if (expression[i] == 'f') {
                result = true;
                break;
            }
        }
    }
    return result;
}