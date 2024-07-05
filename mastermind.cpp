#include <iostream>
#include <string>

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (code[i] == guess[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;
    return 0;