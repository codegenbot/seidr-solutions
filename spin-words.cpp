#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t start = 0;
    
    while (start < sentence.length()) {
        size_t end = sentence.find(" ", start);
        
        if (end == std::string::npos)
            end = sentence.length();
        
        std::string word = sentence.substr(start, end - start);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        
        start = end + 1;
    }
    
    return result.substr(0, result.length() - 1);
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