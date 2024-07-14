#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        std::size_t wordEnd = pos;
        
        if (wordEnd + 1 < sentence.length()) {
            if (sentence[wordEnd + 1] == ' ') {
                wordEnd++;
                while (wordEnd < sentence.length() && sentence[wordEnd] == ' ')
                    wordEnd++;
            }
        }
        
        std::string word = sentence.substr(0, wordEnd);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word;
        sentence.erase(0, wordEnd + 1);
    }
    
    if (!sentence.empty()) {
        if (sentence.length() >= 5)
            std::reverse(sentence.begin(), sentence.end());
        result += sentence;
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