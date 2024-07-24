```cpp
#include <string>
#include <vector>

bool solveBoolean(const std::string& s) {
    if (s.empty()) return true;

    std::vector<std::string> tokens;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') {
            tokens.push_back(s.substr(0, i));
            s = s.substr(i + 1);
            i = -1;
        } else if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] == '&') i++;
            if (i + 1 < s.length()) {
                tokens.push_back(s.substr(0, i + 1));
                s = s.substr(i + 1);
                i = -1;
            }
        }
    }
    tokens.push_back(s);

    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i] == "t") return true;
        else if (tokens[i] == "f") return false;
    }

    bool left = solveBoolean(tokens[0]);
    bool right = solveBoolean(tokens[1]);

    if (tokens[0].find('|') != std::string::npos) {
        return left || right;
    } else {
        return left && right;
    }
}