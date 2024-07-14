#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;

    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += sentence[i];
        }
    }

    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}