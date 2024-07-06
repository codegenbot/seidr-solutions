#include <iostream>
#include <string>
using namespace std;

int main() {
    string code, guess;
    char[] whitePegs = {}; // Initialize to an empty array
    int blackPegs = 0;

    while (getline(cin, code)) {
        getline(cin, guess);

        for (int i = 0; i < code.length(); i++) {
            if (code[i] == guess[i]) {
                blackPegs++;
            } else if (code.find(guess[i]) != string::npos && !whitePegs.contains(guess[i])) { // Check if the guessed character is already used as a white peg
                whitePegs.push_back(guess[i]);
            }
        }

        cout << whitePegs.size() << " " << blackPegs << endl;
    }

    return 0;
}