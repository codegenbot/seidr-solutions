#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    if (expr == "t" || expr == "T" ) {
        return true;
    } else if (expr == "f" || expr == "F") {
        return false;
    } else {
        bool result = false;
        bool negate = false;
        
        if (expr[0] == '!') {
            negate = true;
        }

        size_t i = (negate ? 1 : 0);
        result = (expr[i] == 't' || expr[i] == 'T');
        
        while (i < expr.length()) {
            if (expr[i] == '&') {
                result = result && (expr[i + 1] == 't' || expr[i + 1] == 'T');
            } else if (expr[i] == '|') {
                result = result || (expr[i + 1] == 't' || expr[i + 1] == 'T');
            }
            i += 2; // Skip the operator and the next character
        }
        
        return negate ? !result : result;
    }
}