#include <vector>
#include <iostream>
#include <string>

int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : guess) {
        if (code.find(c) != std::string::npos) {
            ++whitePegs;
            code.erase(code.find(c), 1);
        }
    }
    return whitePegs;
}

int countBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (char c : guess) {
        if (code[0] == c) {
            ++blackPegs;
            code.erase(0, 1);
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