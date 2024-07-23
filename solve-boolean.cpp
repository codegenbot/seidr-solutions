#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    if (expr == "t") {
        return true;
    } else if (expr == "f") {
        return false;
    } else {
        bool negate = false;
        int pos = 0;

        if (expr[0] == '!') {
            negate = true;
            return !evaluateBooleanExpression(expr.substr(1));
        }

        int orPos = expr.find('|');
        int andPos = expr.find('&');

        if (orPos != std::string::npos) {
            return evaluateBooleanExpression(expr.substr(0, orPos)) || evaluateBooleanExpression(expr.substr(orPos + 1));
        } else if (andPos != std::string::npos) {
            return evaluateBooleanExpression(expr.substr(0, andPos)) && evaluateBooleanExpression(expr.substr(andPos + 1));
        }

        return negate ? !evaluateBooleanExpression(expr) : (expr == "t");
    }
}