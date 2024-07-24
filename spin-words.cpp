#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::stringstream ss(sentence);
    std::string word;
    
    while (ss >> word) {
        if(word.length() >= 5)
            word = std::string(word.rbegin(), word.rend());
        result += word + " ";
    }
    
    return result.substr(0, result.size()-1);
}

int main(){
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}