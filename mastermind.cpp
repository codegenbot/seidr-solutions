#include <iostream>
#include <string>
#include <utility>

using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    for(int i = 0; i < 4; i++) {
        int matchingIndex = -1;
        for(int j = 0; j < 4; j++) {
            if(code[i] == guess[j]) {
                matchingIndex = j;
                break;
            }
        }
        if(matchingIndex != -1) {
            if(i == matchingIndex) { 
                blackPegs++;
            } else {
                whitePegs++;
            }
        }
    }
    
    return std::make_pair(blackPegs, whitePegs);
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code (4 characters): ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << "Black pegs: " << result.first << ", White pegs: " << result.second << "\n";
}