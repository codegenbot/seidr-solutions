#include <string>
#include <cctype>

bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += std::tolower(c);
    }
    if (lowercaseExpr == "false") {
        return false;
    }
    // Add your existing evaluation logic using lowercaseExpr
    return true;
}