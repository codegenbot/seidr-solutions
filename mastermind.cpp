#include <iostream>
using namespace std;

void mastermind(const string& code, const string& guess) {
    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        int codeFreq[6] = {0};
        
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            if (codeFreq[code[i] - 'A'] > 0) {
                ++whitePegs;
            }
            if (codeFreq[guess[i] - 'A'] < 0) {
                ++whitePegs;
            }
            ++codeFreq[code[i] - 'A'];
            --codeFreq[guess[i] - 'A'];
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