```c++
#include <iostream>
#include <string>

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
    for(int i='0'; i<='F'; i++) {
        int codeCount = 0;
        int guessCount = 0;
        for(int j=0; j<4; j++) {
            if(code[j] == i) {
                codeCount++;
            }
            if(guess[j] == i) {
                guessCount++;
            }
        }
        count += min(codeCount, guessCount);
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << std::endl;
    cout << blackPegs(code, guess) << std::endl;
    return 0;
}