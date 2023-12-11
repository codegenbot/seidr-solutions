#include <iostream>
#include <string>

using namespace std;

int main() {
    string mastermindCode, guess;
    int whitePegs = 0, blackPegs = 0;

    // get the Mastermind code and guess from the user
    cin >> mastermindCode >> guess;

    for (int i = 0; i < 4; i++) {
        if (mastermindCode[i] == guess[i]) {
            blackPegs++;
        } else if (mastermindCode.find(guess[i]) != string::npos) {
            whitePegs++;
        }
    }

    // output the number of white pegs and black pegs
    cout << whitePegs << " " << blackPegs << endl;

    return 0;
}