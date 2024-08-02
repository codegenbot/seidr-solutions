#include <iostream>
#include <string>

int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        for (char gc : guess) {
            if (c == gc && code.find(gc) != code.rfind(gc)) {
                whitePegs++;
                break;
            }
        }
    }
    return whitePegs;
}

int countBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (char gc : guess) {
        if (std::count(code.begin(), code.end(), gc) == 1) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int white = countWhitePegs(code, guess);
    int black = countBlackPegs(code, guess);
    std::cout << white << "\n" << black << std::endl;
    return 0;
}