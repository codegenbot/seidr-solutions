#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    vector<int> freqCode(6, 0), freqGuess(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++freqCode[code[i] - 'A'];
            ++freqGuess[guess[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white += std::min(freqCode[i], freqGuess[i]);
    }
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}