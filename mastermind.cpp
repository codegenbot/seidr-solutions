#include <string>
#include <unordered_map>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    unordered_map<char, int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            codeCount[code[i]]--;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (codeCount.find(guess[i]) != codeCount.end() && codeCount[guess[i]] > 0) {
            white++;
            codeCount[guess[i]]--;
        }
    }

    return black;
}