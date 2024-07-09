#include <iostream>
#include <vector>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    
    int black = 0, white = 0;
    std::vector<int> freq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            freq[code[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && freq[guess[i] - 'A'] > 0) {
            white++;
            freq[guess[i] - 'A']--;
        }
    }

    using namespace std; // Add this line for concise output
    
    std::cout << white << '\n' << black << '\n';
    
    return 0;
}