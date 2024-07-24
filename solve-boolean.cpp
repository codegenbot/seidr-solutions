bool solveBoolean(const std::string& s) {
    if (s.empty()) return true;
    
    bool left = false, right = false;
    char op = '\0';
    
    for (char c : s) {
        if (c == 't') left = true;
        else if (c == 'f') left = false;
        else if (c == '|') {
            op = '|';
            right = false;
        } 
        else if (c == '&') {
            op = '&';
            right = false;
        }
    }
    
    return op == '|' ? left || right : left && right;
}