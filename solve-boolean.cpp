#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool result = true;
        bool negate = false;
        
        if (expr[0] == '!') {
            negate = true;
        }

        for (char c : expr) {
            if (c == '&') {
                continue;
            } else if (c == '|') {
                result = result || true;
            } else if (c == 't') {
                result = result && true;
            } else if (c == 'f') {
                result = result && false;
            }
        }
        
        return negate ? !result : result;
    }
}