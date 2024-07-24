#include <iostream>
#include <string>
using namespace std;

void mastermind(const string& code, const string& guess) {
    int whitePegs = 0, blackPegs = 0;
    int codeFreqCode[6] = {0};
    int codeFreqGuess[6] = {0};
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            if (codeFreqCode[code[i] - 'A'] > 0) ++whitePegs;
            if (codeFreqGuess[code[i] - 'A'] > 0) ++whitePegs;
            ++codeFreqCode[code[i] - 'A'];
            ++codeFreqGuess[guess[i] - 'A'];
        }
    }

    cout << "White Pegs: " << whitePegs << ", Black Pegs: " << blackPegs << endl;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    mastermind(code, guess);

    return 0;
}