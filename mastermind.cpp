#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }
    for (int i = 0; i < 4; i++) {
        string tempCode = code.substr(0, i) + code.substr(i+1);
        int j = 0;
        while (j < 4) {
            if (tempCode.find(guess[i]) != string::npos) {
                white++;
                break;
            }
            j++;
        }
    }
    return make_pair(white - black, black).second;
}