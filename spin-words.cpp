#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string spinWords(std::string input) {
    std::string output = "";
    std::istringstream iss(input);
    std::string word;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            std::string temp = word; 
            std::reverse(temp.begin(), temp.end()); 
            output += temp + " "; 
        } else {
            output += word + " "; 
        }
    }
    
    return output.substr(0, output.size()-1); 
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}