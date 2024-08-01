#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && codeFreq[guess[i]]) {
            whitePegs++;
            codeFreq[guess[i]]--;
        }
    }
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}