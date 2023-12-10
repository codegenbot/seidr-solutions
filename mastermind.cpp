#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string code = "RRRR";
    string guess = "RRRR";
    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (code.find(guess[i]) != string::npos) {
            whitePegs++;
        }
    }

    cout << "White pegs: " << whitePegs << endl;
    cout << "Black pegs: " << blackPegs << endl;
}