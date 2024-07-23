bool solveBoolean(std::string s) {
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            while (!std::stack<char>().empty() && std::stack<char>().top() == '&') {
                std::stack<char>().pop();
            }
            if (std::stack<char>().empty()) return true;
            else std::stack<char>().push('|');
        } else if (s[i] == '&') {
            std::stack<char>().push('&');
        }
    }
    while (!std::stack<char>().empty() && std::stack<char>().top() == '&') {
        std::stack<char>().pop();
    }
    return result;
}