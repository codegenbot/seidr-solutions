#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for(int i = 0; i < 4; i++) {
        if(codeArray[i] == guessArray[i]) {
            blackPegs++;
            codeArray[i] = '\0';
            guessArray[i] = '\0';
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(codeArray[j] == guessArray[i]) {
                whitePegs++;
                codeArray[j] = '\0';
                break;
            }
        }
    }

    return blackPegs << 2 | whitePegs;
}