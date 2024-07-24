#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = false;
    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == 'T') return true;
        else if (expression[i] == 'F') return false;
        else if (expression[i] == '|') break;
        else if (expression[i] == '&') break;
    }
    if (expression[0] == 'F' || expression[1] == 'f') result = false;
    if (result) {
        for (int i = 2; i < expression.length(); ++i) {
            if (expression[i] == '|') return true;
            else if (expression[i] == '&') return false;
        }
    } else {
        for (int i = 2; i < expression.length(); ++i) {
            if (expression[i] == '|') return true;
            else if (expression[i] == '&') return false;
        }
    }
    if (result) return true;
    return false;
}