#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' '; // Mark the position as used in the code
            guess[i] = ' '; // Mark the position as used in the guess
        }
    }
    
    // Count white pegs
    for (int i = 0; i < 4; i++) {
        if (code.find(guess[i]) != string::npos && code[i] != ' ') {
            whitePegs++;
            code[i] = ' '; // Mark the position as used in the code
        }
    }
    
    return blackPegs, whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}