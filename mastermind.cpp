#include <vector>
#include <iostream>
#include <string>

int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++whitePegs;
            break;
        }
    }
    return whitePegs;
}

int countBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs - countWhitePegs(code, guess);
}

std::pair<int, int> getClue(const std::string& code, const std::string& guess) {
    return {countWhitePegs(code, guess), countBlackPegs(code, guess)};
}