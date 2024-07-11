#include <vector>
#include <iostream>
#include <string>

int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0 &&
            std::find(guess.begin(), guess.end(), c) != guess.end()) {
            ++whitePegs;
        }
    }
    return whitePegs;
}

int countBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (size_t i = 0; i < code.length(); ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int main() {
    std::string code, guess;
    std::cout << "Enter Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    int whitePegs = countWhitePegs(code, guess);
    int blackPegs = countBlackPegs(code, guess);
    std::cout << whitePegs << "\n";
    std::cout << blackPegs << "\n";
    return 0;
}