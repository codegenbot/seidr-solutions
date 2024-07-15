#include <iostream>
#include <map>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    
    int white = 0, black = 0;
    std::map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F' && guess[i] >= 'A' && guess[i] <= 'F') {
                ++codeFreq[code[i]];
                ++guessFreq[guess[i]];
            }
        }
    }

    for (auto& it : codeFreq) {
        white += std::min(codeFreq[it.first], guessFreq[it.first]);
    }

    std::cout << white << std::endl << black << std::endl;
    
    return 0;
}