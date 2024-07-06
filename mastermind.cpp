#include <iostream>
#include <string>
using namespace std;
int main() {
    string mastermindCode, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> mastermindCode >> guess;
    for (int i = 0; i < 4; i++) {
        if (mastermindCode[i] == guess[4-i-1]) {
            blackPegs++;
        } else {
            whitePegs++;
        }
    }
    cout << "White pegs: " << whitePegs << endl;
    cout << "Black pegs: " << blackPegs << endl;
    return 0;
}