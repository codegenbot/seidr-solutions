#include <vector>
#include <iostream>
#include <string>
using namespace std;

int get_clue(const string& guess, const string& code) {
    int white_pegs = 0;
    int black_pegs = 0;

    for (int i = 0; i < guess.size(); i++) {
        if (guess[i] == code[i]) {
            black_pegs++;
        } else {
            for (int j = 0; j < guess.size(); j++) {
                if (guess[j] == code[i]) {
                    white_pegs++;
                }
            }
        }
    }

    return white_pegs + black_pegs;
}

int main() {
    string guess, code;
    cin >> guess >> code;
    cout << get_clue(guess, code) << endl;
    return 0;
}