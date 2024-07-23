#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = '*';
            guess[i] = '*';
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != '*') {
            auto it = find(guess.begin(), guess.end(), code[i]);
            if (it != guess.end()) {
                white++;
                *it = '*';
            }
        }
    }
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}