```c
#include <string>
#include <unordered_map>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    unordered_map<char, int> code_count;
    for(int i=0; i<4; i++) {
        code_count[code[i]]++;
    }

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code_count[code[i]]--;
        }
    }

    for(int i=0; i<4; i++) {
        if(code_count.find(guess[i]) != code_count.end() && code_count[guess[i]] > 0) {
            white++;
            code_count[guess[i]]--;
        }
    }

    return black;
}