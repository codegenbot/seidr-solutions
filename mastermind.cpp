#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        auto it = guess.find(c);
        if (it != std::string::npos && c == guess[it]) {
            black++;
            guess.erase(it, 1);
        } else if (it != std::string::npos) {
            white++;
            guess.erase(it, 1);
        }
    }

    return black;
}