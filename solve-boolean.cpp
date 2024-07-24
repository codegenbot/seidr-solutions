#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr = expr;
    for (char& c : lowercaseExpr) {
        c = tolower(c);
    }

    bool result = true;
    bool andFlag = true;

    for (size_t i = 0; i < lowercaseExpr.size(); ++i) {
        char c = lowercaseExpr[i];
        if (c == 'f') {
            result = false;
        } else if (c == 't') {
            if (andFlag) {
                result = result && true;
            } else {
                result = result || true;
            }
        } else if (c == '&') {
            andFlag = true;
        } else if (c == '|') {
            andFlag = false;
        }
    }

    return result;
}