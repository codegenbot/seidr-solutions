#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int codeFreq[6] = {0};
    int guessFreq[6] = {0};

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            ++codeFreq[code[i] - 'A'];
            ++guessFreq[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 6; ++i) whitePegs += min(codeFreq[i], guessFreq[i]);

    cout << whitePegs << " " << blackPegs << endl;

    return 0;
}