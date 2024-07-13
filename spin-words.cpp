#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string input) {
    std::string output = "";
    std::string word;
    
    for (char c : input) {
        if (c == ' ') {
            output += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    output += word;
    
    int start = 0, end = 0;
    while (end < output.length()) {
        if ((output.find(' ', end) == std::string::npos || output.find(' ', end) - end > 4)) {
            end = output.length();
        } else {
            start = end + 1;
            end = output.find(' ', end);
        }
        
        while (start < end && output[start] != ' ') {
            start++;
        }
        
        if (end - start >= 5) {
            std::string temp = output.substr(start, end - start);
            std::reverse(temp.begin(), temp.end());
            output.replace(start, end - start, temp);
        }
    }
    
    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl; 
    std::cout << spinWords("this is a test") << std::endl; 
    std::cout << spinWords("this is another test") << std::endl; 
    std::cout << spinWords("hi") << std::endl; 
    return 0;
}