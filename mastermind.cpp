#include <vector>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count the number of correct colors in wrong positions
    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0 && std::count(code.begin(), code.end(), c) == 1) {
            whitePegs++;
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    return {blackPegs, whitePegs};
}