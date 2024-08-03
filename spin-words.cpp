#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t start = 0;
    for (std::size_t end = 0; end <= str.size(); ) {
        if ((end == str.size() || str[end] == ' ') && start < end) {
            std::string word = str.substr(start, end - start);
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + (end == str.size() ? "" : " ");
            start = end + 1;
        }
        ++end;
    }
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; 
    std::cout << spinWords("this is a test") << std::endl; 
    std::cout << spinWords("this is another test") << std::endl; 
    std::cout << spinWords("hi") << std::endl; 
    return 0;
}