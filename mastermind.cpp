#include <string>
#include <unordered_map>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    unordered_map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            codeMap[code[i]]--;
        }
    }

    for(int i=0; i<4; i++) {
        if(codeMap.find(guess[i]) != codeMap.end() && codeMap[guess[i]] > 0) {
            white++;
            codeMap[guess[i]]--;
        }
    }

    return black;
}