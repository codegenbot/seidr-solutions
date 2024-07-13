#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    
    int black = 0, white = 0;
    std::map<char, int> codeCount, guessCount;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[code[i]]++;
            guessCount[guess[i]]++;
        }
    }
    
    for (auto& it : codeCount) {
        white += std::min(it.second, guessCount[it.first]);
    }
    
    std::cout << white << "\n" << black << "\n";
    
    return 0;
}