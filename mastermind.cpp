#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        size_t pos = guess.find(c);
        if (pos != std::string::npos && pos == guess.find(c)) {
            black++;
            guess.erase(pos, 1);
        } else if (pos != std::string::npos) {
            white++;
            guess.erase(pos, 1);
        }
    }

    return black;
}