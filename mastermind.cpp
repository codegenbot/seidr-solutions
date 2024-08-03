#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        auto it = guess.find(c);
        if (it != std::string::npos && code[guess.find(c)] == c) {
            black++;
            guess.replace(it, 1, "*");
        } else if (it != std::string::npos) {
            white++;
            guess.replace(it, 1, "*");
        }
    }

    return black;
}