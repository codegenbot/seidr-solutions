Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t start = 0;
    
    for (size_t i = 0; i <= sentence.size(); ++i) {
        if (i == sentence.size() || (sentence[i] != ' ' && i < sentence.size())) {
            string word = sentence.substr(start, i - start);
            
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word;
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl; // "this is a tset"
    std::cout << spinWords("hi") << std::endl; // "hi"
    std::cout << spinWords("a b c d e f g h i j k l m n o p q r s t u v w x y z") << std::endl;
    return 0;
}