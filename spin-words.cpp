#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        std::size_t wordEnd = pos;
        if (wordEnd + 1 < sentence.length() && sentence[wordEnd + 1] == ' ') {
            wordEnd++;
        }
        
        // Check the length of the word
        if (wordEnd - pos >= 5) {
            for (int i = wordEnd; i >= pos; --i) {
                result += sentence[i];
            }
        } else {
            result += sentence.substr(pos, wordEnd - pos + 1);
        }
        
        sentence.erase(0, wordEnd + 1);
    }
    
    // Add the last word
    if (sentence.length() > 0) {
        if (sentence.length() >= 5) {
            for (int i = sentence.length() - 1; i >= 0; --i) {
                result += sentence[i];
            }
        } else {
            result += sentence;
        }
    } else {
        result = sentence;
    }
    
    return result;
}

int main() {
    std::string sentence;
    while (std::cout << "Enter a string: ", std::getline(std::cin, sentence)) {
        std::cout << "Spin words: " << spinWords(sentence) << std::endl;
    }
    return 0;
}