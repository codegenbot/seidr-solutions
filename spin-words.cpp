#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::stringstream ss(str);
    std::string word;
    
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
    }
    
    return result.substr(0, result.size()-1); // remove the last space
}

int main() {
    // test cases
    std::cout << spinWords("a") << std::endl; // output: a
    std::cout << spinWords("this is a test") << std::endl; // output: this is a test
    std::cout << spinWords("this is another test") << std::endl; // output: this is rehtona test
    std::cout << spinWords("hi") << std::endl; // output: hi
    
    return 0;
}