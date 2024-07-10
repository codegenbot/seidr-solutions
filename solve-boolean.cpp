#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'f') {
            result = false;
            break;
        }
        else if (expression[i] == '&') {
            while (i < expression.length() && expression[i] == '&') {
                i++;
            }
        }
        else if (expression[i] == '|') {
            while (i < expression.length() && expression[i] == '|') {
                i++;
            }
        }
    }
    return result;
}