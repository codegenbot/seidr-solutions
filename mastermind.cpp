#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> freq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            freq[code[i] - 'A']++;
            freq[guess[i] - 'A']--;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        if (freq[i] > 0) {
            white += freq[i];
        }
    }
    
    white = std::max(0, white);
    
    cout << white << "\n" << black << "\n";
    
    return 0;
}