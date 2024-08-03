#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    int len;

    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i + 1] == ' ') {
            word = sentence.substr(i - len, len);
            len = 0;
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
        } else {
            len++;
        }
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << "Resulting sentence: " << spinWords(sentence) << std::endl;
    return 0;
}