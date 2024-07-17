#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t start = 0;
    
    for (size_t i = 0; i <= sentence.size(); ++i) {
        if (i == sentence.size() || sentence[i] == ' ') {
            std::string word = sentence.substr(start, i - start);
            
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            start = i + 1;
        }
    }
    
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string sentence;
    while (true) {
        std::cout << "Enter a sentence: ";
        std::getline(std::cin, sentence);
        if (sentence == "exit") break;
        std::cout << spinWords(sentence) << std::endl;
    }
    return 0;
}