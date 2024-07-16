#include <string>
bool solveBoolean(const std::string& s) {
    bool result = true;
    int op = -1; // operator
    for (auto c : s) {  
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            op = 0;
        } else if (c == '&') {
            op = 1;
        }
    }
    return result;
}

int main() {
    std::string s = "your_boolean_expression"; // replace with input string
    bool result = solveBoolean(s);
    return 0;
}