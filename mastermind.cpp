#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string code = "ABCD";
    std::string guess = "EFGH";
    std::vector<int> codeFreq(6, 0);

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && codeFreq[guess[i] - 'A'] > 0) {
            ++whitePegs;
            codeFreq[guess[i] - 'A']--;
        }
    }

    std::cout << "White Pegs: " << whitePegs << ", Black Pegs: " << blackPegs << std::endl;

    return 0;
}