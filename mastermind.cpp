#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    std::vector<int> freq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            freq[code[i] - 'A']++;
            freq[guess[i] - 'A']--;
        }
    }
    
    for (int f : freq) {
        if (f > 0) whitePegs += f;
    }
    
    std::cout << whitePegs << "\n" << blackPegs << '\n';
    
    return 0;
}