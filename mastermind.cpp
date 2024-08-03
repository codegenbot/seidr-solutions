#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        auto it = guess.find(c);
        while (it != std::string::npos) {
            if (code.find(c) == it) {
                black++;
            } else {
                white++;
            }
            it = guess.find(c, it + 1);
        }
    }

    return black;
}