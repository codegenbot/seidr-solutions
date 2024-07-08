#include <iostream>
#include <string>
using namespace std;

int duplicate_check(char ch, string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return (count > 1);
}

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;

    while (getline(cin, code)) {
        getline(cin, guess);

        for (int i = 0; i < code.length(); i++) {
            if (code[i] == guess[i]) {
                blackPegs++;
            } else if (!duplicate_check(guess[i], guess)) { // added check to prevent duplicate characters in the guess string
                whitePegs++;
            }
        }

        cout << whitePegs << " " << blackPegs << endl;
    }

    return 0;
}