#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::string word = str.substr(0, pos);
        
        if (word.length() >= 5)
            word = std::string(word.rbegin(), word.rend());
        
        result += word + " ";
        str.erase(0, pos + 1);
    }
    
    if (str.length() >= 5)
        result += std::string(str.rbegin(), str.rend());
    else
        result += str;
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // should print a
    std::cout << spinWords("this is a test") << std::endl; // should print this is a test
    std::cout << spinWords("this is another test") << std::endl; // should print this is rehtona test
    std::cout << spinWords("hi") << std::endl; // should print hi
    
    return 0;
}