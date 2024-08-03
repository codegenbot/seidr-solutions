#include <vector>
#include <iostream>
#include <string>

int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0 && &c != &guess[std::distance(guess.begin(), std::find(guess.begin(), guess.end(), c))] ) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int countBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (size_t i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int whitePegs = countWhitePegs(code, guess);
    int blackPegs = countBlackPegs(code, guess);
    std::cout << whitePegs << "\n" << blackPegs << "\n";
    return 0;
}