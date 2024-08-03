#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        auto pos = guess.find(c);
        while (pos != std::string::npos) {
            if (pos == guess.find(c)) {
                black++;
            } else {
                white++;
            }
            pos = guess.find(c, pos + 1);
        }
    }

    return black;
}