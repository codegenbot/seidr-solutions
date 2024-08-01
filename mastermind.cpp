#include <iostream>
#include <vector>

std::vector<int> codeFreq(6, 0), guessFreq(6, 0);

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i] - 'A']++;
            guessFreq[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        whitePegs += std::min(codeFreq[i], guessFreq[i]);
    }

    std::cout << whitePegs << std::endl;
    std::cout << blackPegs << std::endl;

    return 0;
}