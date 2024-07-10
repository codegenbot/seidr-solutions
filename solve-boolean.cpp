#include <iostream>
#include <string>

bool evaluateBoolean(const std::string& s) {
    bool result = s[0] == 't' ? true : false;
    for(size_t i = 1; i < s.size(); i += 2) {
        if(s[i] == '|') {
            result = result || s[i + 1] == 't' ? true : false;
        } else if(s[i] == '&') {
            result = result && s[i + 1] == 't' ? true : false;
        }
    }
    return result;
}

int main() {
    std::string s;
    std::cin >> s;

    if(evaluateBoolean(s)) {
        std::cout << "True";
    } else {
        std::cout << "False";
    }

    return 0;
}