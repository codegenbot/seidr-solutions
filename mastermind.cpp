#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    vector<int> codeCount(26, 0), guessCount(26, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 26; ++i) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }
    
    cout << whitePegs << "\n" << blackPegs << "\n";
    
    return 0;
} 