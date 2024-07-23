```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                words.push_back(std::string(word.rbegin(), word.rend()));
            else
                words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5)
        words.push_back(std::string(word.rbegin(), word.rend()));
    else
        words.push_back(word);
    
    std::string result;
    for (const auto& w : words)
        result += w + " ";
    
    return result.substr(0, result.size()-1); 
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}