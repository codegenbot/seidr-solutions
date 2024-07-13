#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    int white_pegs = 0, black_pegs = 0;
    std::vector<int> code_freq(6, 0), guess_freq(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            code_freq[code[i] - 'A']++;
            guess_freq[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        white_pegs += std::min(code_freq[i], guess_freq[i]);
    }

    std::cout << white_pegs << std::endl << black_pegs << std::endl;

    return 0;
}