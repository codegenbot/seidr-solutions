#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    bool result = true;
    bool isAnd = false;

    for (char c : expr) {
        if (c == 't') {
            result = isAnd ? result && true : result || true;
            isAnd = false;
        } else if (c == 'f') {
            result = isAnd ? result && false : result || false;
            isAnd = false;
        } else if (c == '&') {
            isAnd = true;
        } else if (c == '|') {
            isAnd = false;
        }
    }

    return result;
}