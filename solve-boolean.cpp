#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (auto it = expr.begin(); it != expr.end(); ++it) {
        lowercaseExpr += tolower(*it);
    }
    
    bool result = true;
    bool andFlag = true;
    
    for (auto it = lowercaseExpr.begin(); it != lowercaseExpr.end(); ++it) {
        char c = *it;
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