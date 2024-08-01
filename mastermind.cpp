#include <string>
#include <unordered_map>

int mastermind(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;

    for (char c : guess) {
        if (code.find(c) != std::string::npos) {
            ++white;
            code.erase(code.find(c), 1);
        }
    }

    for (char c : guess) {
        if (c == code[0]) {
            ++black;
            code.erase(0, 1);
        }
    }

    return { black, white };
}