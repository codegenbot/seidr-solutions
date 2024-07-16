#include <iostream>
#include <string>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    std::string all_chars = "RGOR";

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        } else if (std::count(all_chars.begin(), all_chars.end(), guess[i]) > 0) {
            int count = std::count(all_chars.begin(), all_chars.end(), guess[i]);
            white += count;
        }
    }

    return {white, black};
}

int main() {
    int white, black;
    std::string code = "RGOR";
    std::string guess = "BRBB";
    auto [w, b] = mastermind(code, guess);
    std::cout << "White pegs: " << w << ", Black pegs: " << b << std::endl;
    return 0;
}