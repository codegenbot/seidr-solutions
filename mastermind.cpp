#include <iostream>

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for(int c='0'; c<='F'; c++) {
        int codeCount = 0;
        int guessCount = 0;
        for(int i=0; i<4; i++) {
            if(code[i] == c) {
                codeCount++;
            }
            if(guess[i] == c) {
                guessCount++;
            }
        }
        if(codeCount > 0 && guessCount > 0) {
            count += min(codeCount, guessCount);
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}