#include <iostream>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    if (code.size() != 4 || guess.size() != 4) {
        cout << "Both code and guess should be 4 characters long." << endl;
        return 0;
    }

    set<char> validChars = {'A', 'B', 'C', 'D', 'E', 'F'};
    for (char c : code) {
        if (validChars.find(c) == validChars.end()) {
            cout << "Invalid character in code." << endl;
            return 0;
        }
    }
    for (char c : guess) {
        if (validChars.find(c) == validChars.end()) {
            cout << "Invalid character in guess." << endl;
            return 0;
        }
    }
    
    set<int> unmatchedCode, unmatchedGuess;
    int blackPegs = 0, whitePegs = 0;
  
    // Remaining code for Mastermind game logic
}