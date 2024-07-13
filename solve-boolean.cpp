bool evaluateBooleanExpression(const string& expr) {
    if (expr == "t") return true;
    if (expr == "f") return false;
    
    bool result;
    if (expr[1] == '&') {
        result = (expr[0] == 't' && expr[2] == 't');
    } else if (expr[1] == '|') {
        result = (expr[0] == 't' || expr[2] == 't');
    }
    
    return result;
}