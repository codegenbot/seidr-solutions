#include<string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char,int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        if (code.find(c) != string::npos && codeCount[c] > 0) {
            white++;
            codeCount[c]--;
        }
    }

    return black + white;