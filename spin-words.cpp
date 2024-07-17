#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t start = 0;
    for (std::size_t end = 0; end <= sentence.size(); ++end) {
        if ((end == sentence.size()) || (sentence[end] == ' ')) {
            std::string word = sentence.substr(start, end - start);
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            start = end + 1;
        }
    }
    return result;
}

int main() {
    // Example usage:
    std::cout << spinWords("this is another test") << std::endl; 
    return 0;
}