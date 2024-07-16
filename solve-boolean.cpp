```cpp
bool solveBoolean(const std::string& s) {
    bool result = true;
    size_t i = 0;
    for (char c : s) {  
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            while (true) {
                if (!result) return false;
                i = s.find(c, i);
                if (i == std::string::npos) break;
                i++;
            }
        }
    }
    return result;
}