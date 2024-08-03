#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == 't') {
            result = true;
            break;
        } else if (expression[i] == 'f') {
            return false;
        }
    }
    if (result) {
        for (int i = 0; i < expression.size(); i++) {
            if (expression[i] == '|') {
                return true;
            } else if (expression[i] == '&') {
                return false;
            }
        }
    }
    return result;
}