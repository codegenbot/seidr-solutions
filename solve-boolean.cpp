```
bool solveBoolean(const std::string& s) {
    bool result = true;
    for (const auto& c : s) {  
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            auto temp = s.find(c);
            if (temp != std::string::npos) c = s[temp + 1];
        }
    }
    return result;
}