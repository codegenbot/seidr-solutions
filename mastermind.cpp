```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string mastermindCode;
    string guess;
    int whitePegs = 0;
    int blackPegs = 0;

    // input the Mastermind code and the guess
    cin >> mastermindCode >> guess;

    // check each character of the guess with the corresponding character of the Mastermind code
    for (int i = 0; i < 4; i++) {
        if (mastermindCode[i] == guess[i]) {
            blackPegs++;
        } else if (mastermindCode.find(guess[i]) != string::npos) {
            whitePegs++;
        }
    }

    // output the number of white pegs and black pegs
    cout << "White pegs: " << whitePegs << endl;
    cout << "Black pegs: " << blackPegs << endl;

    return 0;
}
```
Test cases:
```
Input: RRRR
RRRR
Output: 0
4

Input: BOYG
GYOB
Output: 4
0

Input: WYYW
BBOG
Output: 0
0

Input: GGGB
BGGG
Output: 2
2

Input: BBBB
OOOO
Output: 0
0
```