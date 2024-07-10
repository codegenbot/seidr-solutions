#include <iostream>
#include <vector>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int blackPegs = 0, whitePegs = 0;
    vector<int> freq(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            freq[code[i] - 'A']++;
            freq[guess[i] - 'A']--;
        }
    }

    for (int i = 0; i < 6; ++i) {
        if (freq[i] > 0) {
            whitePegs += freq[i];
        }
    }

    cout << whitePegs << "\n" << blackPegs << "\n";

    return 0;
}