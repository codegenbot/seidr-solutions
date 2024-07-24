bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += tolower(c);
    }
    if (lowercaseExpr == "false") {
        return false;
    }
    // Existing evaluation logic using lowercaseExpr
    return true;
}