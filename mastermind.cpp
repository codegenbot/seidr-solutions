#include <iostream>
#include <string>

int whitePegs(std::string code, std::string guess) {
    int codeCount[6] = {0};
    int guessCount[6] = {0};
    int blackPegsCount = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegsCount++;
        } else {
            codeCount[code[i]-'0']++;
            guessCount[guess[i]-'0']++;
        }
    }
    int whitePegsCount = 0;
    for(int i=0; i<6; i++) {
        if(codeCount[i] > 0 && guessCount[i] > 0) {
            whitePegsCount += std::min(codeCount[i], guessCount[i]);
        }
    }
    return blackPegsCount + (4 - blackPegsCount - whitePegsCount);
}