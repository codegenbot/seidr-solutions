#include <iostream>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    int codeFreq[6] = {0};
    int guessFreq[6] = {0};
    int black = 0, white = 0;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i != j && code[i] == guess[j] && codeFreq[i] < 1 && guessFreq[j] < 1) {
                ++white;
                codeFreq[i] = 1;
                guessFreq[j] = 1;
                break;
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    std::cout << black << " " << white << std::endl;

    return 0;
}