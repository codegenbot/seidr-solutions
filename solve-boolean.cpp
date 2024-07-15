bool solveBoolean(string s) {
    if (s == "T" || s == "t") return true;
    if (s == "F" || s == "f") return false;
    
    bool a = solveBoolean(s.substr(0, s.find('&') ? s.find('|') : string::npos));
    size_t pos = s.find('&');
    if (pos != string::npos) {
        bool b = solveBoolean(s.substr(pos + 1));
        return a && b;
    }
    
    pos = s.find('|');
    if (pos != string::npos) {
        bool b = solveBoolean(s.substr(pos + 1));
        return a || b;
    }
    
    return a; // should not reach here
}