```cpp
#include <iostream>
#include <string>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    std::string all_chars = "RGOR"; // assuming the 6 possible characters are R, G, O, and so on

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        } else if (std::count(all_chars.begin(), all_chars.end(), guess[i]) > 0) {
            white++;
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