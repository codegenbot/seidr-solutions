#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        switch (expression[i]) {
            case 'T':
                return true;
            case 'F':
                return false;
            case '&': {
                bool a = true, b = true;
                if (i + 1 < expression.size()) {
                    if (expression[i + 1] == 'T')
                        a = true;
                    else
                        a = false;
                    i++;
                }
                if (i + 1 < expression.size()) {
                    if (expression[i + 1] == 'T')
                        b = true;
                    else
                        b = false;
                    i++;
                }
                result &= a && b;
                break;
            }
            case '|': {
                bool a = true, b = true;
                if (i + 1 < expression.size()) {
                    if (expression[i + 1] == 'T')
                        a = true;
                    else
                        a = false;
                    i++;
                }
                if (i + 1 < expression.size()) {
                    if (expression[i + 1] == 'T')
                        b = true;
                    else
                        b = false;
                    i++;
                }
                result |= a || b;
                break;
            }
        }
    }
    return result;
}