#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (char c : sentence) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;
    
    return result;
}

int main() {
    std::string sentence;
    while (true) {
        std::cout << "Enter a sentence: ";
        std::getline(std::cin, sentence);
        std::cout << spinWords(sentence) << std::endl;
    }
    return 0;
}