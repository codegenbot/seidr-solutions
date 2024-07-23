#include <iostream>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    int codeFreq[6] = {0};
    int guessFreq[6] = {0};
    int white = 0, black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeFreq[code[i] - 'A'];
            guessFreq[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        white += std::min(codeFreq[i], guessFreq[i]);
    }

    std::cout << black << " " << white << std::endl;

    return 0;
}