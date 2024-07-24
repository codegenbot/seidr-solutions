bool evaluateBooleanExpression(const std::string& expr) {
    std::string lowercaseExpr;
    for (char c : expr) {
        lowercaseExpr += std::tolower(c);
    }
    
    bool result = true;
    bool andFlag = true;
    
    for (char c : lowercaseExpr) {
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