#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white += std::min(codeCount[i], guessCount[i]);
    }
    
    std::cout << white << std::endl;
    std::cout << black << std::endl;
    
    return 0;
}