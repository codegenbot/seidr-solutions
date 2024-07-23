#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    if (expr == "t") {
        return true;
    } else {
        return false;
    }
}