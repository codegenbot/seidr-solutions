#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count the number of correct colors (white pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }

    // Count the remaining correct colors (black pegs)
    for(char c : code) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(guess[j] == c && guess[j] != code[j]) {
                count++;
            }
        }
        whitePegs += count;
    }

    return blackPegs + whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}