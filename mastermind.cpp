#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        auto pos = guess.find(c);
        if (pos != std::string::npos) {
            if (code[pos] == c) {
                black++;
            } else {
                white++;
                guess.erase(pos, 1);
            }
        }
    }

    return black + white;
}