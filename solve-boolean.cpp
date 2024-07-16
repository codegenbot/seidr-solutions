```cpp
bool solveBoolean(const std::string& s) {
    bool result = true;
    std::stringstream ss(s);

    char ch;
    while (ss >> ch) { 
        if (ch == '|') {
            ss >> ch;
            result = result || (ch == 'T');
        } else if (ch == '&') {
            ss >> ch;
            result = result && (ch == 'T');
        }
    }
    
    return result;
}