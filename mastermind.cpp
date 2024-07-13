#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int white_pegs = 0, black_pegs = 0;
    vector<int> code_freq(6, 0), guess_freq(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            code_freq[code[i] - '1']++;
            guess_freq[guess[i] - '1']++;
        }
    }

    for (int i = 0; i < 6; ++i) {
        white_pegs += min(code_freq[i], guess_freq[i]);
    }

    cout << white_pegs << endl << black_pegs << endl;

    return 0;
}