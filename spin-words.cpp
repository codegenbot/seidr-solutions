#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t start = 0;
    
    for (size_t end = 0; end <= sentence.size(); ++end) {
        if (end == sentence.size() || sentence[end] == ' ') {
            std::string word = sentence.substr(start, end - start);
            
            if (word.size() >= 5)
                result += std::string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            
            start = end + 1;
        }
    }
    
    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl;  // a
    std::cout << spinWords("this is a test") << std::endl;  // this is a test
    std::cout << spinWords("this is another test") << std::endl;  // this is rehtona test
    std::cout << spinWords("hi") << std::endl;  // hi
    return 0;
}