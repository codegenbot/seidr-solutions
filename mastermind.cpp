#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;
    set<int> countedIndices;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            countedIndices.insert(i);
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (countedIndices.count(i) == 0) {
            whitePegs += std::min(codeFreq[code[i]], guessFreq[code[i]]);
        }
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}