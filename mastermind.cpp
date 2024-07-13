#include <vector>
#include <iostream>
#include <string>

int getWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0) {
            whitePegs++;
        }
    }
    return whitePegs - std::count(code.begin(), code.end(), guess[0]);
}

int getBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    std::cout << getWhitePegs(code, guess) << "\n";
    std::cout << getBlackPegs(code, guess) << "\n";
    return 0;
}