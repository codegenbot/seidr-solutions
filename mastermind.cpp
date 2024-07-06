#include <iostream>
#include <string>
using namespace std;
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;

    while (getline(cin, code)) { // read entire line of input into "code"
        getline(cin, guess); // read entire line of input into "guess"

        for (int i = 0; i < code.length(); i++) { // iterate through characters of "code" and "guess"
            if (code[i] == guess[i]) { // if characters match, increment blackPegs
                blackPegs++;
            } else if (code.find(guess[i]) != string::npos) { // if character in "code" is found in "guess", increment whitePegs
                whitePegs++;
            }
        }
        cout << blackPegs << endl; // print results
    }
}