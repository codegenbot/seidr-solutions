#include <iostream>
#include <vector>
using namespace std;

void calculatePegs(string code, string guess) {
    int blackPegs = 0, whitePegs = 0;
    vector<int> codeFreqCode(6, 0), codeFreqGuess(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F' && codeFreqCode[code[i] - 'A'] > 0) ++whitePegs;
            if (guess[i] >= 'A' && guess[i] <= 'F' && codeFreqGuess[guess[i] - 'A'] > 0) ++whitePegs;
            if (code[i] >= 'A' && code[i] <= 'F') ++codeFreqCode[code[i] - 'A'];
            if (guess[i] >= 'A' && guess[i] <= 'F') ++codeFreqGuess[guess[i] - 'A'];
        }
    }
    
    cout << "Black Pegs: " << blackPegs << ", White Pegs: " << whitePegs << endl;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    calculatePegs(code, guess);
    return 0;
}