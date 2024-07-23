#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;
    int guessFreq[26] = {0};

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }

    for (char c : code) {
        if (guessFreq[c - 'A'] > 0) {
            ++whitePegs;
            --guessFreq[c - 'A'];
        }
    }

    whitePegs -= blackPegs;

    cout << whitePegs << " " << blackPegs << endl;

    return 0;
}