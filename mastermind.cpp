#include <iostream>
#include <string>
using namespace std;
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    while (getline(cin, code)) {
        getline(cin, guess);
        if (code.length() != 4 || guess.length() != 4) {
            cerr << "Invalid input: code and guess must be 4 characters long." << endl;
            continue; // skip to next iteration of the loop
        }
        for (int i = 0; i < code.length(); i++) {
            if (code[i] == guess[i]) {
                blackPegs++;
            } else if (code.find(guess[i]) != string::npos && !whitePegs) {
                whitePegs++;
            }
        }
        cout << whitePegs << " " << blackPegs << endl;
    }
    return 0;
}