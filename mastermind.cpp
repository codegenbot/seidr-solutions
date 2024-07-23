#include <iostream>
using namespace std;

int main() {
    string code, guess;
    int codeFreq[26] = {0}, guessFreq[26] = {0};

    int whitePegs = 0, blackPegs = 0;
    for (int i = 0; i < 26; i++) {
        whitePegs += min(codeFreq[i], guessFreq[i]);
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            ++blackPegs;
            --whitePegs;
        }
    }
    
    cout << whitePegs << " " << blackPegs << endl;

    return 0;
}