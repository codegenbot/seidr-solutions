#include <sstream>
bool solveBoolean(const std::string& s) {
    bool result = true;
    for (char c : s) { 
        if (c == '|') {
            result = result || true; // Assume | means OR
        } else if (c == '&') {
            result = result && true; // Assume & means AND
        }
    }
    return result;
}