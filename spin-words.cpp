#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;

    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i + 1] == ' ') {
            word = sentence.substr(i);
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
        }
    }

    return result;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;

    return 0;
}