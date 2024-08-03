#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count white pegs
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (code[i] == guess[j] && code[i] != guess[i]) {
                whitePegs++;
                break;
            }
        }
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    return {blackPegs, whitePegs};
}

int main() {
    string code;
    string guess;

    cin >> code >> guess;

    pair<int, int> result = mastermind(code, guess);

    cout << result.second << endl;
    cout << result.first << endl;

    return 0;
}