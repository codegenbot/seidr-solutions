#include <iostream>
#include <string>
using namespace std;

bool isDuplicate(char ch, const std::string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch && str[i + 1] != ch) return true; // if character is found before and after the current position
    }
    return false;
}

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;

    while (getline(cin, code)) {
        getline(cin, guess);

        for (int i = 0; i < code.length(); i++) {
            if (code[i] == guess[i]) {
                blackPegs++;
            } else if (!isDuplicate(guess[i], guess)) { // added check to prevent duplicate characters in the guess string
                whitePegs++;
            }
        }

        cout << whitePegs << " " << blackPegs << endl;
    }

    return 0;
}