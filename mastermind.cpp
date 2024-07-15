#include <string>

int blackPegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        int codeCount = 0;
        int guessCount = 0;
        char ch = code[i];
        for(int j=0; j<4; j++) {
            if(code[j] == ch) {
                codeCount++;
            }
            if(guess[j] == ch) {
                guessCount++;
            }
        }
        count += min(codeCount, guessCount);
    }
    return count;
}