#include <iostream>
#include <string>

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (code[i] == guess[j] && code[i] != guess[i]) {
                whitePegs++;
                break;
            }
        }
    }
    return whitePegs;
}

int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    string code, guess;
    std::cin >> code >> guess;
    std::cout << countWhitePegs(code, guess) << std::endl;
    std::cout << countBlackPegs(code, guess) << std::endl;
    return 0;
}