#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count correct color with correct position
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }

    // Count correct color but wrong position
    string codeCopy, guessCopy;
    addCharacter(codeCopy, code[0]);
    addCharacter(guessCopy, guess[0]);

    for(int i=1; i<4; i++) {
        if(codeCopy.find(code[i]) != string::npos && guessCopy.find(guess[i]) != string::npos) {
            whitePegs++;
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}