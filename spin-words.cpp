#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string reverseWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::vector<std::string> words;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }
    
    std::ostringstream oss;
    for (const auto& w : words) {
        oss << w << " ";
    }
    
    std::string reversedSentence = oss.str();
    reversedSentence.pop_back(); // remove the trailing space
    
    return reversedSentence;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    
    std::string result = reverseWords(sentence);
    std::cout << result << std::endl;
    
    return 0;
}