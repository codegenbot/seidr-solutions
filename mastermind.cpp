#include <iostream>
#include <string>

int main() {
    std::string code, guess;
    int whitePegs = 0, blackPegs = 0;
    std::cin >> code >> guess;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            int count = 0;
            for (int j = i + 1; j < code.size(); j++) {
                if (code[j] == guess[i]) {
                    count++;
                    break;
                }
            }
            whitePegs += count;
        }
    }
    std::cout << blackPegs << " " << whitePegs << std::endl;
    return 0;
}