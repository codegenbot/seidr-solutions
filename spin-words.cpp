#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    std::string word = "";
    for (int i = 0; i < input.length(); i++) {
        if (i == input.length() || input[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            std::cout << word;
            if (i != input.length()) {
                std::cout << " ";
            }
            word = "";
        } else {
            word += input[i];
        }
    }
    return 0;
}