#include <iostream>
#include <string>
using namespace std;

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;

    while (getline(cin, code)) {
        getline(cin, guess);

        for (int i = 0; i < code.length(); i++) {
            if (code[i] == guess[i]) {
                blackPegs++;
            } else if (code.find(guess[i]) != string::npos && !whitePegs[guess[i] - '0']) { // added check to make sure the guessed character is not already used as a white peg
                whitePegs[guess[i] - '0']++; // increment the corresponding element in the whitePegs array
            }
        }

        cout << whitePegs << " " << blackPegs << endl;
    }

    return 0;
}