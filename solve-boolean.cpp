```cpp
#include <sstream>
bool solveBoolean(const std::string& s) {
    bool result = true;
    std::stringstream ss;
    ss << boolalpha;
    for (int i = 0; i < s.size(); ++i) { 
        char c = s[i]; 
        if (c == '|') {
            result = result || true;
        } else if (c == '&') {
            result = result && true;
        } else if (c == 'T' || c == 't') {
            if (c == 'T' || c == 't') ss << true;
        } else if (c == 'F' || c == 'f') {
            if (c == 'F' || c == 'f') ss << false;
        }
    }
    bool finalResult = (ss >> boolalpha).good();
    return result && finalResult;
}

int main() {
    std::string s;
    std::cout << "Enter a Boolean expression: ";
    std::getline(std::cin, s);
    bool result = solveBoolean(s);
    if (result) {
        std::cout << "The result is true." << std::endl;
    } else {
        std::cout << "The result is false." << std::endl;
    }
    return 0;
}