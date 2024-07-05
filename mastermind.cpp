```c++
#include <iostream>
using namespace std;

int totalMatchingCharacters(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        int j = 0;
        while (j < 4 && guess[j] != code[i]) {
            j++;
        }
        if (j < 4) {
            count++;
        }
    }
    return count;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int totalMatching = totalMatchingCharacters(code, guess);
    int blackPegs = totalMatching - whitePegs(code, guess);

    cout << blackPegs << endl;
    cout << (totalMatching - blackPegs) << endl; 

    return 0;
}