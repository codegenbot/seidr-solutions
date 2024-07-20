#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<char> code_chars(code.begin(), code.end());
    vector<char> guess_chars(guess.begin(), guess.end());

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code_chars[i] = '\0';
            guess_chars[i] = '\0';
        }
    }

    for(int i=0; i<4; i++) {
        for(int j=i+1; j<4; j++) {
            if(code_chars[j] == guess[i]) {
                white++;
                code_chars[j] = '\0';
            }
        }
    }

    return black + white;
}