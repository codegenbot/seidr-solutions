#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    size_t start = 0;
    
    while (start < input.length()) {
        size_t end = input.find(' ', start);
        
        if (end == std::string::npos) {
            output += input.substr(start);
            break;
        }
        
        std::string word = input.substr(start, end - start);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        output += word + " ";
        start = end + 1;
    }
    
    return output;
}

int main() {
    // test cases
    std::cout << spinWords("a") << std::endl;     // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl;     // hi
    
    return 0;
}