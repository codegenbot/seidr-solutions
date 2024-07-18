#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int blackPegs = 0, whitePegs = 0;
    vector<int> codeFreq(6, 0), guessFreq(6, 0);

    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i] - '0']++;
            guessFreq[guess[i] - '0']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        whitePegs += min(codeFreq[i], guessFreq[i]);
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}